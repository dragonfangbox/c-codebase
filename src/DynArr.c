#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "DynArr.h"

// use memcpy to set array values
//
// ayayayayayayyay

void InitDynArr(DynArr* da, size_t elementSize) {
	da->elementSize = elementSize;
	da->size = 0;
	da->capacity = 8;

	da->array = calloc(8, sizeof(elementSize));
	if(da->array == NULL) {
		printf("error allocating dynnar in init func");
	}
}

static void Grow(DynArr* da) {
	da->capacity *= 2;

	da->array = realloc(da->array, da->capacity * da->elementSize);
	if(da->array == NULL) {
		printf("error allocating dynarr in grow func");
	}
}

void Append(DynArr* da, void* value) {
	if(da->size == da->capacity) {
		Grow(da);
	}

	//TODO i want to make this so everything inside the array
	// is on the heap, idk if this is a good idea or not but we ball

	memcpy(da->array + da->size * da->elementSize, value, da->elementSize);

	da->size += 1;
}

void Pop(DynArr* da) {
	int zero = 0;
	memcpy(da->array + da->size * da->elementSize, &zero, da->elementSize);

	da->size -= 1;
}

void DeleteDynArr(DynArr* da) {
	free(da->array);
}
