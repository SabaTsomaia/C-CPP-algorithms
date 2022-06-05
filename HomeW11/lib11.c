#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>

// N1
int *addr (int *pointer) {
	return pointer;
}

// N2
int *prime(int first,int second) {
	int i,count,k = 0;
	static int primes[200]; // Unda mivutitot statikurad Maqsimaluri zoma xelit
	
	while(first < second) {
		count = 0;
		i = 2;
		while(i <= first/2){
			if(first%i == 0){
				count++;
				break;
			}
			i++;
		}
		if(count == 0 && first != 1){
			primes[k] = first;
			k++;
		}
		first++;
	}
	return primes;
}


// N3
int switching(char sym) {

	switch (sym){
	case 'A':
		return -1;
		break;
	case 'B':
		return +1;
		break;
	case 'C':
		return 0;
	default:
		return 404;
	}
}

// N4
const char* test(int num) {
	switch (num){
	case -1:
		return "Error";
		break;
	case +1:
		return "Finished Delayed";
		break;
	default:
		return "Finished on time";
	}
}

// N5
int funqcia(int n){
    int result = 1,j;
    for(j = 0; j < n; j++) {
        result = result * 10;
    }
    return result;
}

int atn (char *x){
int i,j,k = 1;
int array[20];
int res = 0;

for(i = 0; x[i] != 0; i++){
        if(x[i] == '0') {
            array[i] = 0;
        }
        else if(x[i] == '1') {
            array[i] = 1;
        }
        else if(x[i] == '2') {
            array[i] = 2;
        }
        else if(x[i] == '3') {
            array[i] = 3;
        }
        else if(x[i] == '4') {
            array[i] = 4;
        }
        else if(x[i] == '5') {
            array[i] = 5;
        }
        else if(x[i] == '6') {
            array[i] = 6;
        }
        else if(x[i] == '7') {
            array[i] = 7;
        }
        else if(x[i] == '8') {
            array[i] = 8;
        }
        else if(x[i] == '9') {
            array[i] = 9;
        }
    }
 	// i = 2        j = 0 
    for(i = i - 1,j = 0; i >= 0; i--,j++) {
        array[j] = array[j] * funqcia(i);
    }
    
    for(i = 0; i < j; i++){
        res = res + array[i]; 
    }
    // res = array[0] + array[1] + array[2];
	return res;
};

const char* sentence (char *str) {
	int res = atn(str);
	bool even;
	if(res % 2 == 0) {
		even = true;
	} else {
		even = false;
	}

	switch(even){
		case true:
			return "Even";
			break;
		
		case false:
			return "Odd";
			break;
	}
}
// N6
int *random(int *numbers) {	
	srand(time(0));
	
	int i;
	for(i = 0; i < 5;i++) {
		numbers[i] = rand(); 
	}
	
	return numbers;
}

// N7
dict(char *str,char (*arr)[40]){
	int i = 0,j,wordCount = 0;

	char delimit[5] = " :',.";	

	char * token = strtok(str,delimit);	
	while(token != NULL){
		int length = strlen(token); // Finding The Length of the word
		printf("WordCount:%d length:%d ",wordCount,length);
		for(i = 0; i < length; i++) {
			arr[wordCount][i] = token[i]; // storing each letter to each address 
			printf("%c",arr[wordCount][i]);
		}
		printf("\n");  // Spacing in console
		wordCount++; // Counting which Word We are Storing
		token = strtok(NULL, delimit); // we pass NULL to keep delimiting
	}
}


















































