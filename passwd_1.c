#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include <string.h>
#include <ctype.h>
//#define ENTER 13
//#define TAB 9
//#define BCKSPC 8
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
int main()
{
    rock_paper();
}