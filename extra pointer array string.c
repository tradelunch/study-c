#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char *pstr = "FILE_END";
	char str[9] = "FILE_END";
	printf("length:: pointer: %lu, array: %lu\n", strlen(pstr), strlen(str));
	printf("size:: pointer: %lu, array: %lu\n", sizeof(pstr), sizeof(str));
	return 0;
}