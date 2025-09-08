Overview

This project demonstrates how to represent a sparse matrix in C++ using three separate vectors for row indices, column indices, and values.
A sparse matrix is a matrix in which most of the elements are zero. Instead of storing all elements (including zeros), this approach stores only the non-zero values, saving memory and making the program more efficient.

Approach

The program first defines a normal 2D matrix.

It checks each element of the matrix:

If the element is non-zero, it stores the row index, column index, and value into three vectors.

Finally, it displays both:

The original matrix (in 2D form).





https://github.com/vishnu8978/sparse_using_array/blob/main/Sparse_Using_Array.cpp
