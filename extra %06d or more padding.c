#include <stdio.h>

#define PATH_BUFFER_SIZE 256

int main()
{
	char buffer[20];
	int num = 123;

	char local_path1[PATH_BUFFER_SIZE];
	char local_path2[PATH_BUFFER_SIZE];
	int counter = 42;
	const char *req_path = "/path/to/file";

	snprintf(local_path1, PATH_BUFFER_SIZE, "%s_%06d", &req_path[1], counter++);
	printf("Formatted path: %s\n", local_path1);

	snprintf(local_path2, PATH_BUFFER_SIZE, "%s_%*d", &req_path[1], 10, counter++);
	printf("Formatted path: %s\n", local_path2);
	printf("DONE+\n");

	return 0;
}