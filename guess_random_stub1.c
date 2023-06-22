#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<assert.h>
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
int main()
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

    rand_number=101,guess=98;
    actual=guessing_random_number_stub(rand_number,guess);
    expected=1;
    assert(actual==expected);
    printf("Assertion passed\n");

    rand_number=90,guess=121;
    actual=guessing_random_number_stub(rand_number,guess);
    expected=1;
    assert(actual==expected);
    printf("Assertion passed\n");

    rand_number=-1,guess=98;
    actual=guessing_random_number_stub(rand_number,guess);
    expected=1;
    assert(actual==expected);
    printf("Assertion passed\n");

    rand_number=90,guess=-2;
    actual=guessing_random_number_stub(rand_number,guess);
    expected=1;
    assert(actual==expected);
    printf("Assertion passed\n");



}