#include "monty.h"
#include "error.h"


/**
 * run_monty - executes each line of the file description passed
 * @fd_file: a FILE pointer to an open file stream
 *
 * Return: EXIT_SUCCESS if successful
 */
int run_monty(UNUSED FILE *fd_file)
{
	UNUSED char *line;
	size_t BUFSIZE = 256;
	size_t line_num = 0;
	char *delim = " \t";
	char *args[2] = {0, 0};

	for (line_num = 1; getline(&line, &BUFSIZE, fd_file) != -1; line_num++)
	{
		printf("\nline %ld: %s\n", line_num, line);
		args[0] = strtok(line, delim);	/* get the first two tokens */
		args[1] = strtok(NULL, delim);

		printf("args[0] = %s\t: args[1] = %s\n", args[0], args[1]);
	}

	/* getline returns (-1) at EOF or allocation error */
	printf("\nDONE READING FILE\n");	/* test */
	/* In a loop */
		/* read first line */

		/* tokenize string */

		/* compare first token with all the known opcodes */

		/* If recognized, call the required function */

		/* else generate error message Unkown instruction */

	/* Until the EOF File is reached */


	/* freeing used space */
	return (EXIT_SUCCESS);
}
