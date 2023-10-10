#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - a struct that create a dog variable
 *
 * @name: name of the variable in the struct
 * @age: age of the variable in the struct
 * @owner: owner of the variable in the struct
 *
 * Desc: first struct with ALX
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
