#include <stdio.h>
#include <string.h>
/*
  ROCK-PAPER-SCISSOR game in C

  - I did it in Python but maybe this is faster.
  
*/

// TODO: Make a rps clone in c

int game() {
  char p1_hit[100];
  char p2_hit[100];

  printf("Player 1's turn: ");
  scanf("%s", &p1_hit);
  printf("Player 2's turn: ");
  scanf("%s", &p2_hit);

  if (strcmp(p1_hit, p2_hit) == 0) {
    printf("It's a tie. Nobody wins.\n");
  } else {
    if (strcmp(p1_hit, "R") == 0) {
      if (strcmp(p2_hit, "P") == 0) {
	printf("Paper covers the rock.\nPlayer 2 wins.\n");
      } else if (strcmp(p2_hit, "S") == 0) {
	printf("Rock destroys scissor.\nPlayer 1 wins.\n");
      } else {
	fprintf(stderr, "Player 2, what did you do?\n");
	exit(1);
      }
    } else if (strcmp(p1_hit, "P") == 0) {
      if (strcmp(p2_hit, "S") == 0) {
	printf("Scissor destroys paper.\nPlayer 2 wins.\n");
      } else if (strcmp(p2_hit, "R") == 0) {
	printf("Paper covers the rock.\nPlayer 1 wins.\n");
      } else {
	fprintf(stderr, "Player 2, what did you do?\n");
	exit(1);
      }
    } else if (strcmp(p1_hit, "S") == 0) {
      if (strcmp(p2_hit, "R") == 0) {
	printf("Rock destroys scissor.\nPlayer 2 wins.\n");
      } else if (strcmp(p2_hit, "P") == 0) {
	printf("Scissor destroys paper.\nPlayer 1 wins.\n");
      } else {
	fprintf(stderr, "Player 2, what did you do?\n");
	exit(1);
      }
    } else {
      fprintf(stderr, "Player 1, what did you do?\n");
    }
  }
}


int main() {
  char p1[2048];
  char p2[2048];

  printf("Welcome to Rock-Paper-Scissors!!\n");
  printf("To play this game, type R for rock, P for paper, and S for scissors.\n");

  printf("Enter the player 1's name: ");
  scanf("%s", &p1);
  printf("Enter the player 2's name: ");
  scanf("%s", &p2);

  if (strcmp(p1, p2) == 0) {
    fprintf(stderr, "You two are the same.\n");
    exit(1);
  } else {
    printf("Welcome %s and %s!!\n", p1, p2);
    game();
  }
  
  // printf("Hello World!\n");
  return 0;
}
