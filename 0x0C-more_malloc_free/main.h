#ifndef MAIN_H
#define MAIN_H

/*Prototypes of functions used in this project*/
char *string_nconcat(char *s1, char *s2, unsigned int n);
int _putchar(char c);
void *malloc_checked(unsigned int b);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int *array_range(int min, int max);
void *_calloc(unsigned int nmemb, unsigned int size);

#endif