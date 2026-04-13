#include "main.h"

/**
 * main - Copies the content of one file to another.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 *
 * Return: 0 on success.
 *
 */

int main(int argc, char *argv[])
{
	int fd1, fd2; /*source and destination*/
	ssize_t nread, nwrote;
	char buffer[1024];

	/*must have exactly 3 args*/
	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
	}

/*we open the source of argv1*/
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
	}

/*we write only, create if doesn't exist, truncate if it does, permission 664*/
	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd2 == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	close(fd1);
	exit(99);
	}

/*we read what's stocked into argv1, stocked in the buffer, 1024 chars*/
	while ((nread = read(fd1, buffer, 1024)) > 0)
	{	/*we write those chars into argv2 file, 1024 chars*/
		nwrote = write(fd2, buffer, nread);

		if (nwrote == -1 || nwrote != nread)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd1);
			close(fd2);
			exit(99);
		}
	}

	if (nread == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	/*if we can not close, error and printf, exit 100*/
	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}

	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}

	return (0);
}
