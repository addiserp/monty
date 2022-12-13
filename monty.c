#include "monty.h"

/**
 * main - opens a monty file
 * @argc: arguments for count
 * @argv: arguments for array 
 * Return: status of the program
 */
int main(int argc, char *argv[])
{
	FILE *file;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	parsefile(file);
	return (EXIT_SUCCESS);
