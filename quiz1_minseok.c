#include <stdio.h>

#define SIZE 5

int isArrayEqual(int* , int* );

int main(void) {
    int i = 0;
    int A[SIZE] = { 10, 15, 20, 25, 30 };
    int B[SIZE] = { 10, };

    if (isArrayEqual(A, B) == 1)
        printf("배열이 같습니다.\n");
    else
        printf("배열이 다릅니다.\n");
}

int isArrayEqual(int* A, int* B) {
    int i;

    for (i = 0; i < SIZE; i++)
    {
        if (A[i] != B[i])
            return 0;
    }
	return 1;
}