/*Enter your text here*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *interpret(char *command);
int main() {

  char goal_array[100];
  char *goal_pointer = goal_array;

  printf("Enter your goal array:\n");
  fgets(goal_array, 100, stdin);
  interpret(goal_pointer);
}

char *interpret(char *command) {
  int i, out_count = 0;
  char out[105];
  memset(out, 0, sizeof(out));

  for (i = 0; i < strlen(command); i++) {
    if (command[i] == 'G') {
      out[out_count++] = 'G';
    } else if (command[i] == '(') {
      if (command[i + 1] == ')') {
        out[out_count++] = 'o';
      }
      if (command[i + 1] == 'a' && command[i + 2] == 'l' &&
          command[i + 3] == ')') {
        out[out_count++] = 'a';
        out[out_count++] = 'l';
      }
    }
  }
  printf("The goal array is: %s", command);
  // command = out;
  return command;
}