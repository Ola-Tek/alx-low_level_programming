#include "main.h"
/**
 * append_text_to_file - add text to a file
 * @filename: name of file created
 * @text_content: the content to b added
 * Return: 1 on success, -1 if not
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;
		rwr = write(fd, text_content, nletters);
		if (rwr == -1)
			return (-1);
	}
	close(fd);

	return (1);
}
