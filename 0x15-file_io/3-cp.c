#include "holberton.h"
/**
 * errors - function that creates conditions for errors
 * @error_name: is an integer
 * @arg: pointer to char
 * @fd: file descriptor
 */

void errors(int error_name, char *arg, int fd)
{
	switch (error_name)
	{
	case 1:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);

	case 2:
		dprintf(STDERR_FILENO,
			 "Error: Can't read from file %s\n", arg);
		exit(98);

	case 3:
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", arg);
		exit(99);

	case 4:
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - function that copies the content of a file
 * @argc: is an integer
 * @argv: pointer to char
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int arg1, arg2, close1, close2, len = 1024;
	char buf[1024];

	if (argc != 3)
		errors(1, NULL, 0);

	arg1 = open(argv[1], O_RDONLY);
	arg2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (arg1 == -1)
		errors(2, argv[1], 0);

	if (arg2 == -1)
		errors(3, argv[2], 0);

	while (len == 1024)
	{
		len = read(arg1, buf, 1024);
		if (len == -1)
			errors(2, argv[1], 0);
		len = write(arg2, buf, len);
		if (len == -1)
			errors(3, argv[2], 0);
	}
	close1 = close(arg1);
	close2 = close(arg2);
	if (close1 == -1)
		errors(4, NULL, arg1);
	if (close2 == -1)
		errors(4, NULL, arg2);
	return (0);
}
