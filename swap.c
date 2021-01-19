#include<stdio.h>

void swap(char **a, char **b) 
{ 
  char *temp = *a; 
  *a = *b; 
  *b = temp; 
}   
   
int main() 
{ 
  char *first = "first phase"; 
  char *second = "second phase";
  printf ("%s, %s \n", first, second); // the output should be "first phase, second phase"
  swap(&first, &second); 
  printf("%s, %s \n", first, second); // the output should be "second phase, first phase"
  return 0; 
} 