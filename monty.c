#include "monty.h"

/**
 * main - main program for monty
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: Usage
 * monty <file>
 *
 * Returns: returns EXIT_SUCCESS always
 */
int main(int argc, char *argv[])
{
	FILE *fd_file = NULL;

	/* check for correct usage */
	if (argc < 2)
		err_usage();

	/* open file */
	fd_file = fopen(argv[1], "r");
	if (!fd_file)
		err_file_open(argv[1]);

	/* execute file */
	run_monty(fd_file);

	return (EXIT_SUCCESS);
}
