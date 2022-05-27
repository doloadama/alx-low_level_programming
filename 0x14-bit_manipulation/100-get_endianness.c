#include "main.h"


/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
int b;
char *l;

b = 1;
l = (char *)&b;
return (*l);
}
