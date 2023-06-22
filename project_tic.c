#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include <ctype.h>
void check(char,char);
char a[9]={'1','2','3','4','5','6','7','8','9'};
void gameName()
{
	printf("\n\t\t\t\t\t Tic Tac Toe Game\t\t\t\t\n");
}
void show()
{
	printf("\n\n\t\t\t\t\t---|---|---\n");
	printf("\t\t\t\t\t %c | %c |%c \n",a[0],a[1],a[2]);
	printf("\t\t\t\t\t---|---|---\n");
	printf("\t\t\t\t\t %c | %c |%c \n",a[3],a[4],a[5]);
	printf("\t\t\t\t\t---|---|---\n");
	printf("\t\t\t\t\t %c | %c |%c \n",a[6],a[7],a[8]);
	printf("\t\t\t\t\t---|---|---\n");
}  
void inputSymbol()
{
	printf("\nplayer 1 symbol :X:\n");
	printf("\nplayer 2 symbol :0:\n");
} 
void start()
{
	int pa;
	printf("\nEnter who will start the game : player 1 or player 2\n");
	scanf("%d",&pa);
}    
void play()
{
	char position,symbol;
	printf("\nEnter postion and symbol for the player \n");
	fflush(stdin);
	scanf("%c",&position);
	fflush(stdin);
	scanf("%c",&symbol);
	check(position,symbol);
} 
void check(char position,char symbol)
{
	int i;
	for(i=0;i<=8;i++)
	{
		if(a[i]==position)
		{
			a[i]=symbol;
			
		}
	}
}
  
int end()
{
	if((a[0]=='x' && a[1]=='x' && a[2]=='x') ||(a[0]=='x'&&a[3]=='x' && a[6]=='x')||(a[0]=='x'&&a[4]=='x' && a[8]=='x'))
	{
		return(100);
	}
	else if((a[0]=='0' && a[1]=='0' && a[2]=='0') ||(a[0]=='0'&&a[3]=='0' && a[6]=='0')||(a[0]=='0'&&a[4]=='0' && a[8]=='0'))
		return(200);
	else if(a[1]=='x'&& a[4]=='x'&&a[7]=='x')
		return(100);
	else if(a[1]=='0'&& a[4]=='0'&&a[7]=='0')
		return(200);
	else if(a[2]=='x'&& a[5]=='x'&&a[8]=='x')
		return(100);
	else if(a[2]=='0'&& a[5]=='0'&&a[8]=='0')
		return(200);
    else if(a[3]=='x'&& a[4]=='x'&&a[5]=='x')
		return(100);
	else if(a[3]=='0'&& a[4]=='0'&&a[5]=='0')
		return(200);
    else if(a[2]=='x'&& a[4]=='x'&&a[6]=='x')
		return(100);
	else if(a[2]=='0'&& a[4]=='0'&&a[6]=='0')
		return(200);
    else if(a[6]=='x'&& a[7]=='x'&&a[8]=='x')
		return(100);
	else if(a[6]=='0'&& a[7]=='0'&&a[8]=='0')
		return(200);
    return(300);
	
}
void tic_toc_toe()
{

printf("Pratyrusa caled\n");
		a[0]='1';
		a[1]='2';
		a[2]='3';
		a[3]='4';
		a[4]='5';
		a[5]='6';
		a[6]='7';
		a[7]='8';
		a[8]='9';
	int k;
	int ch;
	labell:
	gameName();
	show();
	inputSymbol();
	start();
	play();

	label:
	//clrscr();
	show();
	play();
	k=end();
	//clrscr();
	//system("cls");
	show(); 
		if(k==100)
			printf("\nPlayer 1 won\n");
		else if(k==200)
			printf("\nPlayer 2 won\n");
		else
			goto label;
	printf("\nDo you want to play continue...Enter 1 for YES and 0 for NO:");
	scanf("%d",&ch);
	if(ch==1)
	{
		a[0]='1';
		a[1]='2';
		a[2]='3';
		a[3]='4';
		a[4]='5';
		a[5]='6';
		a[6]='7';
		a[7]='8';
		a[8]='9';
		goto labell;
	}
	else
	{
		printf("Thank you\n");
		return ;

	}
	
}
void passk(char* data)
{
	//char data[20];
    while(1)
    {
        int i = 0;
        char c;

        //printf("Enter data: ");

        while ((c = getch()) != '\r') {
            if (c == '\b') {  // Check for backspace character
                if (i > 0) {
                    printf("\b \b");  // Erase the character from the screen
                    i--;
                }
            } 
            else {
                data[i++] = c;
                printf("*");  // Print asterisks instead of the actual characters
                
            }
        }
        data[i] = '\0';
        //printf("%s\n",data); 
        if((strcmp(data,"rock")==0))
        {
            break;
        }
        else if((strcmp(data,"paper")==0))
        {
            break;
        }   
        else if((strcmp(data,"scissors")==0))
        {       
            break;
        }
        else{
            printf("\nyou entered wrong\nplease try again\n");
        }
    }

    //printf("\nData entered: %s\n", data);

    
}
void rock_paper()
{
	printf("Let's play Rock, Paper, Scissors!\n");
    printf("Rock beats scissors. Scissors beats paper. Paper beats rock.\n");
    
    char player1_name[100];
    char player2_name[100];
    char player1_choice[20];
    char player2_choice[20];
    
    printf("Player 1, enter your name: ");
    scanf("%s", player1_name);
    printf("Player 2, enter your name: ");
    scanf("%s", player2_name);
    
    while (1) {
        printf("\n%s's turn\n", player1_name);
        printf("Enter your choice (rock, paper, or scissors): ");
        passk(player1_choice);

        
        printf("\n%s's turn\n", player2_name);
        printf("Enter your choice (rock, paper, or scissors): ");
        //scanf("%s", player2_choice);
        passk(player2_choice);
        // Convert choices to lowercase
        for (int i = 0; player1_choice[i]; i++) {
            player1_choice[i] = tolower(player1_choice[i]);
        }
        for (int i = 0; player2_choice[i]; i++) {
            player2_choice[i] = tolower(player2_choice[i]);
        }
        
        printf("\n%s choose: %s\n", player1_name, player1_choice);
        printf("%s choose: %s\n", player2_name, player2_choice);
        
        // Determine the winner
        if (strcmp(player1_choice, player2_choice) == 0) {
            printf("It's a tie!\n");
        }
        else if (
            (strcmp(player1_choice, "rock") == 0 && strcmp(player2_choice, "scissors") == 0) ||
            (strcmp(player1_choice, "scissors") == 0 && strcmp(player2_choice, "paper") == 0) ||
            (strcmp(player1_choice, "paper") == 0 && strcmp(player2_choice, "rock") == 0)
        ) {
            printf("%s wins!\n", player1_name);
        }
        else {
            printf("%s wins!\n", player2_name);
        }
        
        char play_again;
        printf("\nDo you want to play again? (y/n): ");
        scanf(" %c", &play_again);
        
        if (play_again == 'n' || play_again == 'N') {
            printf("\nThank you for playing!\n");
            break;
        }
    }

}              
void guessing_random_number()
{
	int number, guess, attempts = 0;
    srand(time(0));  //random number generator
    
    // It is used to generate the numbers 1 to 100
    number = rand() % 100 + 1;
    
    printf("Welcome to the Random Number Guessing Game!\n");
    
    do {
        printf("Guess the number (1-100): ");
        scanf("%d", &guess);
        attempts++;
        
        if (guess > number) 
        {
            printf("Higher value..from your guessing...please try again...\n");
        } else if (guess < number) {
            printf("Lower value..from your guessing...please try again....\n");
        } else {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
        }
    } while (guess != number);

}
void main()
{
	
	while(1)
	{
		printf("\n\t\t\t\t\t************WELCOME**************\n");
		printf("\n\t\t\t\t\t\tLET'S HAVE A FUN\n");
		printf("\n\t\t\t\t\t Enter 1 to play TIC-TAC-TOE\n");
		printf("\n\t\t\t\t\t Enter 2 to play ROCK-PAPER-SCISSORS\n");
		printf("\n\t\t\t\t\t Enter 3 to play GUESSING RANDOM NUMBER GAME\n");
		printf("\n\t\t\t\t\tCHOOSE A GAME AND ENJOY..\n");
		// printf("1.Tic Tac Toe\n");
		// printf("2.Rock Paper Scissor\n");
		// printf("3.Guessing random number\n");
		// printf("Choose one game:");
		int game;
		scanf("\t\t\t\t\t\t%d",&game);
		switch(game)
		{
			case 1:
				printf("hello \n");
				tic_toc_toe();
				break;
			case 2:
				rock_paper();
				break;
			case 3:
				guessing_random_number();
				break;
			default:
				printf("Entered wrong number\n");
				break;
		}
		int pr;
		printf("Do u want play any game again Enter 1 or 0:");
		scanf("%d",&pr);
		if(pr==0)
		{
			printf("Thank you\n");
			break;
		}
	}
	
    //clrscr();
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
