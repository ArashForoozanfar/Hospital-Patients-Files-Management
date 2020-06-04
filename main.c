// main
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
  char Username[100];
  char Password[100];
  char U[] = {"Admin"};
  char P[] = {"Abcd1234"};
  int n;
  printf("Hi\nWelcome to Hospital system:)\n");
  printf("Please enter 1-3 key for below states:\n");
  printf("Insert(1)\nDelete(2)\nUpdate(3)\n");
  scanf("%d", &n);

  if (n == 1) {
    //Insert
    puts("For adding new patients information you need to Login into system");
    puts("please enter your Username and Password:");
    puts("Username: ");
    scanf("%s", Username);
    puts("Password: ");
    scanf("%s", Password);
    if (strcmp(Username, U) == 0 && strcmp(Password, P) == 0) {
      puts("You entered succssesfully!");
    }
    else {
      puts("Username or Password was incorrect, please try again");
    }
  }

  if (n == 2) {
    //Delete
  }

  if (n == 3) {
    //Update
  }

}
