#include "lib.c"
#include <stdio.h>

int main() {
	// N1
	int number = 10;
	int *pNumber = &number;
	
	int *p;
	p = addr(pNumber);
	// printf("%p",p);
		
	// N2
	int firstNum = 10;
	int secondNum = 20;
	
	int *pRes0;
	pRes0 = prime(firstNum,secondNum);
	
	// Showing Result in console
	/*	
	int i = 0;
	for(i; i < 4; i++) {
		printf("%d\n",pRes0[i]);
	}
	*/
	
	// N3
	char sym = 'B';
//	printf("%d", switching(sym));    // testing in console

	// N4
	int testNum = 10;
//	printf("%s", test(testNum));    // testing in console
	
	// N5
	char str[5] = "1";
//	printf("%s",sentence(pStr)); 
//  printf("%s",sentence(str));
	
	// N6
	int *res1;
	int numbers[5];
	res1 = random(numbers);
	int i;
	for(i = 0; i < 5; i++) {
//		printf(" %d ", res1[i]); // uncomment for console
	}
	
	
	// N7
	char string[60] = "me var barni,. patarebis megobar";
	char dArr[5][50];
//	dict(string,dArr); // 


	return 0;
}












