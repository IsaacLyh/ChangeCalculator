#include <stdio.h>
#include "change.h"

int main() {

    int arr[]={1,2,3,4,5}, *p =arr;
    *p = *(p+*arr);

	return 0;
}
