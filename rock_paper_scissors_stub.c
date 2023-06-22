#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<time.h>
#include<string.h>
#include <ctype.h>
int rock_paper_scissors_stub(char player1_choice[],char player2_choice[])
{
        if (strcmp(player1_choice, player2_choice) == 0) 
        {
            printf("\nIt's a tie!\n");
            return 1;
        }
        else if (
            (strcmp(player1_choice, "rock") == 0 && strcmp(player2_choice, "scissors") == 0) ||
            (strcmp(player1_choice, "scissors") == 0 && strcmp(player2_choice, "paper") == 0) ||
            (strcmp(player1_choice, "paper") == 0 && strcmp(player2_choice, "rock") == 0)
        ) 
        {
            printf("\nPlayer_1 Wins\n");
            return 1;
        }
        else if (
            ((strcmp(player1_choice, "rock") == 0 && strcmp(player2_choice, "paper") == 0)) || (strcmp(player1_choice, "scissors") == 0 && strcmp(player2_choice, "rock") == 0) || (strcmp(player1_choice, "paper") == 0 && strcmp(player2_choice, "scissors") == 0))
        
        {
            printf("\nPlayer_2 Wins\n");
            return 1;
        }
        else
        {
            printf("\nyou entered wrong\nplease try again\n");
            return 1;
        }
        return 0;
}
int main()
{
    char player1_choice[]="rock";
    char player2_choice[]="scissors";
    int actual=rock_paper_scissors_stub(player1_choice,player2_choice);
    int expected=1;
    assert(actual==expected);
    printf("Assertion passed\n");

    char player1_choice1[]="paper";
    char player2_choice1[]="scissors";
    actual=rock_paper_scissors_stub(player1_choice1,player2_choice1);
    expected=1;
    assert(actual==expected);
    printf("Assertion passed\n");

    char player1_choice2[]="rock";
    char player2_choice2[]="paper";
    actual=rock_paper_scissors_stub(player1_choice2,player2_choice2);
    expected=1;
    assert(actual==expected);
    printf("Assertion passed\n");

    char player1_choice3[]="paper";
    char player2_choice3[]="rock";
    actual=rock_paper_scissors_stub(player1_choice3,player2_choice3);
    expected=1;
    assert(actual==expected);
    printf("Assertion passed\n");

    char player1_choice4[]="scissors";
    char player2_choice4[]="rock";
    actual=rock_paper_scissors_stub(player1_choice4,player2_choice4);
    expected=1;
    assert(actual==expected);
    printf("Assertion passed\n");

    char player1_choice5[]="scissors";
    char player2_choice5[]="paper";
    actual=rock_paper_scissors_stub(player1_choice5,player2_choice5);
    expected=1;
    assert(actual==expected);
    printf("Assertion passed\n");

    char player1_choice6[]="scissors";
    char player2_choice6[]="scissors";
    actual=rock_paper_scissors_stub(player1_choice6,player2_choice6);
    expected=1;
    assert(actual==expected);
    printf("Assertion passed\n");

    char player1_choice7[]="paper";
    char player2_choice7[]="paper";
    actual=rock_paper_scissors_stub(player1_choice7,player2_choice7);
    expected=1;
    assert(actual==expected);
    printf("Assertion passed\n");

    char player1_choice8[]="rock";
    char player2_choice8[]="rock";
    actual=rock_paper_scissors_stub(player1_choice8,player2_choice8);
    expected=1;
    assert(actual==expected);
    printf("Assertion passed\n");

    char player1_choice9[]="rojbjk";
    char player2_choice9[]="rock";
    actual=rock_paper_scissors_stub(player1_choice9,player2_choice9);
    expected=1;
    assert(actual==expected);
    printf("Assertion passed\n");

    char player1_choice10[]="rojbjk";
    char player2_choice10[]="padkjwk";
    actual=rock_paper_scissors_stub(player1_choice10,player2_choice10);
    expected=1;
    assert(actual==expected);
    printf("Assertion passed\n");

    char player1_choice11[]="paper";
    char player2_choice11[]="vwuye";
    actual=rock_paper_scissors_stub(player1_choice11,player2_choice11);
    expected=1;
    assert(actual==expected);
    printf("Assertion passed\n");

    char player1_choice12[]=" ";
    char player2_choice12[]=" ";
    actual=rock_paper_scissors_stub(player1_choice9,player2_choice9);
    expected=1;
    assert(actual==expected);
    printf("Assertion passed\n");

    char player1_choice13[]=" ";
    char player2_choice13[]="paper";
    actual=rock_paper_scissors_stub(player1_choice13,player2_choice13);
    expected=1;
    assert(actual==expected);
    printf("Assertion passed\n");

}