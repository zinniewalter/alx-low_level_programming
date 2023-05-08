#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: a pointer to the name of the file
 * @text_content: the string to add to the end of the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, bytes_written, text_length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_length])
			text_length++;
	}
	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	bytes_written = write(file_descriptor, text_content, text_length);

	if (file_descriptor == -1 || bytes_written == -1)
		return (-1);

	close(file_descriptor);

	return (1);
}
