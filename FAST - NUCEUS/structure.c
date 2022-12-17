/*Enter your text here*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void star_print(int number_of_times);
int main() {
  int number_of_times = 0;
  printf("How many times do you want to print the stars?\n");
  scanf("%d", &number_of_times);
  star_print(number_of_times);
  return 0;
}

/*define your function*/
void star_print(int number_of_times) {
  for (int i = 0; i < number_of_times; i++) {
    printf("****\n");
  }
}