#include "main.h"

/**
 * read_textfile - THIS FUNCTION READS A FROM A TEX FILE AND PRINTS THE CONTENT.
 * @filename: NAME OF THE FILE.
 * @letters: NUMBER OF PRINTED LETTERS.
 *
 * Return: RETURNS 0 WHEN FUNCTION FAILS.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdee;
	ssize_t ndee, nwr;
	char *buf;

	if (!filename)
		return (0);

	fdee = open(filename, O_RDONLY);

	if (fdee == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	ndee = read(fdee, buf, letters);
	nwr = write(STDOUT_FILENO, buf, ndee);

	close(fdee);

	free(buf);

	return (nwr);
}
