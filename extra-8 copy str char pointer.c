#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char *str = "01234567890123456789";
	char *ls = "-------------------------";

	char *pstr1 = malloc(100 * sizeof(char));
	char *pstr2 = malloc(100 * sizeof(char));
	char *pstr3 = malloc(100 * sizeof(char));
	char *pstr4 = malloc(100 * sizeof(char));
	char arr[50];

	memcpy(pstr1, str, strlen(str) + 1);

	printf("1pstr1: %s\n", pstr1);

	memcpy(pstr2, str, strlen(str));
	printf("2 pstr2: %s\n", pstr2);

	memcpy(pstr3, str, sizeof(str));
	printf("3 pstr3: %s\n", pstr3);

	memcpy(pstr4, ls, strlen(ls));
	printf("3-1 pstr4: %s\n", pstr4);

	memcpy(pstr4, str, strlen(str));
	printf("3-2 pstr4: %s\n", pstr4);

	printf("arr: %s\n", arr);

	return 0;
}
