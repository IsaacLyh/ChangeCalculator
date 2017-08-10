#include <stdio.h>
#include "overflow.h"

int main() {

	int result = overflow(5, 10, '+');
	printf("result = %d\n", result);

	return 0;
}
