#include <stdlib.h>
#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"
#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "stb_image_write.h"

void imageConvolute(unsigned char *data,
                    unsigned char *data2,
                    int width, int height,
                    double *weights,
                    int wwidth, int wheight) {
  int halfWWidth = wwidth / 2;
  int halfWHeight = wheight / 2;
  for (int y = 0; y < height; y++) {
    for (int x = 0; x < width; x++) {
      double r = 0.0;
      double g = 0.0;
      double b = 0.0;
      double a = 0.0;
      for (int wy = 0; wy < wheight; wy++) {
        int sy = y + wy - halfWHeight;
        if (sy < 0 || sy >= height)
          continue;
        for (int wx = 0; wx < wwidth; wx++) {
          int sx = x + wx - halfWWidth;
          if (sx < 0 || sx >= width)
            continue;
            int index = sy * width + sx;
            double weight = weights[wy*wwidth+wx];
            r += data[index*4+0] * weight;
            g += data[index*4+1] * weight;
            b += data[index*4+2] * weight;
            a += data[index*4+3] * weight;
        }
      }
      int index = y * width + x;
      data2[index*4+0] = r;
      data2[index*4+1] = g;
      data2[index*4+2] = b;
      data2[index*4+3] = a;
    }
  }
}

int main(void) {
    double weights[] = {
        1/25, 1/25, 1/25, 1/25, 1/25,
        1/25, 1/25, 1/25, 1/25, 1/25,
        1/25, 1/25, 1/25, 1/25, 1/25,
        1/25, 1/25, 1/25, 1/25, 1/25,
        1/25, 1/25, 1/25, 1/25, 1/25
    };

    int wWidth = 5;
    int wHeight = 5;

    int width, height, channels;
    unsigned char *img = stbi_load("main_image.jpg", &width, &height, &channels, 0);
    unsigned char *img2 = stbi_load("main_image.jpg", &width, &height, &channels, 0);
    if(img == NULL) {
          printf("Error in loading the image\n");
          exit(1);
    }


    imageConvolute(
       img,
       img2,
       width,
       height,
       &weights,
       wWidth,
       wHeight
    );
    stbi_write_jpg("1.jpg", width, height, channels, img, 100);
    //stbi_write_png("sky2.png", width, height, bpp, image, width * bpp);

    stbi_image_free(img);
    //stbi_image_free(image2);
}
