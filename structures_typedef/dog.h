#ifndef DOG_H
#define DOG_H
/**
 * struct dog - describes the firulais
 * @name: firulais name
 * @age: firulais age
 * @owner: firulais owner
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
