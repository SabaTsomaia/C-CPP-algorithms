#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int countNum(int num) {
	int k = 0;
	while(num != 0) {
		num = num / 10;
		k++;
	}
	
	return k;
}
// Function Number 2-a



// Function Number 3 
dict(char *str){
	int i,wordCount = 0,number;

	char delimit[5] = ".";	
	char * token = strtok(str,delimit);
		
	while(token != NULL){
		for(i = 0; i < strlen(token); i++) {
			if(token[i] == ',') {
				return 0;
			}
		}
		number = atoi(token);
		wordCount++; // Counting which Word We are Storing

		// printf("WordCount:%d number:%d ",wordCount,number); Printinf in console
		if(wordCount == 1 && number > 0) {} 
		else if(wordCount == 2 && 0 < number && number <= 12) {}
		else if(wordCount == 3 && 0 < number && number <= 31) {}
		else {
			printf("\n");  // Spacing in console
			return 0;
		}
		
		//	printf("\n");  // Spacing in console
		token = strtok(NULL, delimit); // we pass NULL to keep delimiting
	}
	return 1;
}


// Function Number 5
int sumOfNum(int num){
	int numSum = 0,numbers[10] = {1,10,100,1000,10000,100000,1000000,10000000,100000000},
	num2 = num,ourNum = num,newNum = num,k = 0,j;
	
	while(num2 != 0) {
		num2 = num2 / 10;
		k++;
	}
	
	int baseN = k-1;
	int staticBase = baseN;

	for(j = 0;j <= staticBase;j++,baseN--){
		ourNum = newNum / numbers[baseN];
		numSum += ourNum;
		newNum -= numbers[baseN] * ourNum;
	}
	//printf("K:%d\n",k);
	
	return numSum;
}
int divisibleBy9(int num) {	

int res = sumOfNum(num);
//printf("FirstRes:%d\n",res);
int divisible = 0;

if (10 < res <= 99) {
	res = sumOfNum(res);
	if(res == 9 || res == -9) {
		divisible = 1;  
	}
}
//printf("res:%d\n",res);
return divisible;
}


int palindrome(int num,int size) {
	int num1 = num;
	int rev = 0;
	int dig;	
	while (num > 0)
	{
    	dig = num % 10;
    	rev = rev * 10 + dig;
    	num = num / 10;
	}
	
	if(num1 == rev) {
		return 1;	
	} else {
		return 0;
	}
}




















