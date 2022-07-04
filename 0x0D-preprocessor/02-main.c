#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define F (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : __FILE__)

/**
 * main - prints the file name
 * Return: 0 (success), otherwise error ocuured
 */
int main(void)
{
	printf("%s\n", F);
	return (0);
}
