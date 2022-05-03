#include "main.h"

/**
 * create_file - Create a file
 *
 * @filename: file name
 * @text_content: content of file
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, n;
	size_t i;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00600);

	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	i = 0;
	while (text_content[i])
		i++;
	n = write(fd, text_content, i);
	if (n == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
