#include <windows.h>
#include <io.h>
#include <sys\stat.h>
#include <fcntl.h>
#include <sys\stat.h>
#include<stdio.h>

/*
int main () {
   char str1[20], str2[30];

   printf("Enter name: ");
   scanf("%19s", str1);

   printf("Enter your website name: ");
   scanf("%29s", str2);

   printf("Entered Name: %s\n", str1);
   printf("Entered Website:%s", str2);
   
   return(0);
}
/*
//Program to read and print the data for 20 students*/
/*
struct student { 
int roll_no;
char name[20];
char course[20];
int marks_obtained;
};

main()
{
struct student stud [20];
int i;
// int amp[1000];
printf ("Enter the student data one by one\n");
for(i=0; i<=19; i++)
{
printf ("Enter the roll number of %d student",i+1);
scanf ("%d",stud[i].roll_no);
printf ("Enter the name of %d student",i+1);
scanf ("%s",stud[i].name);
printf ("Enter the course of %d student",i+1);
scanf ("%d",stud[i].course);
printf ("Enter the marks obtained of %d student",i+1);
scanf ("%d",stud[i].marks_obtained);
}
printf ("the data entered is as follows\n");
for (i=0;i<=19;i++)
{
printf ("The roll number of %d student is %d\n",i+1,stud[i].roll_no);
printf ("The name of %d student is %s\n",i+1,stud[i].name);
printf ("The course of %d student is %s\n",i+1,stud[i].course);
printf ("The marks of %d student is %d\n",i+1,stud[i].marks_obtained);
}

return 8;
}


int main()
{
struct STUD {
char st;
int age;
char snm;
};
char fnm[] = "fileName.txt";
STUD st={0};
int hf=-1;
char str[255];
char buffer[1000];

if(-1==hf) {
MessageBox(0,"File Open Error",fnm,0);
return 0;
}
	for(int k=0;k<1000;k++)
	{
	lseek(hf,k*sizeof(STUD),0);
	read(hf,st,sizeof(STUD));
		//if(strstr(st.nm,"99"))
		if(st.age==19)
		{
		sprintf(buffer,"%s %s %d",st.snm,st.age);
		//	puts(st.nm);
		//	puts(st.snm);
		//	itoa(st.age,str,10);
		puts(buffer);
		}
	}
}
		
struct STUD {
	char nm;
	char snm;
} st;		
int main()
{
int hf=-1;
char str[300];
char nm[1000]="";
char snm[1000]="";
int age;
char buffer[1000];

for (int k=300;k<10000;k++)
{
memset(str,0,sizeof(str));
(k,str);//"300"
strcpy(st.nm,str);//"300"
strcat(st.nm,"_sax");//"300_sax,

strcat(st.snm,str);//"300_sax,300
strcat(st.snm,"_gvar,");//"300_sax,300_gvar,

strcpy(st.snm,str);//
strcat(st.snm,"_gvar");//"300_gvar,"

write(hf,&st,sizeof(STUD));
}
close(hf);
return 10;

}
*/
void num_to_arr(int a,char *b)
{
	
int i=0,divider=1;//
	if(a<0)//tu ricxvi uaryofitia pirveli simbolo -1 unda iyos da uaryofiti A ricxvs vamravlebt -1 ze  rom dadebiti gaxdes imistvis rom momdevno moqmedebebi sworad chatardes
	{
	b[i]='-';
	i++;
	a=a*(-1);
	}
	while(a/divider!=0)
	{
	divider=10*divider;
	}
	while(divider!=1)
	{
	divider=divider/10;
	b[i]=(a%(10*divider))/divider+48;//nashts vyof
	i++;
	}
}
struct desc {
	char str[300];
	char nm[1000]="";
	char snm[1000]="";
	char buffer[1000];
	int age;
} stud;
int main(){ 
int hf=-1;
char fnm[100] = "file123.txt";
hf=open(fnm,_O_CREAT |_O_WRONLY,_S_IWRITE);
for (int k=1;k<1000;k++)
{
memset(stud.str,0,sizeof(stud.str));
num_to_arr(k,stud.str);//"300"

strcpy(stud.buffer,stud.str);//"300"
strcat(stud.buffer,"_sax");//"300_sax,

strcat(stud.buffer,stud.str);//"300_sax,300
strcat(stud.buffer,"_gvar\n");//"300_sax,300_gvar,

// num_to_arr(18+k%40,stud.str);//38 an 20
// strcat(stud.buffer,stud.str);//"300_sax,300_gvar,20

write(hf,stud.buffer,strlen(stud.buffer)-1);
}

if(hf == -1){
	MessageBox(0,"File Open Error",fnm,0);
	return 0;
}
close(hf);
return 10;
}
