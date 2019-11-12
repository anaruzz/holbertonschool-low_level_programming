#include "holberton.h"
#include<stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include<fcntl.h>
#include<errno.h>
#include <sys/types.h>
/**
 * read_textfile - reads a text file and prints it to stdout.
 * @filename: file's name.
 * @letters: number of letters it should read and print.
 * Return: number of characters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t rd, wr;
int fd;
char *buf;

if (filename == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (fd < 0)
return (0);

buf = malloc(letters * sizeof(char));
if (buf == NULL)
return (0);

rd = read(fd, buf, letters);
if (rd < 0)
return (0);
buf[letters] = '\0';

wr = write(STDOUT_FILENO, buf, rd);
if (wr < 0 || wr != rd)
return (0);

close(fd);

return (wr);
}
