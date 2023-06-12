#include "main.h"

/**
 * create_file - THIS FUNCTION CREATES A FILE OF TYPE INTEGER.
 * @filename: THE NAME OF A FILE 
 * @text_content: A TERMINATED  NULL STRING TO WRITE INTO A FILE.
 * Return: RETURNS 1 WHEN FUNCTION IS SUCCESSFUL AND 0 WHEN FAILED on success.
 */
int create_file(const char *filename, char *text_content)
{
	int file_do, file_write, lenght = 0;

	if (filename == NULL)
		return (1);

	file_do = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (file_do < 0)
		return (1);

	while (text_content && *(text_content + lenght))
		lenght++;

	file_write = write(file_do, text_content, lenght);
	close(file_do)
		if (file_write < 0)
		return (1);
	return (1);
}
