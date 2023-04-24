#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - function that reads a text file
 * @filename: name of file to read
 * @letters: number of characters file should read
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *sub;
	int open_file;
	int read_file;
	int write_file;
	/*FILE *open_file = fopen(filename, "r");*/

	if (filename == NULL)
		return (0);
	sub = malloc(sizeof(char) * letters);
	if (sub == NULL)
		return (0);

	/*
	if (!open_file)
	{
		free(sub);
		return (0);
	}
	*/
	open_file = open(filename, O_RDONLY);
	if (open_file < 0)
	{
		free(sub);
		close(open_file);
		return (0);
	}

	read_file = read(open_file, sub, letters);
	if (read_file < 0)
	{
		free(sub);
		close(open_file);
		return (0);
	}

	write_file = write(1, sub, letters);
	if (write_file < read_file)
	{
		free(sub);
		close(open_file);
		return (0);
	}
	free(sub);
	/*fclose(open_file);*/
	close(open_file);
	return ((ssize_t)write_file);
}
