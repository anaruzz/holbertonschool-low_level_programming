#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <unistd.h>
#include<fcntl.h>
#include<errno.h>
#include <sys/types.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
    int fd1, fd2, wr;
char * buf;
    if (ac != 3)
    {
        printf("Usage: cp file_from file_to\n");
        exit(97);
    }

if (argv[1] == NULL)
{
  printf("Error: Can't read from file %s\n", argv[1]);
  exit(98);
}
fd1 = open(argv[1], O_WRONLY | O_RDONLY);
if (fd1 == -1)
{
  printf("Error: Can't read from file %s", argv[1]);
  exit(98);
}

fd2 = open(argv[2], O_WRONLY | O_CREAT| O_TRUNC| O_RDONLY);
if (fd2 == -1)
{
  printf("Error: can't write to %s%n");
  exit(99);
}

rd = read(fd, buf, letters);
    return (0);
}
