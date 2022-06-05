#include <windows.h>
#include <stdio.h>

typedef unsigned long DWORD;
typedef unsigned char UC;
void draw_rect(HDC hdc,int x,int y,int w, int h,UC r,UC g,UC b){
	int k,i;
	for(k = x;k < x + w; k++){
		for(i=y; i< y + h;i++){
			SetPixel(hdc,k,i,RGB(r,g,b));
		}
	}
}


DWORD timestr(void *param){
	HDC hdc=GetDC(0);
	POINT *p = (POINT *)param;
	SYSTEMTIME st = {0};
	char str[256] = "";

	while(1) {
		GetLocalTime(&st);
		sprintf(str,"%d-%d-%d-%d-%d-%d-%d-%d-%d",st.wYear,st.wMonth,st.wDayOfWeek,st.wDay,st.wHour,st.wMinute,st.wSecond,st.wMilliseconds);
	};
	return 0;
}

DWORD thrd_function(void *param){
	HDC hdc=GetDC(0);
	POINT *p = (POINT *)param;

	while(1) {
	//	TextOut();
	return 0;
}


void main(){
	HDC h=GetDC(0);

	DWORD id1,id2,i3;
	POINT p1,p2,p3;

p.x = -1200;
p.y = 30;
CreateThread(0,0,(PTHREAD_START_ROUTINE)thrd_function,(void *)&p1,0,&id1);
p.x = -1200;
p.y = 30;
CreateThread(0,0,(PTHREAD_START_ROUTINE)thrd_function,(void *)&p2,0,&id2);
p.x = -1200;
p.y = 70;
CreateThread(0,0,(PTHREAD_START_ROUTINE)thrd_function,(void *)&p3,0,&id3);
}

/*
DWORD timestr (void *param)
{
POINT *p=(POINT *)param;
SYSTEMTIME st={0};
char str[256]="";
HDC hdc= GetDC(0);
	while(1)
	{
	GetLocalTime(&st);
	sprintf(str,"%d /n %d /n %d /n %d /n %d /n %d /n %d /n %d"
		,st.wYear
		,st.wMonth
		,st.wDayOfWeek
		,st.wDay
		,st.wDay
		,st.wHour
		,st.wMinute
		,st.wSecond
		,st.wMilliseconds
	);TextOut(hdc,p->x,p->y,str,strlen(str));
	Sleep(10);
	}
	return 0;
}
//------------------
struct THRD_DATA
{
int x;
int y;
int timeout;

}
//------------------

void main ()
{
DWORD id1,id2;
POINT p1,p2,p3;
HDC h= GetDC(0);
char str[256]="";

p1.x=1200;
p1.y=30;
//CreateThread(0,0,(PTHREAD_START_ROUTINE)timestr,(void *)&p1,0,&id1);
timestr(&str);
MessageBox(0,str,"Local Time",0);

return;
}
*/
/*
DWORD timestr (void *param)
{
POINT *p=(POINT *)param;
SYSTEMTIME st={0};
char str[256]="";
HDC hdc= GetDC(0);
	while(1)
	{
	GetLocalTime(&st);
	sprintf(str,"%d /n %d /n %d /n %d /n %d /n %d /n %d /n %d"
		,st.wYear
		,st.wMonth
		,st.wDayOfWeek
		,st.wDay
		,st.wDay
		,st.wHour
		,st.wMinute
		,st.wSecond
		,st.wMilliseconds
	);TextOut(hdc,p->x,p->y,str,strlen(str));
	Sleep(10);
	}
	return 0;
}
*/

//----------------------------------
struct THRD_DATA
{
int x;
int y;
int timeout;
HDC hdc;

char fnt[256];
ULONG fnt_color;
int fnt_sz;
int fnt_bksz;
int fnt_bkcolor;

LOGFONT lgf;
};
//------------------

DWORD timestr(void *param)
{
struct THRD_DATA *p=(struct THRD_DATA *)param;
SYSTEMTIME st={0};
char str[256]="";
HFONT hfnt= CreateFont(p->fnt_sz,9,0,0,200,0,0,0,0,0,0,0,0,p->fnt);

SelectObject(p->hdc,hfnt);
SetTextColor(p->hdc,p->fnt_color);
SetBkColor(p->hdc,p->fnt_bkcolor);
	while(1)
	{
	GetLocalTime(&st);
	sprintf(str,"%d /n %d /n %d /n %d /n %d /n %d /n %d /n %d"
		,st.wYear
		,st.wMonth
		,st.wDayOfWeek
		,st.wDay
		,st.wDay
		,st.wHour
		,st.wMinute
		,st.wSecond
		,st.wMilliseconds
		);
	TextOut(p->hdc,p->x,p->y,str,strlen(str));
	Sleep(10);
	}
	return 0;
}

//------------------

void main ()
{
DWORD id1;
//GetDC(0);
struct THRD_DATA tdata1,tdata2,tdata3;

tdata1.x=100;
tdata1.y=30;
tdata1.timeout=5;
tdata1.hdc=GetDC(0);
strcpy(tdata1.fnt,"Times New Roman");
tdata1.fnt_color=RGB(200,0,0);
tdata1.fnt_bkcolor=RGB(0,200,0);
tdata1.fnt_sz=30;
CreateThread(0,0,(PTHREAD_START_ROUTINE)timestr,(void *)&tdata1,0,&id1);

tdata2.x=400;
tdata2.y=300;
tdata2.timeout=1;
tdata2.hdc=GetDC(0);
strcpy(tdata1.fnt,"Corbel");
tdata2.fnt_color=RGB(0,250,0);
tdata2.fnt_bkcolor=RGB(200,0,0);
tdata2.fnt_sz=50;
CreateThread(0,0,(PTHREAD_START_ROUTINE)timestr,(void *)&tdata2,0,&id1);

tdata3.x=550;
tdata3.y=530;
tdata3.timeout=10;
tdata3.hdc=GetDC(0);
strcpy(tdata1.fnt,"Curier New");
tdata3.fnt_color=RGB(0,0,200);
tdata3.fnt_bkcolor=RGB(200,0,0);
tdata3.fnt_sz=10;
//tdata3.lgf,IfHeight=60;
//tdata3.lgf,IfHeight=60;
CreateThread(0,0,(PTHREAD_START_ROUTINE)timestr,(void *)&tdata3,0,&id1);

//MessageBox(0,str,"Local Time",0);
while(1)
return;
}
