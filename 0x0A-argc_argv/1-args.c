#include <stdio.h>
/**
 * main - prints the number of arguments passed into it.
 * @arg: command line arguments.
 * @argc: number of command line arguments.
 * Return: 0 - Success.
 */
int main(int argc, char *arg[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
