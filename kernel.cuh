#pragma once
#include "cuda_runtime.h"
#include "device_launch_parameters.h"

__global__ void addKernel(int* c, int* a, int* b);

void addWithCuda(int* c, int* a, int* b, unsigned int size);

