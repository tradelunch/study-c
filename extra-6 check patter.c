#include <string.h>

/**
 * @details check GETFILE
 * if yes, return offset + len;
 * if no, return -1;
 */
int check_pattern(char *, int, int, char *);

int main(int argc, char const *argv[])
{
	char *res_header = "GETFILE OK 4\r\n\r\ngood";

	char *pattern = "GETFILE";

	int new_offset = check_pattern(res_header, 0, strlen(pattern), pattern);

	return 0;
}

int check_pattern(char *res_header, int offset, int len, char *pattern)
{

	char *pattern_p = pattern;

	int i = offset;
	int cnt = 0;
	while (i < offset + len)
	{
		printf(">> pattern_p: %s\n", pattern_p);

		if (*(res_header + i) == *pattern_p)
		{
			pattern_p += 1;
			cnt++;
		}
		else
		{
			pattern_p = pattern;
			cnt = 0;
		}

		if (cnt == len)
		{
			return offset + len;
		}

		i++;
	}

	return 0;
}
