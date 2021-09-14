#ifndef _INC_INTRO
#define _INC_INTRO

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<windows.h>
#include<time.h>
void delay(int milisec)															// function for delaying screen time
{
	clock_t start_time = clock();
	while (clock() < start_time + milisec)
	;
}
void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void Intro(){
	const char *txt = "  TYING SIRI  ";
	int  x = 68;
	for(int j = 0; j < x-40 ;j++)
	{
		gotoxy(x-j,22);
		printf("%c",178);
		gotoxy(x+j,22);
		printf("%c",178);
		delay(30);
	}

	for(int i = 0; i<=9 ; i++)
	{
	
		for(int j=0; j < x-40 ; j++)
		{
			gotoxy(x-j,21-i);
			printf("%c",178);
			gotoxy(x+j,21-i);
			printf("%c",178);
			gotoxy(x-j,21+i);
			printf("%c",178);
			gotoxy(x+j,21+i);
			printf("%c",178);
		}
		delay(30);
		for(int k=0; k < x - 40;k++)
		{
			gotoxy(x-k,21-i);
			printf(" ");
			gotoxy(x+k,21-i);
			printf(" ");
			gotoxy(x-k,21+i);
			printf(" ");
			gotoxy(x+k,21+i);
			printf(" ");
		}	
		
	}		
		
	for(int l=0 ; l < x - 29 ;l++)
	{
		gotoxy(x-l,12);
		printf("%c",178);
		gotoxy(x+l,12);
		printf("%c",178);
		gotoxy(x-l,29);
		printf("%c",178);
		gotoxy(x+l,29);
		printf("%c",178);
		
	}
	for(int i = 0 ; i < x - 40 ; i++)
	{
	
		for(int j=0 ; j < 8 ; j++)
		{
			gotoxy(x-i,21-j);
			printf("%c",178);
			gotoxy(x+i,21-j);
			printf("%c",178);
			gotoxy(x-i,21+j);
			printf("%c",178);
			gotoxy(x+i,21+j);
			printf("%c",178);
		}
		delay(25);
		for(int k=0;k<8;k++)
		{
			gotoxy(x-i,21-k);
			printf(" ");
			gotoxy(68-i,20);
			printf("%c",txt[6-i]);
			gotoxy(x+i,21-k);
			printf(" ");
			gotoxy(x-i,21+k);
			printf(" ");
			if(i < 8)
			{
				gotoxy(68+i,20);
				printf("%c",txt[6+i]);
			}
			gotoxy(x+i,21+k);
			printf(" ");
		}	
		
	}		

	for(int l=0;l<9;l++)
	{
		gotoxy(30,21-l);
		printf("%c",178);
		gotoxy(106,21-l);
		printf("%c",178);
		gotoxy(30,21+l);
		printf("%c",178);
		gotoxy(106,21+l);
		printf("%c",178);
	}

gotoxy(39,31);
printf("PRESS ANY KEY TO CONTINUE...");
getch();
}

#endif
