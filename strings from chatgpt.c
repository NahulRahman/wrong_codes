#include <stdio.h>
#include <string.h>
#define MAX 1000
int main() {
    char A[MAX];
    char B[MAX];
    char C[MAX];
    char temp;
    printf("%d %d\n", strlen(A), strlen(B));
    strcpy(C, A);
    strcat(C, B);
    printf("%s\n",C);
    temp = A[0];
    A[0] = B[0];
    B[0] = temp;
    printf("%s %s\n",A,B);
    return 0;
}
