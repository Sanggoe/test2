#include <stdio.h>

#define SIZE 5

int isArrayEqual(int* , int* );

int main(void) {
    int i = 0;
    int A[SIZE] = { 10, 15, 20, 25, 30 };
    int B[SIZE] = { 10, };

    if (isArrayEqual(A, B) == 1)
        printf("�迭�� �����ϴ�.\n");
    else
        printf("�迭�� �ٸ��ϴ�.\n");
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