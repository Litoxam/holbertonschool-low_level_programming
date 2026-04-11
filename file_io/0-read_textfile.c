#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters it should read and print.
 *
 * Return: The actual number of letters read and printed, or 0 on failure.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

int fd;
char *buffer;
ssize_t nread, nwrote;

if (!filename)
	return (0);

fd = open(filename, O_RDONLY); /*we open the file to scan it*/

if (fd == -1)
	return (0);

buffer = malloc(sizeof(char) * (letters)); /* we allocate a buffer*/

if (!buffer)
{
	close(fd);
	return (0);
}
/*we scan filename which is in fd, we stock "letters"*chars on the buffer*/
nread = read(fd, buffer, letters);
	if (nread == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
/*write the text contained in the buffer, number of char returned by nread*/
nwrote = write(STDOUT_FILENO, buffer, nread);

close(fd);
free(buffer);

	if (nwrote == -1 || nwrote != nread)
		return (0);

return (nwrote);

}
