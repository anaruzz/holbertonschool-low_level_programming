#include "holberton.h"
#include<stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include<fcntl.h>
#include<errno.h>
#include <sys/types.h>
/**
 * create_file - reads a text file and prints it to stdout.
 * @filename: file's name.
 * @text_content: number of letters it should read and print.
 * Return: number of characters printed
 */
int create_file(const char *filename, char *text_content)
{
int fd, wr, len;

if (filename == NULL)
return (-1);


fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);
if (fd == -1)
return (-1);
if (text_content == NULL)
return (1);

len = 0;
while (text_content[len])
len++;

wr = write(fd, text_content, len);
if (wr == -1)
return (-1);
close(fd);
return (1);
}
