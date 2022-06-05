#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lib12.c"

int main() {
// N1 char to int
	char arr[119]="2131232313";
	long long num=atoi(arr);
//  printf("%ld",num);


// N2 
char validNum[20] = "551080818";
int x = validNumber(validNum);

// N4 
char str1[100] = "It was popularised in the 1960s with the release of Letraset sheets";
char str2[150] = "Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur";
char str3[300] = {0};

strcat(str1,str2);
//printf("ES ARIS STR1%s\n",str1);
sprintf(str3,"%s",str1);
//printf("%s",str3);



// N5 divisible by 9
int num9 = -9;
int res3 = divisibleBy9(num9);
//printf("divisible :%d\n",res3);


// N6 Count Numbers in integer
int num1 = 542;
int xres = countNum(num1);
//printf("%d\n",xres);



// NUM 7 // number palindrome

int num3 = 1001;
int k = 0,num3Copy = num3;
while (num3Copy != 0) {
	num3Copy /= 10;
	k++;
}
int checking = palindrome(num3,k);
//printf("%d",checking);

}








