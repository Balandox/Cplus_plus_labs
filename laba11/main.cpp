#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "prototype.h"

/*�������� ������� void argssplit(char* args, int* argc, char* argv[]), ����������� ������ args �� �����.
����� ������� � ������������ ������(malloc).
������� ������ ������� ���������� ����������(argc) � ������ ����������  �� ���(*argv[]).*/

int main() {
	char* str = NULL;
	int count = 0, amought_w = 0, len = 0, idx = 0;
	char**argv = NULL;
	printf("Input string: ");
	str = get_string(&len);
	argssplit(str, &amought_w, &argv);
	printf("\nAmounght of words: %d\n\n", amought_w);
	for (int i = 0; i < amought_w; i++) 
		printf("%s\n", argv[i]);
	for (int i = 0; i < amought_w ; i++)
		free(argv[i]);
	free(str);
	return 0;
	}

