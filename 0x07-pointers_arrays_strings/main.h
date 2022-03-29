#ifndef FILE_MAIN
#define FILE_MAIN

#include <stddef.h>

void _putchar (char c);
void *_memset (char *s, char b, unsigned int n);
void *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);

#endif
