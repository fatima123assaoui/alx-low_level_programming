#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * @argc: parametre
 * @argv: parametre
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int m;

	if (argc == 3)
	{
		m = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", m);
	}
	else
	{
		printf("Error\n");
	return (1);
	}
	return (0);
}
