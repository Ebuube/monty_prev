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
	size_t nread = 0;
	size_t BUFSIZE = 256;

	nread = getline(&line, &BUFSIZE, fd_file);
	if (nread > BUFSIZE - 1 && line[nread] != '\n')
	{
		printf("VERY LONG LINE");
		exit(EXIT_FAILURE);
	}
		
	printf("line: %s\nnread = %ld\n", line, nread);
	/* getline returns (-1) at EOF or allocation error */
	printf("\nHELLO I AM WORKING\n");	/* test */
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
