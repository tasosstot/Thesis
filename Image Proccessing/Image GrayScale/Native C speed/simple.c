#include <stdlib.h>
#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"
#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "stb_image_write.h"
#include <time.h>

void grayscale(unsigned char *img, unsigned char *gray_img, size_t img_size, int channels, int gray_channels) {
    for(unsigned char *p = img, *pg = gray_img; p != img + img_size; p += channels, pg += gray_channels) {
        *pg = (uint8_t)((*p + *(p + 1) + *(p + 2))/3.0);
        if(channels == 4) {
            *(pg + 1) = *(p + 3);
        }
    }
}



int main(void) {
    int width, height, channels;
    double time_spent = 0.0;
    unsigned char *img = stbi_load("Lena_colors.jpg", &width, &height, &channels, 0);
    //clock_t timeSum = clock();

    if(img == NULL) {
        printf("Error in loading the image\n");
    exit(1);
    }

    //convert the input image to gray
    size_t img_size = width  * height * channels;
    int gray_channels = channels == 4 ? 2 : 1;
    size_t gray_img_size = width * height * gray_channels;

    unsigned char *gray_img = malloc(gray_img_size);
    if(gray_img == NULL){
        printf("problem to allocate");
        exit(1);
    }

    for (int it=0; it<50; it++){

        //clock_t start = clock();
        clock_t begin = clock();
        grayscale(img, gray_img, img_size, channels, gray_channels);
        clock_t end = clock();
        time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
        //timeSum += start - clock();
    }
    printf("The elapsed time is %f seconds", time_spent);
    //double time = (double)(timeSum );
    //printf("aaaa %lf\n", time);


    stbi_write_jpg("3a3.jpg", width, height, gray_channels, gray_img, 100);

}
