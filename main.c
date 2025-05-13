#include <stdio.h>
#include <stdlib.h>

#include "src/LL.h"

int main() {
	int num1 = 1;
	int num2 = 2;
	int num3 = 3;
	int num4 = 4;

	linkedList test;
	initLL(&test, &num1);

	appendLL(&test, &num2);
	insertLL(&test, 1, &num3);
	prependLL(&test, &num4);

	printLL(&test);

	removeLL(&test, 2);

	printLL(&test);

	destroyLL(&test);
}
