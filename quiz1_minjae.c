#include <stdio.h>

#define SIZE 5

int isArrayEqual(int* A, int* B, int size);

int main() {
   int A[SIZE] = { 10, 15, 20, 25, 30 };
   int B[SIZE] = { 0, };
   int C[SIZE] = { 10, 15, 20, 25, 30 };

   if (isArrayEqual(A, B, SIZE))
      printf("Same array\n");
   else
      printf("Different array\n");

   if (isArrayEqual(A, C, SIZE))
      printf("Same array\n");
   else
      printf("Different array\n");

   return 0;
}

int isArrayEqual(int* A, int* B, int size) {
   int flag = 1;
   for (int i = 0; i < size; i++)
      if ((*A + i) != (*B + i))
            flag = 0;

   return flag;
}