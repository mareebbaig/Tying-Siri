#include<stdio.h>
#include<windows.h>
#include<windowsx.h>
#include<MMSystem.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
void wordcall(char[]);
char* typing(char[]);
char word[11] = {0};
char* typing(char *str)
{
		char c;
		int i=0;
		while (i<=strlen(str))
		{
	    	c=getch();
	    	if(c==13) break;
	    	else if(c=='\b') 
			{
				printf("\b \b");
				i--;
			}
	    	else 
			{
				printf("%c",c);
				word[i] = c;
	   			i++;
			
		switch (word[i-1])
		{	
		case 'a':
			PlaySound("A.wav",NULL, SND_SYNC | SND_FILENAME);	
		break;
		
		case 'b':
			PlaySound("B.wav",NULL,SND_SYNC | SND_LOOP | SND_FILENAME);
		break;
		case 'c':
			PlaySound("C.wav",NULL,SND_SYNC | SND_LOOP | SND_FILENAME);
		break;
		
		case 'd':
			PlaySound("D.wav",NULL,SND_SYNC | SND_LOOP | SND_FILENAME);
		break;
		
		case 'e':
			PlaySound("E.wav",NULL,SND_SYNC | SND_LOOP | SND_FILENAME);
		break;
		
		case 'f':
			PlaySound("F.wav",NULL,SND_SYNC | SND_LOOP | SND_FILENAME);
		break;
		
		case 'g':
			PlaySound("G.wav",NULL,SND_SYNC | SND_LOOP | SND_FILENAME);
		break;

		case 'h':
			PlaySound("H.wav",NULL,SND_SYNC | SND_LOOP | SND_FILENAME);
		break;

		case 'i':
			PlaySound("I.wav",NULL,SND_SYNC | SND_LOOP | SND_FILENAME);
		break;

		case 'j':
			PlaySound("J.wav",NULL,SND_SYNC | SND_LOOP | SND_FILENAME);
		break;

		case 'k':
			PlaySound("K.wav",NULL,SND_SYNC | SND_LOOP | SND_FILENAME);
		break;

		case 'l':
			PlaySound("L.wav",NULL,SND_SYNC | SND_LOOP | SND_FILENAME);
		break;

		case 'm':
			PlaySound("M.wav",NULL,SND_SYNC | SND_LOOP | SND_FILENAME);
		break;

		case 'n':
			PlaySound("N.wav",NULL,SND_SYNC | SND_LOOP | SND_FILENAME);
		break;

		case 'o':
			PlaySound("O.wav",NULL,SND_SYNC | SND_LOOP | SND_FILENAME);

		break;
		case 'p':
			PlaySound("P.wav",NULL,SND_SYNC | SND_LOOP | SND_FILENAME);

		break;
		case 'q':
			PlaySound("Q.wav",NULL,SND_SYNC | SND_LOOP | SND_FILENAME);

		break;
		case 'r':
			PlaySound("R.wav",NULL,SND_SYNC | SND_LOOP | SND_FILENAME);

		break;
		case 's':
			PlaySound("S.wav",NULL,SND_SYNC | SND_LOOP | SND_FILENAME);

		break;
		case 't':
			PlaySound("T.wav",NULL,SND_SYNC | SND_LOOP | SND_FILENAME);

		break;
		case 'u':
			PlaySound("U.wav",NULL,SND_SYNC | SND_LOOP | SND_FILENAME);

		break;
		case 'v':
			PlaySound("V.wav",NULL,SND_SYNC | SND_LOOP | SND_FILENAME);

		break;
		case 'w':
			PlaySound("W.wav",NULL,SND_SYNC | SND_LOOP | SND_FILENAME);

		break;
		case 'x':
			PlaySound("X.wav",NULL,SND_SYNC | SND_LOOP | SND_FILENAME);

		break;
		case 'y':
			PlaySound("Y.wav",NULL,SND_SYNC | SND_LOOP | SND_FILENAME);

		break;

		case 'z':PlaySound("Z.wav",NULL,SND_SYNC | SND_LOOP | SND_FILENAME);
		break;	
		}
		}
	}
	return word;
}
void wordcall(char str[])
{
	if (strcmp(str,"bye") == 0)
	PlaySound("bye.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"guy") == 0)
	PlaySound("Guy.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"get") == 0)
	PlaySound("get.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"jet") == 0)
	PlaySound("Jet.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"hey") == 0)
	PlaySound("hey.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"lie") == 0)
	PlaySound("lie.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"mat") == 0)
	PlaySound("Mat.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"met") == 0)
	PlaySound("Met.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"put") == 0)
	PlaySound("put.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"tap") == 0)
	PlaySound("Tap.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"ball") == 0)
	PlaySound("ball.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"blue") == 0)
	PlaySound("blue.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"bomb") == 0)
	PlaySound("bomb.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"bulk") == 0)
	PlaySound("bulk.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"coat") == 0)
	PlaySound("coat.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"come") == 0)
	PlaySound("come.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"data") == 0)
	PlaySound("data.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"dark") == 0)
	PlaySound("dark.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"base") == 0)
	PlaySound("base.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"book") == 0)
	PlaySound("book.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"hello") == 0)
	PlaySound("hello.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"about") == 0)
	PlaySound("about.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"heart") == 0)
	PlaySound("heart.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"again") == 0)
	PlaySound("again.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"lemon") == 0)
	PlaySound("lemon.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"south") == 0)
	PlaySound("south.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"seven") == 0)
	PlaySound("seven.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"smile") == 0)
	PlaySound("smile.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"women") == 0)
	PlaySound("women.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"world") == 0)
	PlaySound("world.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"donate") == 0)
	PlaySound("donate.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"energy") == 0)
	PlaySound("energy.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"orange") == 0)
	PlaySound("orange.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"moment") == 0)
	PlaySound("moment.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"change") == 0)
	PlaySound("change.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"silver") == 0)
	PlaySound("silver.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"purple") == 0)
	PlaySound("purple.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"sister") == 0)
	PlaySound("sister.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"turtle") == 0)
	PlaySound("turtle.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"twelve") == 0)
	PlaySound("twelve.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"america") == 0)
	PlaySound("america.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"freedom") == 0)
	PlaySound("freedom.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"amazing") == 0)
	PlaySound("amazing.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"country") == 0)
	PlaySound("country.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"animals") == 0)
	PlaySound("animals.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"husband") == 0)
	PlaySound("husband.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"hundred") == 0)
	PlaySound("hundred.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"picture") == 0)
	PlaySound("picture.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"pumpkin") == 0)
	PlaySound("pumpkin.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"welcome") == 0)
	PlaySound("welcome.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"children") == 0)
	PlaySound("children.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"business") == 0)
	PlaySound("business.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"favorite") == 0)
	PlaySound("favorite.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"darkness") == 0)
	PlaySound("darkness.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"fourteen") == 0)
	PlaySound("fourteen.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"kindness") == 0)
	PlaySound("kindness.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"language") == 0)
	PlaySound("language.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"thirteen") == 0)
	PlaySound("thirteen.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"thursday") == 0)
	PlaySound("thursday.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"thousand") == 0)
	PlaySound("thousand.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"beautiful") == 0)
	PlaySound("beautiful.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"celebrate") == 0)
	PlaySound("celebrate.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"christmas") == 0)
	PlaySound("christmas.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"chocolate") == 0)
	PlaySound("chocolate.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"challenge") == 0)
	PlaySound("challenge.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"different") == 0)
	PlaySound("different.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"happiness") == 0)
	PlaySound("happiness.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"fireboard") == 0)
	PlaySound("fireboard.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"identical") == 0)
	PlaySound("identical.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"wednesday") == 0)
	PlaySound("wednesday.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"california") == 0)
	PlaySound("california.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"aboveboard") == 0)
	PlaySound("aboveboard.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"depression") == 0)
	PlaySound("depression.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"convention") == 0)
	PlaySound("convention.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"confidence") == 0)
	PlaySound("confidence.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"everything") == 0)
	PlaySound("everything.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"literature") == 0)
	PlaySound("literature.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"perfection") == 0)
	PlaySound("perfection.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"television") == 0)
	PlaySound("television.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"restaurant") == 0)
	PlaySound("restaurant.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"mainmenu") == 0)
	PlaySound("mainmenu.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"CORRECT") == 0)
	PlaySound("correct.wav" , NULL , SND_SYNC | SND_FILENAME);
	else if (strcmp(str,"tryagain") == 0)
	PlaySound("tryagain.wav" , NULL , SND_SYNC | SND_FILENAME);
}

