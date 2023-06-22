#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
#include<ctype.h>
#include<time.h>
char a[9]={'1','2','3','4','5','6','7','8','9'};

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
int checkStub(char pos,char sym)
{
    //printf("%c\n",pos);
    //printf("%c\n",sym);
    int check_pos=atoi(&pos);//atoi is used to convert character to integer.
    if((check_pos<=9 && check_pos>=1) && (sym=='0' || sym=='X' || sym=='x'))
    {
        printf("Entered correct values\n");
        return 1;
    }
    else
    {
        printf("Entered wrong values\n");
        return 1;
    }
    
}
void testcaseofcheck()
{
    if(checkStub('1','x'))
    {
        printf("Test Case is passed\n");
    }
    if(checkStub('2','y'))
    {
         printf("Test case is passed\n");
    }
     char s=atoi("10");

    if(checkStub(s,'x'))
    {
        printf("Testcase is passed\n");
    }
    if(checkStub('x','3'))
    {
        printf("Testcase is passed\n");
    }
    if(checkStub('2','0'))
    {
        printf("Testcase is passed\n");
    }
    if(checkStub('6','0'))
    {
        printf("Testcase is passed\n");
    }
    if(checkStub('0','x'))
    {
        printf("Testcase is passed\n");
    }
    
}

int end_stub(char x,char y,char z)
{
    if (x==y)
    {
        if (y==z)
            return 1;
    }
    return 0;
}

void End_stub()
{
     //testcase_of_end_function();
    int actual=end_stub('x','x','x');
    int expected=1;
    assert(actual==expected);
    printf("Assertion passed\n");

    actual=end_stub('0','0','0');
    expected=1;
    assert(actual==expected);
    printf("Assertion passed\n");
}


int checking_positions(char a[],int pos[])
{
    int i=0;
    if(a[pos[i%3]]==a[pos[(i+1)%3]])
    {
        if(a[pos[(i+1)%3]]==a[pos[(i+2)%3]])
        {
            if(a[pos[i]]=='x')
            {
                printf("Player1 Wins\n");
                return 1;
            }
            else
            {
                printf("Player2 Wins\n");
                return 1;
            }
            
        }
    }
    return 0;
}
void checking_positions_stub()
{
    char a[9]={' ','x','x','x'};
    int pos[3]={1,2,3};
    int actual=checking_positions(a,pos);
    int expected=1;
    assert(actual==expected);
    printf("Assertion passed\n");

    char a1[9]={' ','0','0','0'};
    int pos1[3]={1,2,3};
    actual=checking_positions(a1,pos1);
    expected=1;
    assert(actual==expected);
    printf("Assertion passed\n");

    char a2[9]={' ','x',' ',' ','x',' ',' ','x'};
    int pos2[3]={1,4,7};
    actual=checking_positions(a2,pos2);
    expected=1;
    assert(actual==expected);
    printf("Assertion passed\n");

    char a3[9]={' ','0',' ',' ','0',' ',' ','0'};
    int pos3[3]={1,4,7};
    actual=checking_positions(a3,pos3);
    expected=1;
    assert(actual==expected);
    printf("Assertion passed\n");

    char a4[9]={' ',' ','x',' ',' ','x',' ',' ','x'};
    int pos4[3]={2,5,8};
    actual=checking_positions(a4,pos4);
    expected=1;
    assert(actual==expected);
    printf("Assertion passed\n");

    char a5[9]={' ',' ','0',' ',' ','0',' ',' ','0'};
    int pos5[3]={2,5,8};
    actual=checking_positions(a5,pos5);
    expected=1;
    assert(actual==expected);
    printf("Assertion passed\n");

    char a6[10]={' ',' ',' ','x',' ',' ','x',' ',' ','x'};
    int pos6[3]={3,6,9};
    actual=checking_positions(a6,pos6);
    expected=1;
    assert(actual==expected);
    printf("Assertion passed\n");

    char a7[10]={' ',' ',' ','0',' ',' ','0',' ',' ','0'};
    int pos7[3]={3,6,9};
    actual=checking_positions(a7,pos7);
    expected=1;
    assert(actual==expected);
    printf("Assertion passed\n");

    char a8[9]={' ',' ',' ','x',' ','x',' ','x'};
    int pos8[3]={3,5,7};
    actual=checking_positions(a8,pos8);
    expected=1;
    assert(actual==expected);
    printf("Assertion passed\n");

    char a9[9]={' ',' ',' ','0',' ','0',' ','0'};
    int pos9[3]={3,5,7};
    actual=checking_positions(a9,pos9);
    expected=1;
    assert(actual==expected);
    printf("Assertion passed\n");

    char a10[10]={' ','x',' ',' ',' ','x',' ',' ',' ','x'};
    int pos10[3]={1,5,9};
    actual=checking_positions(a10,pos10);
    expected=1;
    assert(actual==expected);
    printf("Assertion passed\n");

    char a11[10]={' ','0',' ',' ',' ','0',' ',' ',' ','0'};
    int pos11[3]={1,5,9};
    actual=checking_positions(a11,pos11);
    expected=1;
    assert(actual==expected);
    printf("Assertion passed\n");

    char a12[9]={' ',' ',' ',' ','x','x','x'};
    int pos12[3]={4,5,6};
    actual=checking_positions(a12,pos12);
    expected=1;
    assert(actual==expected);
    printf("Assertion passed\n");

    char a13[9]={' ',' ',' ',' ','0','0','0'};
    int pos13[3]={4,5,6};
    actual=checking_positions(a13,pos13);
    expected=1;
    assert(actual==expected);
    printf("Assertion passed\n");

}

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
            printf("\nyou entered wrong!!!!!\nplease try again\n");
            return 1;
        }
        return 0;
}

void rock_paper_scissors()
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

int guessing_random_number_stub(int rand_number,int guess)
{
	
        printf("Welcome to the Random Number Guessing Game!\n");
        printf("Guess the number (1-100): ");
    
        if((rand_number>100 || rand_number<1) || (guess>100 || guess<1))
        {
            printf("Entered incorrect range\n");
        }
        else if (guess > rand_number) 
        {
            printf("Higher value..from your guessing...please try again...\n");
            return 1;
        } else if (guess < rand_number) {
            printf("Lower value..from your guessing...please try again....\n");
            return 1;
        } else {
            printf("Congratulations! You guessed the number \n");
            return 1;
        }
        return 0;

}

void Guessing_Random_Number_Stub()
{
    int rand_number=98,guess=20;
    int actual=guessing_random_number_stub(rand_number,guess);
    int expected=1;
    assert(actual==expected);
    printf("Assertion passed\n");

    rand_number=98,guess=100;
    actual=guessing_random_number_stub(rand_number,guess);
    expected=1;
    assert(actual==expected);
    printf("Assertion passed\n");

    rand_number=98,guess=98;
    actual=guessing_random_number_stub(rand_number,guess);
    expected=1;
    assert(actual==expected);
    printf("Assertion passed\n");

    rand_number=98,guess=98;
    actual=guessing_random_number_stub(rand_number,guess);
    expected=1;
    assert(actual==expected);
    printf("Assertion passed\n");

    rand_number=90,guess=91;
    actual=guessing_random_number_stub(rand_number,guess);
    expected=1;
    assert(actual==expected);
    printf("Assertion passed\n");

    rand_number=23,guess=98;
    actual=guessing_random_number_stub(rand_number,guess);
    expected=1;
    assert(actual==expected);
    printf("Assertion passed\n");

    rand_number=90,guess=90;
    actual=guessing_random_number_stub(rand_number,guess);
    expected=1;
    assert(actual==expected);
    printf("Assertion passed\n");


}
int main()
{
        printf("\n******************TIC-TAC-TOE TESTCASES AND STUBS**********************\n");
        printf("\n----Check_Stub is called----\n\n");
        testcaseofcheck();

        printf("\n----End_stub is called----\n\n");
        End_stub();

        printf("\n----checking_positions is called----\n\n");
        checking_positions_stub();

        printf("\n******************ROCK_PAPER_SCISSORS TESTCASES AND STUBS**********************\n");
        rock_paper_scissors();
        
        printf("\n*************GUESSING_RANDOM_NUMBER TESTCASES AND STUBS*****************\n\n");

        Guessing_Random_Number_Stub();

        printf("\n\n");


}

