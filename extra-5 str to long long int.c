#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <limits.h>

void check_range(const char *str)
{
	errno = 0; // Reset errno to 0 before the call
	unsigned long long num = strtoull(str, NULL, 10);

	// Check for conversion errors or overflow
	if (errno == ERANGE)
	{
		if (num == ULLONG_MAX)
		{
			printf("The number '%s' is too large and overflows.\n", str);
		}
		else
		{
			printf("The number '%s' is too small and underflows.\n", str);
		}
	}
	else if (num == 0 && errno != 0)
	{
		printf("Conversion error occurred.\n");
	}
	else
	{
		printf("The number '%s' is within range: %llu\n", str, num);
	}
}

int main()
{
	char *str1 = "18446744073709551615"; // Maximum value for unsigned long long
	char *str2 = "18446744073709551616"; // Exceeds the maximum value for unsigned long long

	check_range(str1);
	check_range(str2);

	return 0;
}

// In C programming, checking if a number is over an allowed range, especially when dealing with conversion from a string, involves a few steps. This process can vary depending on whether you're dealing with signed or unsigned numbers, as well as the specific integer type you're working with (e.g., int, long, unsigned long long). Here's how you can approach this for different scenarios:

// Using strtol, strtoul, strtoll, and strtoull
// These functions convert a string to a long integer (strtol), an unsigned long integer (strtoul), a long long integer (strtoll), and an unsigned long long integer (strtoull) respectively. They provide mechanisms to detect overflows and other conversion errors.

// c
// Copy code
// #include <stdio.h>
// #include <stdlib.h>
// #include <errno.h>
// #include <limits.h>

// void check_range(const char* str) {
//     errno = 0; // Reset errno to 0 before the call
//     unsigned long long num = strtoull(str, NULL, 10);

//     // Check for conversion errors or overflow
//     if (errno == ERANGE) {
//         if (num == ULLONG_MAX) {
//             printf("The number '%s' is too large and overflows.\n", str);
//         } else {
//             printf("The number '%s' is too small and underflows.\n", str);
//         }
//     } else if (num == 0 && errno != 0) {
//         printf("Conversion error occurred.\n");
//     } else {
//         printf("The number '%s' is within range: %llu\n", str, num);
//     }
// }

// int main() {
//     char *str1 = "18446744073709551615"; // Maximum value for unsigned long long
//     char *str2 = "18446744073709551616"; // Exceeds the maximum value for unsigned long long

//     check_range(str1);
//     check_range(str2);

//     return 0;
// }
// General Strategy
// Use the Correct Conversion Function: Choose strtol, strtoul, strtoll, or strtoull based on the type of integer you're dealing with.
// Reset errno Before Conversion: Set errno to 0 before calling the conversion function to ensure it's not affected by previous errors.
// Check errno After Conversion: If errno is set to ERANGE, an overflow or underflow has occurred.
// Compare Against Limits: Additionally, you can compare the converted value against the predefined limits in <limits.h>, such as INT_MAX, LONG_MAX, ULLONG_MAX, etc., to determine if the value is within the allowed range for its type.
// Handle Special Cases: Ensure you also handle cases where the conversion function might return 0, which can indicate either a successful conversion of the string "0" or an error, depending on the state of errno.
// This approach allows you to robustly check if a numerical value obtained from a string conversion is within the range that can be accurately represented by a given C integer type, and to handle cases where the value is too large or too small properly.