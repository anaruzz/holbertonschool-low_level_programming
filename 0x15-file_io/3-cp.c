#include<stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include<fcntl.h>
#include <sys/types.h>
/**
* main - check the code for Holberton School students.
*
* Return: Always 0.
*/
int main(int argc, char **argv)
{
int fd1, fd2, rd, wr;
char buf[1024];
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
if (argv[1] == NULL)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
fd1 = open(argv[1], O_RDWR, 0777);
if (fd1 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
fd2 = open(argv[2],  O_RDWR | O_CREAT | O_TRUNC, 0664);
if (fd2 == -1)
{
dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
exit(99);
}
rd = read(fd1, buf, 1024);
while (rd > 0)
{
wr = write(fd2, buf, rd);
if (wr != rd)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
rd = read(fd1, buf, 1024);
}
if (rd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
if (close (fd1) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", argv[1]);
exit(100);
}
if (close(fd2) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", argv[2]);
exit(100);
}
return (0);
}
