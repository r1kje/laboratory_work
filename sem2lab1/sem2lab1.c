#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {

    int c, ns = 0;
    int flag = 1;

    printf("Enter string: ");
    printf("\n");
    while (flag == 1)
    {
        c = getchar();

        (c != ' ') ? ns = 0 : ++ns;
        if (ns <= 1) { printf("%c", c); }
        if (c == '\n') { flag = 0; }
    }

    printf("\n");
    return flag;
}
