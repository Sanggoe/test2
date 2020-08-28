#include <stdio.h>
#define SIZE 5
int isArrayEqual(int *arr1, int *arr2, int size);
int sort(int *arr, int size);

int main(void) {
   int A[SIZE] = {10, 15, 20, 25, 30};
   int B[SIZE] = {0, };
   int C[SIZE] = {10, 15, 20, 25, 30};

   if (isArrayEqual(A, C, SIZE))
      printf("Same array\n");
   else
      printf("Different array\n");

   return 0;
}

int isArrayEqual(int *arr1, int *arr2, int size) {
   int i, flag = 0;

   for (i = 0; i < size; i++)
      if (*(arr1 + i) != *(arr2 + i))
         flag = 1;

   if (!flag)
      return 1;
   else
      return 0;
}