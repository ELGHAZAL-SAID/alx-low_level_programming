#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *concat;

    concat = string_nconcat("said el ghazal test this is just shit of him and her and what and and end ", "said wtf s going on", 3);
    printf("%s\n, %d", concat, sizeof(*concat));
    free(concat);
    return (0);
}
