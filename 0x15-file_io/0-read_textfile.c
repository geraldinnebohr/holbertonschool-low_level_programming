#include "holberton.h"
/**
 * read_textfile - function that reads a text file and prints it
 * @filename: name of the file pointer
 * @letters: amount of letters
 * Return: Bytes read.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int w;
	char *buf;
	ssize_t let, les;

	buf = malloc(letters);

	if (buf == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	w = open(filename, O_RDONLY);

	if (w == -1)
		return (0);

	let = read(w, buf, letters);

	les = write(STDOUT_FILENO, buf, let);

	if (les == -1)
		return (0);
	close(w);

	return (let);
}
