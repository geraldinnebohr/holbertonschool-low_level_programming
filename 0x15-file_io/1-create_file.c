#include "holberton.h"

/**
 *_strlen - function that returns the length of a string
 *Return: Always i
 *@s: is a character
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}

/**
 * create_file - function that creates a file
 * @filename: name of the file pointer
 * @text_content: content of the file
 * Return: Bytes read.
 */
int create_file(const char *filename, char *text_content)
{
	int w;
	ssize_t les;

	if (filename == NULL)
		return (-1);


	w = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (w == -1)
		return (-1);

	if (text_content != NULL)
	{
		les = write(w, text_content, _strlen(text_content));

		if (les == -1)
			return (0);
	}

	close(w);

	if (les == -1)
		return (-1);
	else
		return (1);
}
