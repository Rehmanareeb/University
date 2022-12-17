/*Enter your text here*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Sort_the_people(char user_name[][100], int heights[], int sorted_heights[],
                     int m);
int main() {
  int m;
  int user_heights[m], height_sorted[m];
  printf("Enter the number of people:\n");
  scanf("%d", &m);

  char user_given_names[m][100];
  printf("Enter the names of the people:\n");
  for (int i = 0; i < m; i++) {
    printf("Enter the name of person %d:\n", i + 1);
    scanf("%s", user_given_names[i]);
  }
  printf("Enter the heights of the people:\n");
  for (int i = 0; i < m; i++) {
    printf("Enter the height of %s:\n", user_given_names[i]);
    scanf("%d", &user_heights[i]);

    Sort_the_people(user_given_names, user_heights, height_sorted, m);
  }
}
/*define your function*/
void Sort_the_people(char user_name[][100], int heights[], int sorted_heights[],
                     int m) {
  for (int i = 0; i < m; i++) {
    sorted_heights[i] = heights[i];
  }
  // bubble sort the sorted heights in descending order
  for (int i = 0; i < m - 1; i++) {
    if (sorted_heights[i] < sorted_heights[i + 1]) {
      int temp = sorted_heights[i];
      sorted_heights[i] = sorted_heights[i + 1];
      sorted_heights[i + 1] = temp;
    }
  }
  // chheck the heights and print the names
  /*for (int i = 0; i < m; i++) {
    for (int j = 0; j < i; j++) {
      if (sorted_heights[i] == heights[j]) {
        printf("%s", user_name[i]);
      }
    }
  }*/
  // print the sorted height arays
  for (int i = 0; i < m; i++) {
    printf("%d ", sorted_heights[i]);
  }
}
