#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: name of the file
 * @text_content: text to append to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
ssize_t len = 0, written;

/* Check for NULL filename */
if (filename == NULL)
{
return (-1);
}

/* Open file for appending */
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
{
return (-1);
}

/* If text_content is NULL, just close the file and return 1 if file exists */
if (text_content != NULL)
{
/* Find length of text_content */
while (text_content[len] != '\0')
{
len++;
}

/* Write text_content to the file */
written = write(fd, text_content, len);
if (written == -1 || written != len)
{
close(fd);
return (-1);
}
}

/* Close file */
if (close(fd) == -1)
{
return (-1);
}

return (1);
}
