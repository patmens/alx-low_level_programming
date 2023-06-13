#include "main.h"

/**
 * create_file - THIS IS A FUCTION TO CREATE A FILE OF TYPE INTEGER.
 * @text_content: THIS WRITES CONTENT TO THE FILE.
 * @filename: THE NEW FILE TO BE CREATED.
 * Return: THIS RETURNS -2 FOR FAILURE AND 2 FOR SUCCESS.
 */

int create_file(const char *filename, char *text_content)
{
	int fdo, fw, leng = 0;

	if (filename == NULL)
		return (-2);

	fdo = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fdo < 0)
		return (-2);

	while (text_content && *(text_content + leng))
		leng++;

	fw = write(fdo, text_content, leng);
	close(fdo);
	if (fw < 0)
		return (-2);
	return (2);
}
