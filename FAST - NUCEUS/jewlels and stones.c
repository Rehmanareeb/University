/*Enter your text here*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int jewels_and_stones(char jewels[], char sstrings[]);
int main() {
  char jewels[10];
  char stones[100];
  printf("Enter the stones you have:\n");
  fgets(stones, 100, stdin);

  fflush(stdin);

  printf("Enter the jewels there are:\n");
  fgets(jewels, 10, stdin);

  jewels_and_stones(jewels, stones);
}
/*define your function*/
int jewels_and_stones(char jewels[], char stones[]) {
  int count = 0;
  for (int i = 0; jewels[i] != '\0'; i++) {
    for (int j = 0; stones[j] != '\0'; j++) {
      if (stones[j] == jewels[i])
        count++;
    }
  }
  printf("The number of jewels are %d", count - 1);
  return 0;
}