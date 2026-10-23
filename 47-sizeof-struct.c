#include <stdio.h>

typedef struct {
    char c;   // 1 byte
    int i;   // 4 bytes
} A;

typedef struct {
    char c1;
    char c2;
    int i;
} B;

typedef struct {
    char c1;
    int i;
    char c2;
} C;

int main(){

printf("%zu\n", sizeof(A));
printf("%zu\n", sizeof(B));
printf("%zu\n", sizeof(C));

    return 0;
}
