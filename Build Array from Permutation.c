/*Enter your text here*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 100
void build_array(int user_array[], int permutated_array[],
                 int number_of_elements);
int main() {
  int number_of_elements;

  int user_array[max];
  int permutated_array[max];

  // Input the number of elements in the array
  printf("Enter the number of elements in the array: ");
  scanf("%d", &number_of_elements);

  printf("Enter the elements of the array:\n");

  // Input the elements of the array
  for (int i = 0; i < number_of_elements; i++) {
    printf("Enter element %d:\n", i + 1);
    scanf("%d", &user_array[i]);
  }
  // Call the function to build the permutated array
  build_array(user_array, permutated_array, number_of_elements);
}
void build_array(int usr_array[], int permutatoid_array[],
                 int number_of_elements) {
  // Build the permutated array by using the elements of the user array
  for (int i = 0; i < number_of_elements; i++) {
    permutatoid_array[i] = usr_array[usr_array[i]];
  }
  // Printing the permutated array
  printf("The permutated array is: ");
  for (int i = 0; i < number_of_elements; i++) {
    printf("%d ", permutatoid_array[i]);
  }
}
