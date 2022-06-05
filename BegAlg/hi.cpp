
// NOT  BEST word Counter
int func(char x[])
{
	int k,wordCount = 0;
	if(x[0] != ' ')
	{
		wordCount++;
	}

	for (k = 0; x[k]; k++)
	{	
		if(x[k] == ' ')
		{
			wordCount++;
		}
	}
	return wordCount;
}
void main (){

	// USG POVNA 2 RICXVI
/*
	// ipovet Ori ricxvis udidesi saerto gamyofi
	int x = 11,y = 22; // Programis gamartulad mushaobistvis x unda iyos 
					   // dabali ricxvi radgan mas sheedaros ciklshi (tuarada shegvidzlia ciklshic shevcvalot)
	int usg = 1; // Sawyisi usg
	int resMaxUsg; // usg romelis-% ( nashti )aris 0
	
A:
	if (usg <= x) {
		if(x % usg == 0 && y % usg == 0) {
			resMaxUsg = usg;
			} 
			usg++;
			goto A;
	}



*/
/*
	// FACTORIALIS POVNA
	int counter = 1;
	int res = 1; // Bolo shedegi
	int x = 5; // Faqtorialis ricxvi
A:
	if (counter <= x) {
		res = res * counter;
		counter++;
		goto A;
	}


};
*/
/*
	// Find max and Min Numbers
int x = 11;
int y = 5;
int z = 10;
int max;
int min;

if(x > y && x > z) {
	max = x;	
} else if(y > x && y > z){
	max = y;
} else{
	max = z;
} 

if(x < y && x < z) {
	min = x;	
} else if(y < x && y < z){
	min = y;
} else{
	min = z;
} 

	// FESVIS POVNA 

	int startingNum = 1;
	int OurNum = 25;
	int Root; 
	int endNumb = 0;
A:
	if (endNumb < 1){
		if (startingNum * startingNum == OurNum){
			Root = startingNum;	
			endNumb = endNumb + 10; // Ending loop
	}
	startingNum++;
	goto A;
	}
 

	// ZRDADOBIT DALAGEBA

	int firstArr[7] ={9,-3,5,10,11,3,99};
	int loopCount = 1, curMin = firstArr[0], count = 0;
	int swap1, swap2, placeNum, arrPlaceLoop = 0;

	// "loopCount" and "Count" should be increased +1 everytime.
A:	
	if (loopCount <= 7){
		if(firstArr[count] > curMin) {
			count++;
			loopCount++;
			goto A;
		} 
		curMin = firstArr[count];
		placeNum = count; // After we find Min Number In the array, Store it in The "placeNum"
		count++;
		loopCount++;
		goto A;
	}
	

	swap1 = firstArr[placeNum]; // Min Number That must be swapped
	swap2 = firstArr[arrPlaceLoop]; // Place where to swap
	// Swapping 
	firstArr[arrPlaceLoop] = swap1; 
	firstArr[placeNum] = swap2;

	// Increasing Array Counter
	arrPlaceLoop++; 
 
	// Declare Minimum >>> Next place number
	curMin = firstArr[arrPlaceLoop]; 
	
	// Changing Counters To start in the next place
	loopCount = arrPlaceLoop; 
	count = arrPlaceLoop;

	// Checking if the swap quantity exceed. 
	// (If we have array[7] (odd number of elements in the array) we can swap maximum of that number (7))
	// (If we have array[8] (even number of elements in the array) we have that number - 1 elements of array (8-1))

	if (loopCount >= 6) // starting from zero
		firstArr[7];
 
	else	
		goto A;


// KLEBADOBIT DALAGEBA 

int firstArr[7] ={9,-3,5,10,11,3,99};
    int loopCount = 0, curMax = firstArr[0], count = 0;
    int swap1, swap2, placeNum, arrPlaceLoop = 0;

    // "loopCount" and "Count" should be increased +1 everytime.
A:
    if (loopCount < 7){
        if(firstArr[count] < curMax) {
            count++;
            loopCount++;
            goto A;
        } 
        curMax = firstArr[count];
        placeNum = count; // After we find Max Number In the array, Store it in The "placeNum"
        count++;
        loopCount++;
        goto A;
    }

    swap1 = firstArr[placeNum]; // Min Number That must be swapped
    swap2 = firstArr[arrPlaceLoop]; // Place where to swap
    // Swapping 
    firstArr[arrPlaceLoop] = swap1; 
    firstArr[placeNum] = swap2;

    // Increasing Array Counter
    arrPlaceLoop++; 
 
    // Declare Maximum >>> Next place number
    curMax = firstArr[arrPlaceLoop]; 

    // Changing Counters To start in the next place
    loopCount = arrPlaceLoop; 
    count = arrPlaceLoop;

    // Checking if the swap quantity exceed. 
    // (If we have array[7] (odd number of elements in the array) we can swap maximum of that number (7))
    // (If we have array[8] (even number of elements in the array) we have that number - 1 elements of array (8-1))

    if (loopCount >= 6) // starting from zero
        firstArr[7];
    else
        goto A;


// STRING LENGTH

char string[20] = "es aris winadadeba";
int i = 0;

A;
	if(string[i] <= sizeof(string) {
		return i++;
		goto A;
	}
	
	
// STRING SPLIT
	char sentence[100] = "gaxliche winadadeba";
	char firstPart[sizeof(sentence)] = " ";
	char secondPart[sizeof(sentence)] = " ";

	int i = 0,firstI = 0, secondI = 0, j = 0;
A:
	if (sentence[i])
	{
		i++;
		goto A;
	}
firstI = i / 2;
secondI = (i-1) - firstI;
B:
	if(j < firstI)
	{	

			firstPart[j]= sentence[j];
			j++;
			goto B;
	} 
	j=0;
C:
	if(secondI < i)
	{
		secondPart[j] = sentence[secondI];
		secondI++;
		j++;
		goto C;
	}
*/

/* 
// CHAR TO ARRAY //////////
// CHAR TO ARRAY /////////
char str[119] = "101212";
int i = 0,num = 0 ;

for(i; str[i] != '\0'; i++) {
	if (str[i] > 57 || str[i] < 48)
		break;
	num = num * 10 + str[i] - 48;
}
printf("%d",num);
*/


/* 
// INT TO CHAR ARRAY  ///////
// INT TO CHAR ARRAY  //////
int intToArr(int num2) {
	char array[11]; // Arr to be written to 
	int k = 0,j,newNum = num2,numbers[10] = {1,10,100,1000,10000,100000,1000000},ourNum = num2;
	// Cifrebis datvla ateulebis aseulebis.... gasagebad
	while(num2 != 0) {
		num2 = num2 / 10;
		k++;
	}
	printf("%d",k);
	int baseN = k-1; // K numbers so k - 12
	
	int staticBase = baseN;
	for(j = 0; j <= staticBase; j++,baseN--) {
		ourNum = newNum / numbers[baseN]; //  
		array[j] = '0' + ourNum;
		newNum -= numbers[baseN] * ourNum;  // 
		printf("ourNum=%d ---- newNum:%d ----- baseN=%d\n",ourNum,newNum,baseN);		
	}
	
	
	for(j = 0; j <= staticBase; j++) {
		printf("%c",array[j]);
	}
}


*/
};























