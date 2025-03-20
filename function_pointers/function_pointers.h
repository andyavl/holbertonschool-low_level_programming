#ifndef BETTY_LA_FEA
#define BETTY_LA_FEA

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
