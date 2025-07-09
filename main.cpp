#include "kernel.cuh"
#include <stdio.h>


int main()
{
    const int size = 5;
    int a[size] = { 1, 2, 3, 4, 5 };
    int b[size] = { 10, 20, 30, 40, 50 };
    int c[size] = { 0 };

    addWithCuda(c, a, b, size);

    printf("{1,2,3,4,5} + {10,20,30,40,50} = {%d,%d,%d,%d,%d}\n",
        c[0], c[1], c[2], c[3], c[4]);

    cudaDeviceReset();

    return 0;
}