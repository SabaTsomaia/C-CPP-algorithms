#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
int wordCount(char array[]) {
	char delimit[5] = " ,";	
	int cnt = 0;

	char * token = strtok(array,delimit);
	while(token != NULL){
	cnt++;
	
	token = strtok(NULL, delimit); 
	}
	return cnt;
}

// Number 2
void readWrite() {
	FILE *hf = 0;
	static char string[200] = "Sed ut perspiciatis unde omnis iste natus Error sit voluptatem accusantiUM doloRemque laUDantium, totam rem Aperiam.";
	static char buffer[200];

	hf = fopen("12.txt","w+");
	
	// Writing in the File
	fwrite(string,strlen(string) + 1,1,hf);

	// Seek to the beginning
	fseek(hf,0,SEEK_SET);

	// Reading, storing and Displaying data
	fread(buffer, strlen(string)+ 1, 1, hf);
	
	puts(buffer);
	MessageBox(0,buffer,"",0);

	// Closing 
	fclose(hf);

}

/// Number 4
char* sum(char num1[], char num2[])
{
	//you code goes here
	char str[20];
	int firstN = atoi(num1);
	int lastRes = atoi(num2);
	lastRes += firstN;

	itoa(lastRes,str,10);
	//return str;
}

void structWriting() {
	struct Person {
	char name[10];
	char Lname[10];
	char Dob[10];
	char birthPlace[10];
	};
	
	struct Person saba = {"saba","tsomaia","20060606","tbilisi",};
	
	int i;
	FILE *hf;
	hf = fopen("struct.txt","w+");
	if(hf == NULL) {
		fprintf(stderr,"\nError to open the file\n");
		exit (1);
	}
	
	for(i = 0; i < 100; i++) {
		fprintf(hf,"%s\n%s\n%s\n%s\n",saba.name,saba.Lname,saba.Dob,saba.birthPlace);	
	
		if(fprintf != 0) 
			printf("written succesfully !\n");
		else 
			printf("Error writing file !\n");
	}
	fclose(hf);
		
	struct PersonNames{
		char name[256]; 
		char Lname[256];
	};
	struct PersonNames stud[100];
    int x = 1,k = 0,g = 1;
    
	FILE *inf = fopen("struct.txt","r");
	if (inf == NULL) {
      fprintf(stderr, "\nError to open the file\n");
      exit(1);
    }
    
    char line[10];
    while(fgets(line, sizeof(line),inf)) {
		if(x == 4)
			x = 0;
		if(x == 1) {
			strcpy(stud[g].name, line);
			printf("%d:name:%s",g,stud[g].name);
			g++;
		} 
		if (x == 2) {
			strcpy(stud[k].Lname, line);
			printf("%d:Lname:%s",g,stud[k].Lname);
			k++;
		}
		x++;
	}
	fclose(inf);
	//printf("diax%s",stud[5].name); Printing a student name
}

// Sorting array N7
void swap(float* xp, float* yp)
{
   	int temp = *xp;
   	*xp = *yp;
   	*yp = temp;
}
 
// A function to implement bubble sort
void sort(float arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}

void printArr(float arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%f ", arr[i]);
    printf("\n");
}

// Average
float averageF(float arr[],int size) {
	int i;
	float sum = 0.0;
	for(i = 0;i < size; i++) {
		sum += arr[i];
	//	printf("sum:%f  num:%f\n",sum,arr[i]);
	}
	sum /= size;
	return sum;
}
// Median
float medianF(float arr[],int size) {
	int i = 0;
	float median;
	
	// Sort array 
	sort(arr,size);

//	for(i; i < size; i++){
		//printf("%f ",arr[i]);
//	}

	// if even	luwi
	if(size % 2 ==0) {
		median = (arr[(size-1)/2] + arr[size/2]) / 2.0;

	} else // kenti
		median = arr[size / 2];
	
	return median;
}

// stDiviation
float stDiviationF(float arr[],int size) {
	float res,array[size];
	int i;
	float avr = averageF(arr,size);
	
	for(i = 0; i < size; i++) {
		array[i] = (arr[i] - avr) * (arr[i] - avr);
	}
	float avrSt = averageF(array,size);
	
	res = sqrt(avrSt);
	return res;
}

// Max
float maxF(float arr[],int size) {
	float max = arr[0];
	int i;
	for(i = 0;i < size; i++) {
		if(arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}
// min
float minF(float arr[], int size) {
	float min = arr[0];
	int i;
	for(i = 0;i < size; i++) {
		if(arr[i] < min) {
			min = arr[i];
		}
	}
	return min;
}
int main() {
	///////// Number 1 
	char array[40] = "es aris dasatvleli,mwinadadbalf ";
	int res0 = wordCount(array);
	// printf("%d",res0);


	//// Number 2 
	char doubleChar[4][6] = {
		"Monday",
		"Spring",
		"Month",
		"Red"
	};
	// printf("%c",doubleChar[3][0]);

	////////////// Number 3
	// readWrite(); Actual function
	
	
	///////////// Number 4
	char first[20] = "40";
	char second[20] = "50";
	// printf("%s",sum(first,second));
	
	
	
	////// Number 5 and Number 6
	// structWriting(); Function

	
	// Number 7	
	
	FILE *hf;
	hf = fopen("nums.txt","w+");
	// Writing numbers as 1 whole string	
	fprintf(hf,"%s","12.790,56,-986,56,6.89,12.9008, 45, 567, 78, 17");
	fclose(hf);


	// File Reading and Creating buffer
	FILE *fp = fopen("nums.txt","r");
	
	char buffer[50];
	fgets(buffer, 50, fp); // Taking Line from file and storing in buffer
	fclose(fp);
	
	
	// Parsing string, Taking Numbers and storing in an Array
	float numbers[20];
	int i = 0,j,cnt = 0;
	
	char delimit[5] = " ,";
	char * token = strtok(buffer,delimit);
		
	while(token != NULL){
	numbers[i] = atof(token);
	
	//printf("T:%s N:%f ",token,numbers[i]);   Printinf in console
	i++;
	cnt++;
	token = strtok(NULL, delimit); // Delimiting
	}
	
	// Sort function 
//	sort(numbers,cnt); // Sorting array	
//	printArr(numbers,cnt); 	// Function to print arr
	// Write sorted array in file 
	FILE *file;
	file = fopen("nums.txt","a+");
		fprintf(file,"\n"); // Start writing From second line

		for(i = 0; i < cnt; i++) {
			fprintf(file,"%f ",numbers[i]);
		}
	fclose(file);
	
	// Creating a structure
	struct Stat {
		float mean;
		float median;
		float stDiviation;
		float max;
		float min;
	};
	struct Stat nums1;

	// Average
	float average = averageF(numbers,cnt);
	nums1.mean = average;
//	printf("mean%f",nums1.mean);


	// Median
	float median = medianF(numbers,cnt);
//	printf("%f",median);
	nums1.median = median;
	
	// stDiviation
	float stDiviation = stDiviationF(numbers,cnt);
	nums1.stDiviation = stDiviation;
	//printf("%f",stDiviation);

	// Max
	float max = maxF(numbers,cnt);
	nums1.max = max;
	//printf("%f",max);
	

	// Min
	float min = minF(numbers,cnt);
	nums1.min = min;
	//printf("%f",min);

	printf("Mean%f\n Median%f\n stDev%f\n max%f min%f",nums1.mean,nums1.median,nums1.stDiviation,nums1.max,nums1.min);
}











