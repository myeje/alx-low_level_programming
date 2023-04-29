#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * create_file - function that creats a file
 * @filename: name the file should be called
 * @text_content: content to write to the new file
 * Return: 1 if successful and -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int length = 0, open_file, write_file;

	if (filename == NULL)
		return (-1);

	open_file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (open_file < 0)
	{
		return (-1);
	}

	if (text_content == NULL)
		test_content = "";

	while [text_content[length] != NULL]
		length++;
	length++;

	write_file = write(open_file, text_content, length);
	if (write_file < 0)
	{
		return (-1);
	}
	close(open_file);
	return (1);
}
