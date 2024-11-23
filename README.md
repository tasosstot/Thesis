# Comparative Study of JavaScript and WebAssembly: Algorithm Implementations

This repository contains the code implementations used in the thesis **"Comparative Study of JavaScript and WebAssembly"**. These implementations serve as benchmarks to evaluate the performance of JavaScript and WebAssembly for various computational tasks across three categories: **Image Processing**, **Numerical Computations**, and **Sorting Algorithms**.

## Algorithms Included

### Image Processing
1. **Image Convolution**: Applies a kernel to an image for edge detection and sharpening.
2. **Image Grayscale**: Converts a colored image to grayscale.
3. **Image Threshold**: Converts an image to a binary image based on a threshold value.

### Numerical Computations
1. **Fibonacci**: Computes Fibonacci numbers iteratively.
2. **MultiplyDouble**: Multiplies three double-precision floating-point numbers.
3. **MultiplyInt**: Multiplies three integers.
4. **MultiplyVecDouble**: Multiplies corresponding elements of two double arrays.
5. **MultiplyVecInt**: Multiplies corresponding elements of two integer arrays.

### Sorting Algorithms
1. **BubbleSort**: Simple sorting algorithm using pairwise comparisons.
2. **QuickSortDouble**: QuickSort implementation for an array of doubles.
3. **QuickSortInt**: QuickSort implementation for an array of integers.
4. **ReverseArray**: Reverses the elements of an array.

## Structure of the Repository


## How to Use
1. Clone the repository:
   ```bash
   git clone https://github.com/your-username/Comparative-JS-WASM.git
   cd Comparative-JS-WASM

2. Navigate to the desired folder (e.g., ImageProcessing) and execute the JavaScript files using Node.js or in a browser environment.

3. For WebAssembly:
   i Compile the corresponding C/C++ code to WebAssembly using tools like Emscripten.
   ii Run the generated .wasm file in a browser or Node.js with the appropriate glue code.

Benchmarks
The algorithms have been tested across multiple browsers using different derivatives of JavaScript and WebAssembly. Results are included in the thesis as tables and graphs, showcasing the performance improvements and trade-offs.

License
This repository is licensed under MIT License.

Acknowledgments
This project was part of the research thesis, and the algorithms were implemented and tested to evaluate WebAssembly's potential to complement or outperform JavaScript in specific computational scenarios.
