#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<string.h>
void menu();
void inst();
void start();
void score();
void score_max();
void main()
{
	clrscr();
	menu();
	getch();
}
void menu()
{
	int ch;
	clrscr();
    while(1)
    {
	printf("\t\tWELCOME\n\t\t  TO\n\t\"THE CODING CHALLENGE\"\n");
	printf("\nPress:\n1.Instructions\n2.Start the game\n3.View score list\n4.View the highest score\n5.Exit\n");
	printf("\n\n\nEnter your choice:");
	scanf("%d",&ch);
	fflush(stdin);
	switch(ch)
	{
		case 1:inst();
		break;
		case 2:start();
		break;
		case 3:score();
		break;
		case 4:score_max();
		break;
		case 5:exit(1);
		break;
	}

    }
	getch();
}
void inst()
{
	char ch;
	clrscr();
	printf("\n\t\t\tINSTRUCTIONS\n");
	printf("\n\n\t> The game consist of 2 levels i.e. LEVEL 1 and LEVEL 2.");
	printf("\n\t>Level 1 consist of 5 questions and Level 2 consist of 3 questions.");
	printf("\n\t> On solving each question you will get 1 point.");
	printf("\n\t> No negetive marks for wrong attempts.");
	printf("\n\t> NOTE:You will be able to play LEVEL 2 only if you secure a\" mimnimum\t\t of 3 points\" in LEVEL 1.");
	printf("\n\n\n\t\t\tHOW TO PLAY THE GAME");
	printf("\n\n\t>Each question consist of 4 options,choose the correct option.");
	printf("\n\t>To display the next question press any key. ");
	printf("\n\n\n\nTo START the game press \'s\'....");
	printf("\nor press any key to return to MAIN MENU....");
	ch=getchar();
	fflush(stdin);
	if(ch=='s')
	{
		clrscr();
		start();
       }
       else
       {
		clrscr();
		menu();
       }



}
void start()
{
	FILE *fp;
	char name[20],ch;
	int ch1,ans,count=0;
	clrscr();
	printf("Enter your name:");
	gets(name);
	fflush(stdin);
	fp=fopen("quiz.txt","a");
	fprintf(fp,"%s\t",name);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\npress any key to continue.....\nor press \'b\' to return main menu....");
	ch=getchar();
	fflush(stdin);
	if(ch=='b')
	{
		menu();
	}
	clrscr();
	printf("1.The C statement\"for(;;)\" represents an infinite loop that can be terminated by\n\n");
	printf("1.exit(0)\t\t\t2.break\n3.abort()\t\t\t4.terminate()\n");
	scanf("%d",&ans);
	fflush(stdin) ;
	if(ans==2)
	{
		printf("Correct...!");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nTo continue press ENTER......");
		count++;
		getch();
		clrscr();
	}
	else
	{

		printf("Wrong answer!\nThe correct answer is option 2.");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nTo continue press ENTER......");
		getch();
		clrscr();
	}
	printf("2.What is the default returntype of getchar() ?\n\n");
	printf("1.int\t\t\t2.char\n3.(char)*\t\t4.Reading a character doesnot requires a return type.\n");
	scanf("%d",&ans);
	fflush(stdin);
	if(ans==1)
	{
		printf("Correct...!");
		count++;
		getch();
		clrscr();
	}
	else
	{
		printf("Wrong answer!The correct answer is option 1.");
		getch();
		clrscr();
	}
	printf("3.What is the value of EOF?\n\n");
	printf("1. 0\t\t\t2. 1\n3. -1\t\t\t4. None of the above.\n");
	scanf("%d",&ans);
	fflush(stdin);
	if(ans==3)
	{
		printf("Correct...!");
		count++;
		getch();
		clrscr();
	}
	else
	{
		printf("Wrong answer!The correct answer is option 3.");
		getch();
		clrscr();
	}
	printf("4.Give the output:\nvoid main()\n{\n\tprintf(\"%%d\",-11%2)?\n\n");
	printf("1. 1\t\t\t2. -1\n3. 5.5\t\t\t4. -5.5\n");
	scanf("%d",&ans);
	fflush(stdin);
	if(ans==2)
	{
		printf("Correct...!");
		count++;
		getch();
		clrscr();
	}
	else
	{
		printf("Wrong answer!The correct answer is option 2.");
		getch();
		clrscr();
	}
	printf("5.The automatic variables are allocated space in the form of a ...?\n\n");
	printf("1.Stack\t\t\t2.queue\n3.Priority queue\t4.Random\n");
	scanf("%d",&ans);
	fflush(stdin);
	if(ans==1)
	{
		printf("Correct...!");
		count++;
		getch();
		clrscr();
	}
	else
	{
		printf("Wrong answer!The correct answer is option 1.");
		getch();
		clrscr();
	}
	if(count>=3)
	{
		printf("\n\nCongractulatios! You are qualified for the next level.\n");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to play the next level.... \nor press \'b\' to return main menu.\n ");
		ch=getchar();
		if(ch=='b')
		{
			menu();
		}
		else
		{
			clrscr();
			printf("\t\tLEVEL 2\n");
			printf("1.Predict the output:\nvoid main()\n{\nchar c=125;\nc=c+10;\nprintf(\"%%d\",c);\n}\n\n");
			printf("1.135\t\t\t2.+INF\n3.-121\t\t\t4.-8\n");
			scanf("%d",&ans);
			fflush(stdin);
			if(ans==3)
			{
				printf("\nCorrect...!");
				count++;
				getch();
				clrscr();
			}
			 else
			 {
				printf("Wrong answer!The correct answer is option 3.");
				getch();
				clrscr();
			 }
			 printf("2.Predict the output of the following code segment:\nvoid main()\n{\nchar a[100];\nprintf(\"%%d\",scanf(\"%%s\",arr));\n}\n\n");
			 printf("1.9\t\t\t2.1\n3.10\t\t\t4.100\n");
			 scanf("%d",&ans);
			 fflush(stdin);
			 if(ans==2)
			 {
				printf("Correct...!");
				count++;
				getch();
				clrscr();
			 }
			 else
			 {
				printf("Wrong answer!The correct answer is option 2.");
				getch();
				clrscr();
			 }
			 printf("3.Guess the output:\n{\nvoid main()\n{\n\t{\n\t\tint x=8;\n\t}\nprintf(\"%%d\",x);\n}\n");
			 printf("1.8\t\t\t2.0\n3.undefined\t\t4.Compile time error\n");
			 scanf("%d",&ans);
			 fflush(stdin);
			 if(ans==4)
			 {
				printf("Correct...!");
				count++;
				getch();
				clrscr();
			 }
			 else
			 {
				printf("Wrong answer!The correct answer is option 4.");
				getch();
				clrscr();
			 }
			 printf("\n\t\tGAME OVER...THANK YOU for playing!");
			 printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nTo view your score press \'v\'");
			 ch=getchar();
			 fflush(stdin);
			 if(ch=='v')
			 {
				clrscr();
				printf("\nNAME\t\tSCORE\n");
				printf("%s    \t\t%d",name,count);
				fprintf(fp,"%d\n",count);
				fclose(fp);
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\npress \'b\' to return main menu....");
				ch=getchar();
				fflush(stdin);
				if(ch=='b')
				{
					menu();
				}
			 }
		     } //else closed
	   }//if closed
	   else
	   {
		printf("Sorry...! you cannot play the next level...\nBetter luck next time.\n");
		printf("\n\npress b to return to main menu...\n") ;
		ch=getchar();
		fflush(stdin);
		if(ch=='b')
		{
			menu();
		}
		else
		menu();
	   }
	   }

void score()
{
	FILE *fp;
	char ch;
	clrscr();
	fp=fopen("quiz.txt","r");
	while(ch!=EOF)
	{
		ch=fgetc(fp);
		fflush(stdin);
		printf("%c",ch);
	}

	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to return to main menu.....\nor press e to exit.....");
	ch=getchar();
	fflush(stdin);
	if(ch=='e')
	{
		exit(1);
	}
	else
	{
		menu();
	}

}
void score_max()
{
	FILE *fp;
	char ch;
	clrscr();
	fp=fopen("quiz.txt","r");
	//while(ch!=EOF)
	{
	      //	fscanf(fp,"%s%d",str,arr);

	}

}

