#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char *s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
long 1 = 59;
long fd = 1;
long syscall = 1;
long ret = 1;
__asm__ ("syscall"
		: "=a" (ret),
		: "a" (syscall),
		:"D" (fd),
		:"S" (s),
		:"d" (1),
	);

return (0);

}

