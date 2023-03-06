#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	FILE *file = fopen("test_sem1.txt", "w");

	fclose(file);

	return 0;
}