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

#endif
