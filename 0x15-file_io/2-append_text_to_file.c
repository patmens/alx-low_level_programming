#include "main.h"

/**
 * append_text_to_file - FUNCTION APPENDS A TEXT TO THE END OF A FILE.
 * @text_content: NULL TERMINATED STRING.
 * @filename: NAME OF FILE TO BE APPENDED.
 * Return: 1 ON SUCCESS OR -1 ON FAILURE.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, res_write, leng;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
			return (-1);
		leng = 0;
		while (*(text_content + leng) != '\0')
			leng++;
		res_write = write(fd, text_content, leng);
		if (res_write == -1)
		{
			close(fd);
			write(STDOUT_FILENO, "fails", 5);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
