/*
 * turbomem - a very simple (in-memory/filebased) cache
 *
 * */
#ifndef TURBOMEM_H
#define TURBOMEM_H

#include <stdbool.h>


typedef struct {
	void** data;
	int size;
	int capacity;
} Cache ;

typedef struct {
	void **value;
} Data;

// these aren't the real signature, 
// just to get something drafted.
// TODO: replace with real signatures
void put(Data *d);
Data get(char *k);
bool contains(char k);
bool remove(Data d);

#endif
