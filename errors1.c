#include "error.h"

/**
 * err_usage - wrong usage of monty
 *
 * Description: If the argument to monty program is less than 2
 * Return: nothing
 */
void err_usage(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}

/**
 * err_file_open - file open error
 * @filename: name of the file that could not be opened
 *
 * Description: The program is run if it is impossible to open a file
 *
 * Return: nothing
 */
void err_file_open(char *filename)
{
	if (!filename)
	{
		return;
	}
	fprintf(stderr, "Error: Can\'t open file %s\n", filename);
	exit(EXIT_FAILURE);
}


/**
 * err_malloc - error message for malloc failure
 *
 * Return: nothing
 */
void err_malloc(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
}
