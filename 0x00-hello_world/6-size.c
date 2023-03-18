#include <stdio.h>
/**
 * main - main function of the code
 *
 * Return: always 0
 */
int main(void)
{
	int int_size;
	char char_size;
	float float_size;
	long int long_int;
	long long int l_long_int;

	printf("Size of a char: %lu Byte(s)\n", sizeof(char_size));
	printf("Size of an int: %lu Byte(s)\n", sizeof(int_size));
	printf("Size of a long int: %u Byte(s)\n", sizeof(long_int));
	printf("Size of a long long int: %lu Byte(s)\n", sizeof(l_long_int));
	printf("Size of a char: %lu Byte(s)\n", sizeof(float_size));
	return (0);
}
