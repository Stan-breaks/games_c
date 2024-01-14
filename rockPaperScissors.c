#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void) {
  int userChoice;
  int computerChoice;
  char con = 'y';
  int userScore = 0;
  printf("Welcome to Rock, Paper, Scissors!");
  while (con == 'y') {
    sleep(2);
    printf("\n--------------------------\nEnter your choice: "
           "\n----------------------------\n 1. Rock\n 2. "
           "Paper\n 3. Scissors\n 4. Quit\n----------------------------\n");
    scanf("%d", &userChoice);
    computerChoice = rand() % 3 + 1;
    sleep(2);
    switch (userChoice) {
    case 1:
      printf("You chose Rock!\n");
      if (computerChoice == 1) {
        printf("Computer chose Rock!\n");
        printf("It's a tie!\n");
      } else if (computerChoice == 2) {
        printf("Computer chose Paper!\n");
        printf("You lose!\n");
      } else {
        printf("Computer chose Scissors!\n");
        printf("You win!\n");
        userScore++;
      }
      break;
    case 2:
      printf("You chose Paper!\n");
      if (computerChoice == 1) {
        printf("Computer chose Rock!\n");
        printf("You win!\n");
        userScore++;
      } else if (computerChoice == 2) {
        printf("Computer chose Paper!\n");
        printf("It's a tie!\n");
      } else {
        printf("Computer chose Scissors!\n");
        printf("You lose!\n");
      }
      break;
    case 3:
      printf("You chose Scissors!\n");
      if (computerChoice == 1) {
        printf("Computer chose Rock!\n");
        printf("You lose!\n");
      } else if (computerChoice == 2) {
        printf("Computer chose Paper!\n");
        printf("You win!\n");
        userScore++;
      } else {
        printf("Computer chose Scissors!\n");
        printf("It's a tie!\n");
      }
      break;
    case 4:
      printf("Thanks for playing!\n");
      printf("Your score is: %d\n", userScore);
      exit(0);
      break;
    default:
      printf("Invalid choice!\n");
      break;
    }
    printf("Your score is: %d\n", userScore);
    sleep(2);
    scanf(" %c", &con);
  }
}
