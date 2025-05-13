#pragma once

#include <stdlib.h>

#include "Types.h"

typedef struct {
	uint size;
	uint capacity;
	uint elementSize;

	void* array;
} DynArr;

void InitDynArr(DynArr* da, size_t elementSize);
void DeleteDynArr(DynArr* da);

// adds "value" to the end of the array
void Append(DynArr* da, void* value);

// removes last element of the array
void Pop(DynArr* da);
