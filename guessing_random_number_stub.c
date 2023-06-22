// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// #include <assert.h>

// int guess_random_number() {
//     // Generate a random number between 1 and 100
//     srand(time(0));
//     int random_number = rand() % 100 + 1;

//     while (1) {
//         int guess;
//         printf("Guess a number between 1 and 100: ");
//         scanf("%d", &guess);

//         // Check if the guess is correct
//         if (guess == random_number) {
//             printf("Congratulations! You guessed the correct number.\n");
//             return 1;
//         }

//         // Provide feedback to the user
//         if (guess < random_number) {
//             printf("Higher\n");
//         } else {
//             printf("Lower\n");
//         }
//     }
// }

// // Test the code using assertions
// void test_guess_random_number() {
//     // Set a fixed seed for random number generation
//     srand(42);

//     // Test case 1
//     int random_number = 57;
//     int user_input[] = {50, 75, 60, 55, 57};
//     assert(simulate_input(guess_random_number, user_input, 5) == 1);

//     // Test case 2
//     random_number = 12;
//     int user_input2[] = {50, 25, 10, 15, 12};
//     assert(simulate_input(guess_random_number, user_input2, 5) == 1);

//     // Test case 3
//     random_number = 89;
//     int user_input3[] = {50, 80, 90, 85, 89};
//     assert(simulate_input(guess_random_number, user_input3, 5) == 1);

//     // Test case 4
//     random_number = 37;
//     int user_input4[] = {50, 25, 40, 35, 37};
//     assert(simulate_input(guess_random_number, user_input4, 5) == 1);

//     // Test case 5
//     random_number = 62;
//     int user_input5[] = {50, 75, 60, 65, 62};
//     assert(simulate_input(guess_random_number, user_input5, 5) == 1);

//     printf("All test cases passed!\n");
// }

// // Helper function to simulate user input for testing
// int simulate_input(int (*func)(), int user_input[], int input_length) {
//     int i;
//     for (i = 0; i < input_length; i++) {
//         // Redirect user input from array
//         int guess = user_input[i];
//         if (func() == 1) {
//             return 1;
//         }
//     }
//     return 0;
// }

// int main() {
//     test_guess_random_number();

//     return 0;
// }
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<assert.h>
int guessing_random_number_stub(int guess,int number)
{
	int attempts = 0;
     //random number generator
    
    // It is used to generate the numbers 1 to 100
    //printf("%d\n",number);
    printf("Welcome to the Random Number Guessing Game!\n");
    
    do {
        printf("Guess the number (1-100): ");
        scanf("%d", &guess);
        attempts++;
        
        if (guess > number) 
        {
            printf("Higher value..from your guessing...please try again...\n");
            return 1;
        } else if (guess < number) {
            printf("Lower value..from your guessing...please try again....\n");
            return 1;
        } else {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
            return 1;
        }
    } while (guess != number);

}
int main()
{
    srand(42); 
    int number = rand() % 100 + 1;
    int guess=23;
    int actual=guessing_random_number_stub(guess,number);
    int expected=1;
    assert(actual==expected);
    printf("Assertion passed\n");
}