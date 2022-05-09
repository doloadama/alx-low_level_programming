#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog -Dog data.
 * @name: Name of the dog
 * @age: age of the dog.
 * @owner: owner of the dog.
 * Desctiption: a structure with the name, age and owner of a dog.
**/

typedef struct dog
{
char *name;
float age;
char *owner;
}dog_a;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* _DOG_H_ */
