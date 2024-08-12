#include "main.h"
#include <stdlib.h>

/**
 * copy_file - Copies the content of one file to another.
 * @file_from: Source file.
 * @file_to: Destination file.
 */
void copy_file(const char *file_from, const char *file_to)
{
int fd_from;
int fd_to;
int bytes_read;
int bytes_written;
char buffer[BUFFER_SIZE];

fd_from = open(file_from, O_RDONLY);
if (fd_from == -1)
{
print_error("Error: Can't read from file ", 98);
return;
}

fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
if (fd_to == -1)
{
print_error("Error: Can't write to file ", 99);
close(fd_from);
return;
}

while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written != bytes_read)
{
print_error("Error: Can't write to file ", 99);
close(fd_from);
close(fd_to);
return;
}
}

if (bytes_read == -1)
{
print_error("Error: Can't read from file ", 98);
}

if (close(fd_from) == -1)
{
print_error("Error: Can't close fd ", 100);
}

if (close(fd_to) == -1)
{
print_error("Error: Can't close fd ", 100);
}
}

/**
 * print_error - Prints an error message and exits with a given code.
 * @message: The error message.
 * @exit_code: The exit code.
 */
void print_error(const char *message, int exit_code)
{
write(STDERR_FILENO, message, sizeof(message) - 1);
write(STDERR_FILENO, "\n", 1);
exit(exit_code);
}

/**
 * main - Entry point of the program.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: Always 0 on success.
 */
int main(int argc, char *argv[])
{
if (argc != 3)
{
print_error("Usage: cp file_from file_to", 97);
}

copy_file(argv[1], argv[2]);

return (0);
}
