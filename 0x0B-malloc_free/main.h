#ifndef MAIN_H
#define MAIN_H

/**
 *Prototypes used in this project
 */
char *create_array(unsigned int size, char c);
int _putchar(char c);
char *str_concat(char *s1, char *s2);
char *_strdup(char *str);
int **alloc_grid(int width, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);
void free_grid(int **grid, int height);

#endif
