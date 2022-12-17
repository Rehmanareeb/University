/*Enter your text here*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void truncateSentence(char s[], int k);
int main() {

  char user_string[100];
  char The_brand_new_string[100];
  int turncate_number;

  printf("Enter your string:\n");
  fgets(user_string, 100, stdin);

  printf("Enter the turncate number:\n");
  scanf("%d", &turncate_number);

  truncateSentence(user_string, turncate_number);
}
/*define your function*/
void truncateSentence(char s[], int k) {
  for (int i = 0; s[i] != '\0'; i++) {
    if (s[i] == ' ')
      k--;
    if (!k)
      s[i] = '\0';
  }

  printf("The turncated string is: %s", s);
}