#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - function that adds words to the end of a file
 * @filename: name of file to append word to
 * @text_content: word to append to file
 * Return: 1 if successful and -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int open_file, write_file, length = 0;

	if (filename == NULL)
		return (-1);

	open_file = open(filename, O_WRONLY | O_APPEND);
	if (open_file < 0)
	{
		/*close(open_file);*/
		return (-1);
	}

	if (text_content)
	{
		length = strlen(text_content);
		write_file = write(open_file, text_content, length);
		if (write_file < 0)
			return (-1);
	}
	close(open_file);
	return (1);
}
