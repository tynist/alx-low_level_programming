#include "main.h"
#include "string.h"

/**
 * _strstr - function that locates a substring
 * @haystack: string to be searched
 * @needle: substring to be located
 * Return: pointer to the beginning located substring, else Null
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
