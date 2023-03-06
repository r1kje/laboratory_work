#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct student_session {
	int index;
	char surname[30];
	int  score;
};

int main() {
	FILE *file = fopen("test_sem1.txt", "w");

	fclose(file);

	return 0;
}
