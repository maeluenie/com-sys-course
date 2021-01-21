#include <stdio.h>
#include <string.h>
typedef struct student
{
  int roll_no;
  char name[30];
  int phone_number;
}st;

int main()
{
  st p1, p2, p3;
  p1.roll_no = 1;
  strcpy(p1.name,"Brown");
  p1.phone_number = 123443;
  p2.roll_no = 2;
  strcpy(p2.name,"Sam");
  p2.phone_number = 1234567822;
  p3.roll_no = 3;
  strcpy(p3.name,"Addy");
  p3.phone_number = 1234567844;
  printf("First Student\n");
  printf("roll_no : %d\nname : %s\nphone_number : %d\n", p1.roll_no, p1.name,p1.phone_number);
  printf("Second Student\n");
  printf("roll_no : %d\nname : %s\nphone_number : %d\n", p2.roll_no, p2.name,p2.phone_number);
  printf("Third Student\n");
  printf("roll_no : %d\nname : %s\nphone_number : %d\n", p3.roll_no, p3.name,p3.phone_number);
  return 0;
}