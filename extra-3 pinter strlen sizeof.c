#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char *pstr = "hello";
	char str[6] = "hello";
	printf("pstr: size: %lu, len: %lu \n", sizeof pstr, strlen(pstr));	
	printf("str: size: %lu, len: %lu \n", sizeof str, strlen(str));	

	printf("size including null terminator \n");
	printf("strlen does not contain null terminator \n");
	return 0;
}