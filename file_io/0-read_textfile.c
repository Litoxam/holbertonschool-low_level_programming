#include "main.h"


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

buffer = malloc(sizeof(char)*(letters)); /* we allocate a buffer*/

if (!buffer)
	return (0);

/*we scan filename which is in fd, we stock "letters"*chars on the buffer*/
nread = read(fd, buffer, letters);
/*write the text contained in the buffer, number of char returned by nread*/
nwrote = write(STDOUT_FILENO, buffer, nread);

close(fd);

free(buffer);

return(nwrote);

}
