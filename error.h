#ifndef _ERROR_H
#define _ERROR_H

#include <stdio.h>
#include <stdlib.h>


#define UNUSED __attribute__((unused))


void err_usage(void);
void err_file_open(char *filename);
void err_malloc(void);

#endif	/* _ERROR_H */
