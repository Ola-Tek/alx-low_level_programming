#ifndef _MAIN_H
#define _MAIN_H

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _putchar(char c);
int _strlen(char *s);
void error(void);
int is_digit(char *s);
int main(int argc, char *argv[]);

#endif
