#include <stdio.h>

int main() {
	int age = 30;
	int *pAge = &age; // Storing memory address of age variable
	
	printf("%d", *&age);
	
	return 0;
}
