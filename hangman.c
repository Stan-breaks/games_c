#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int hangman(void) {
  int attempts = 10;
  char *words[10] = {"python",   "java",      "hangman", "computer",
                     "keyboard", "geography", "coding",  "programming",
                     "gaming",   "hangman"};
  srand(time(0));
  int random = rand() % 10;
  char *word = words[random];
  int len = strlen(word);
  char guessed[len];
  for (int i = 0; i < len; i++) {
    guessed[i] = '_';
  }
  guessed[len] = '\0';
  printf("Welcome to Hangman!\n");
  while (attempts > 0) {
    printf("Attempts left: %d\n", attempts);
    printf("Word: %s\n", guessed);
    char guess;
    printf("Guess a letter: ");
    scanf(" %c", &guess);
    if (strchr(word, guess) != NULL) {
      for (int i = 0; i < len; i++) {
        if (word[i] == guess) {
          guessed[i] = guess;
        }
      }
    } else {
      attempts--;
    }
    if (strcmp(word, guessed) == 0) {
      printf("You win!\n");
      return 0;
    }
  }
  printf("You lose!\n");
  return 0;
}

int main(void) { hangman(); }

