#include <string.h>
#include <stdio.h>

// N2 a)
int validNum(char *num) {
int length,comp,k;

char thr[4];
strncpy(thr,num,3); // Taking first 3 letters

comp=atoi(thr);
length=strlen(num);

for(k=0;num[k]!=0;k++) {
	if(num[k] < '0' || num[k]> '9') {
		return 0;
		break;
	}
}
	if(length == 9 && (comp==599 || comp ==551 || comp==577 || comp==598 ||comp == 571)) 
		return 1;
	else
		return 0;
}
// N2 b)
char* provider(char* number)
{
char three[4];
int comp,x;
char address[10];
char mg[5]="Magti"; //599
char ge[8]="Geocell"; //577
char ban[9]="Bani Bali"; //551,598,551

strncpy(three,number,3);

if(validNum(number) == 1) {
comp=atoi(three);
	if(comp==599)
	{
	x=1;
	}
	if(comp==577)
	{
	x=2;
	}
	if(comp==551 ||comp==598 ||comp==551)
	{
	x=3;
	}
	switch(x) 
	{
		case 1:
		strncpy(address,mg,7);
		break;

		case 2: 
		strncpy(address,ge,7);
		break;

		case 3: 
		strncpy(address,ban,8);
		break;
		
		default:
		strncpy(address,"Wrong Num",9);
		break;
	}
	return &address;
	
} else {
	strncpy(address,"Wrong Num",9);
	return &address;
}
}



// N3
int dict(char *str){
	int i,wordCount = 0,number;

	char delimit[5] = ".";	// Delimiters for function
	char * token = strtok(str,delimit);
		
	while(token != NULL){
		for(i = 0; i < strlen(token); i++) {
			if(token[i] == ',') {
				return 0;
			}
		}
		number = atoi(token); // Converting Delimited Date and storing it in number
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

int main() {
	// N2 a)
	char arr[20] = "557001122";
	int res = validNum(arr);
	//printf("%d",res); // if Res = 0 Number is not valid
	
	
	// N2 b)
	char* provider1 = provider("599080819");
	printf("%s",provider1);
	
	// N3
	// "2022.123.34" "12.09.2022" "2022.22,02" davalebashi mocemuli striqonis variantebi.
	char striqoni[20] = "2022.11.31";
	//int res1 = dict(striqoni);
	//printf("RETURN:%d",res1); // Function Returns 0 if string is incorrect and 1 if correct
}
