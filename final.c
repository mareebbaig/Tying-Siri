#include"INTRO.h"
#include"heading.h"
#include"calling.h"
void resume_game(char *,char*);
void play_game();
int produce_word(int, int,int,int);
void registeration();
void showmenu();
void score_card();
int check(char *word);
struct user{
	char name[20];
	char pass[20];
	int level;
	float speed;
};

void registeration()
{
	FILE *fp , *fp1;
	fp = fopen("userinfo.txt","a+");
	fp1 = fopen("level.txt","a"); 
	if (fp == NULL || fp1 == NULL)
	{
		printf("error opening file userinfo.txt or level.txt");
		exit(1);
	}
	int flag = 0 , i;
	char username[20], password[10];
	system("CLS");
	box(29,12);
	gotoxy(60,15);
	printf("....REGISTER YOURSELF....");
	gotoxy(60,16);
	printf(" =======================\n\n\n");
	label:
	do{
	gotoxy(55,19);
	printf("ENTER USERNAME: ");
	fflush(stdin);
	scanf("%[^\n]s",username);
	gotoxy(55,20);
	printf("ENTER PASSWORD: ");
	fflush(stdin);
	scanf("%[^\n]s",password);
	for (i = 0 ; i < strlen(username); i++)
	{
		if (username[i] == 32 || password[i] == 32)
		break;
	}
	if (i != strlen(username))
	{
		gotoxy(31,22);
		colorit(5);
		printf("INVALID USER NAME OR PASSWORD(CAN NOT CONTAIN SPACAE)..ENTER USER NAME AGAIN\n");	
		colorit(15);
		for (int x = 71 ; x < 91 ; x++)
		{
		gotoxy(x,19);
		printf(" ");
		gotoxy(x,20);
		printf(" ");
		}
	}
	}while (i != strlen(username));
	
	rewind(fp);
	struct user info;
	while ((fscanf(fp,"%s %s",info.name,info.pass)) != EOF)
	{
		if ((strcmp(info.name,username)==0) && (strcmp(info.pass,password) == 0))
		{
			gotoxy(55,24);
			printf("USER ALREADY REGISTERED...");
			gotoxy(55,26);
			printf("TRY AGAIN");
			for (int x = 71 ; x < 91 ; x++)
			{
			gotoxy(x,19);
			printf(" ");
			gotoxy(x,20);
			printf(" ");
			}
			goto label;
		}
	}
	fseek(fp,0,2);
	fprintf(fp,"%s %s\n",username,password);
	fseek(fp1,0,SEEK_END);
	fprintf(fp1,"%s %s %d %.2f\n",username,password,1,0);
	gotoxy(55,24);
	printf("USER REGISTERED SUCCESSFULLY...");
	fclose(fp);
	fclose(fp1);	
	gotoxy(55,26);
	printf("PRESS ANY KEY TO GO BACK TO MAIN MENU");
	getch();
	showmenu();
}
void play_game()
{
	FILE *fp;
	fp = fopen("userinfo.txt","r");
	if (fp == NULL)
	{
		printf("error opening data file...");
		exit(1);
	}
	int flag = 0 , i , x = 29 , y  = 12;
	char username[20], password[10];
	box(x,y);
	x += 25 , y += 3;
	gotoxy(x,y);
	colorit(14);
	printf("...........TYPING SIRI...........");
	colorit(15);
	label:
	do{
	gotoxy(55,19);
	printf("ENTER USERNAME: ");
	fflush(stdin);
	scanf("%[^\n]s",username);
	gotoxy(55,20);
	printf("ENTER PASSWORD: ");
	fflush(stdin);
	scanf("%[^\n]s",password);
	for (i = 0 ; i < strlen(username); i++)
	{
		if (username[i] == 32 || password[i] == 32)
		break;
	}
	if (i != strlen(username))
	{
		gotoxy(31,22);
		printf("INVALID USER NAME OR PASSWORD(CAN NOT CONTAIN SPACAE)..ENTER USER NAME AGAIN\n");	
		for (int x = 71 ; x < 91 ; x++)
		{
		gotoxy(x,19);
		printf(" ");
		gotoxy(x,20);
		printf(" ");
		}
	}
	}while (i != strlen(username));
	fseek(fp,0,SEEK_SET);
	struct user info;
	while (fscanf(fp,"%s %s",info.name,info.pass) != EOF)
	{
		if (strcmp(info.name,username) == 0 && strcmp(info.pass,password) == 0)
		{
			gotoxy(58,29);
			printf("please wait...");
			delay(300);
			flag = 1 ; 
			break;
		}
	}
	
	if (flag == 0)
	{
		gotoxy(53,25);
		printf("user not found..");
	    static int lol , ind = 1;
		while (lol != 13){
		gotoxy(58,27);
		colorit(15);
		if (ind == 1)
		colorit(13);
		printf("back to main menu");
		gotoxy(58,29);
		colorit(15);
		if(ind == 2)
		colorit(13);
		printf("try again");
		lol = getch();
		colorit(15);
		if (lol == 72)
		ind--;
		else if (lol == 80)
		ind++;
		if (ind == 0) ind = 2;
		if (ind == 3) ind = 1;
		}
		if(ind == 2){
		for (int x = 71 ; x < 91 ; x++)
		{
			gotoxy(x,19);
			printf(" ");
			gotoxy(x,20);
			printf(" ");
		}
			goto label;
		}
		else
		{ 
		return ;
	    }
	}
	else
	
	{ 
	resume_game(username,password);
    }
	fclose(fp);
	return;
}
int counter;      
void resume_game(char username[],char password[])
{
	int choice,newlevel,sum = 0,last,first,num = 10,k,key= 0;
	FILE *fp,*fp2;
	struct user s;
	fp = fopen("level.txt","r");
	if (fp == NULL)
	{
		printf("ERROR OPEING FILE...");
		exit(1);
	}
	fp2 = fopen("temp.txt","w");
	if (fp2 == NULL)
	{
		printf("ERROR OPEING FILE...");
		exit(1);
	}
	while (fscanf(fp,"%s %s %d %f",s.name,s.pass,&s.level,&s.speed) != EOF)
	{
		if ((strcmp(username,s.name)== 0 )&& (strcmp(s.pass,password) == 0))
		break;
	}
	system("CLS");
	box(29,12);
	
	while (choice != 13){
		gotoxy(43,19);
		colorit(15);
		if (key == 1)
		colorit(12);
		printf("RESUME GAME");
		gotoxy(43,22);
		colorit(15);
		if(key == 2)
		colorit(12);
		printf("NEW GAME");
		colorit(15);
     	choice = getch();
		colorit(15);
		if(choice == 72) key--;
		else if(choice == 80) key++;
		if(key == 0)  key = 2;
		else if (key == 3) key = 1;
		
	}
	clock_t t; 
    t = clock();
	srand(time(NULL));
	while(1)
	{
		k = rand()%16;
		if(k%5==0)
		break;
	}
	if (key == 1)
	{
		for (int i = 1 ; i < s.level ;i++)
		{
		srand(time(NULL));
		while(1)
		{
			k = rand()%(15+i);
			if (k % (5+i) == 0)
			break;
		}
		last = sum;
		first = (4 + i)*10;
		sum = first + last;
		k = sum + k;
		num = num +2;
		}
		counter=1;
		newlevel = produce_word(s.level,k,num,sum);
	}
	else if (key == 2)
	{
		counter=1;
		newlevel = produce_word(1,k,num,sum);
	}

	t = clock() - t; 
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
    float speed = time_taken/(counter*3);
    colorit(14);
    gotoxy(58,26);
    printf("Average typing speed per word = %.2f second",speed);
    colorit(13);
    gotoxy(58,30);
    printf("PRESS ANY KEY TO GO BACK");
    colorit(15);
    getch();
    rewind(fp);
    while(fscanf(fp,"%s %s %d %f\n",s.name,s.pass,&s.level,&s.speed)!=EOF)
    {
    	if(strcmp(username,s.name)!=0)
    	{
    		fprintf(fp2,"%s %s %d %.2f\n",s.name,s.pass,s.level,s.speed);
		}
		else
		{
			s.level=newlevel+1;
			s.speed=speed;
			fprintf(fp2,"%s %s %d %.2f\n",username,s.pass,newlevel+1,speed);
		}
	}
	fclose(fp);
	fclose(fp2);
	remove("level.txt");
	rename("temp.txt","level.txt");
	return;
}


int produce_word(int level,int k,int num,int sum)          					//Function for getting word from text file and displaying on the screen
{
	FILE *fp;
	fp=fopen("word.txt","r");                        //open file of data and update the record of user
	if(fp==0)                                        //but which user???
	{                                                //return level number into the new game fuction and update the record over their
	printf("unable to open");
	exit(0);
	}
	static int first,last,c = 1;
	char word[11];
	int choice = 0 ,i = 1;
	
	system("CLS");
	box(29,12);
	colorit(14);
	gotoxy(60,15);
	printf(".......... LEVEL %d ..........",level);
	colorit(15);
	if(c>3)
	{
	gotoxy(58,20);
	printf("Do you want to continue?\n");
	while (choice != 13){
		gotoxy(58,22);
		colorit(15);
		if (i == 1)
		colorit(12);
		printf("YES");
		gotoxy(58,24);
		colorit(15);
		if(i == 2)
		colorit(12);
		printf("NO");
		choice = getch();
		colorit(15);
		if (choice == 72)
		i--;
		if (choice == 80)
		i++;
		if (i == 0)  i = 2;
		else if (i == 3) i = 1;
	}	if (i == 1)                                 //if(ch==2)
   			{   counter+=1;                                   //return 0; 
				srand(time(NULL));
				while(1)
				{
				k = rand()%(15+level);
				if (k % (5+level) == 0)
				break;
				}
	
				last = sum;
				first = (4 + level)*10;
				sum = first + last;
				k = sum + k;
				num = num +2;
				c = 1;
				level++;
				fflush(stdin);
				produce_word(level,k,num,sum);
			}
		else
			{
				c = 1;
				return level;
			}
	}											// endif (C>3)
	else
	{
	fseek(fp,k,SEEK_SET);
	fscanf(fp,"%s",word);
	gotoxy(59,20);
	printf("%s",word);
	wordcall(word);
	check(word);
    c+=1;
    produce_word(level,k+num,num,sum);
	}
}												//end produce word

int check(char *word)                          //fuction for checking weather word is correct or not
{
	char *enteredword;
	gotoxy(59,22);
	printf("ENTER WORD HERE   : ");	
	enteredword = typing(word);
	if(strcmp(word,enteredword)==0)
	{
		gotoxy(59, 24);
		colorit(14);
		printf("CORRECT");
		wordcall("CORRECT");
		delay(500);
		colorit(15);
		return 0;
	}
	else
	{
		gotoxy(59, 26);
		colorit(12);
		printf("Try it again");
		wordcall("tryagain");  
		colorit(15);				                     //repeatedly calling if typed incorrectly
		for (int i = 74 ; i < 89 ; i++)
		{
			gotoxy(i,22);
			printf(" ");
		}
		check(word);
	}
}

void score_card()            //FUNCTION OF SCORECARD
{
	FILE *fptr;
	fptr = fopen("level.txt","r");
	if (fptr == NULL)
	{
		printf("error opening data file...");
		exit(1);
	}
	struct user u;
	int flag = 0 , i , x = 29 , y  = 12;
	char username[20], password[10];
	
	box(x,y);
	x += 25 , y += 3;
	gotoxy(x,y);
	colorit(14);
	printf("...........TYPING SIRI...........");
	colorit(15);
	do{
	gotoxy(55,19);
	printf("ENTER USERNAME: ");
	fflush(stdin);
	scanf("%[^\n]s",username);
	gotoxy(55,20);
	printf("ENTER PASSWORD: ");
	fflush(stdin);
	scanf("%[^\n]s",password);
	for (i = 0 ; i < strlen(username); i++)
	{
		if (username[i] == 32 || password[i] == 32)
		break;
	}
	if (i != strlen(username))
	{
		gotoxy(31,22);
		printf("INVALID USER NAME OR PASSWORD(CAN NOT CONTAIN SPACAE)..ENTER USER NAME AGAIN\n");	
		for (int x = 71 ; x < 91 ; x++)
		{
		gotoxy(x,19);
		printf(" ");
		gotoxy(x,20);
		printf(" ");
		}
	}
	}while (i != strlen(username));
	
	
	rewind(fptr);
	
	while (fscanf(fptr,"%s %s %d %f",u.name,u.pass,&u.level,&u.speed) != EOF)
	{
		if (strcmp(u.name,username) == 0 && strcmp(u.pass,password) == 0)
		{
			gotoxy(45,22);
			printf("USER NAME\t  |\tLEVELS COMPETED\t  |\tTYPING SPEED");
			gotoxy(45,24);
			printf("%s \t  |\t  %d  \t\t  |\t     %.2f    ",u.name,u.level-1,u.speed);
			colorit(13);
            gotoxy(58,28);
            printf("PRESS ANY KEY TO GO BACK");
            colorit(15);
			getch();
			flag = 1; 
			break;
		}
	}
	if (flag == 0)
	{
		gotoxy(53,25);
		printf("user not found..");
	    int lol , ind = 1;
		while (lol != 13){
		gotoxy(58,27);
		colorit(15);
		if (ind == 1)
		colorit(13);
		printf("back to main menu");
		gotoxy(58,29);
		colorit(15);
		if(ind == 2)
		colorit(13);
		printf("try again");
		lol = getch();
		colorit(15);
		if (lol == 72)
		ind--;
		else if (lol == 80)
		ind++;
		if (ind == 0) ind = 2;
		if (ind == 3) ind = 1;
		}
		if(ind == 2)
		{
		for (int x = 71 ; x < 91 ; x++)
			{
				gotoxy(x,19);
				printf(" ");
				gotoxy(x,20);
				printf(" ");
			}
		score_card();	
		} 
		else
		{
			fclose(fptr);
			showmenu();
	}
	}
	
	fclose(fptr);
	showmenu();
}
void showmenu()
	{
		
    	int index=1;
    	int key=0;
        system("cls");
        box(29,12);
        while(key!=13){
 	    colorit(15);
        char str[]="TYPING SIRI";
    	heading(str,35,3);
    	colorit(14);
      	gotoxy(54,15);
        printf(".........WELCOME TO THE GAME..........");
		colorit(15);
        gotoxy(43,19);
        colorit(15);
        if(index==1){colorit(12);}
        printf("SIGN UP");
        gotoxy(43,22);
        colorit(15);
        if(index==2){colorit(12);}
        printf("PLAY GAME");
        gotoxy(43,25);
        colorit(15);
        if(index==3){colorit(12);}
        printf("SCORE CARD");
        gotoxy(43,28);
        colorit(15);
        if(index == 4)
        colorit(12);
        printf("EXIT");
        /////////////UP=224/72 Down=224/80 Enter=13
        key=getch();
        if(key==80){index++;}
        else if(key==72){index--;}
        if(index==5){index=1;}
        if(index==0){index=4;}
        }
        
		if(index==1)
		{
            system("CLS");
    	   	registeration();
          
		}
        
		else if (index==2)
		{
        	system("CLS");
    		play_game();
            showmenu();
        }        
        else if (index == 3)
        {
        	score_card();
		}
		else if (index==4)
		{
           system("taskkill/IM ConsolePauser.exe");
        
        }
    }

int main()
{
	Intro();
	showmenu();
}  
