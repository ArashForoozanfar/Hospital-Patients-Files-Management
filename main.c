// main
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
  char Username[100];
  char Password[100];
  char User1[] = {"Admin1"}; char User2[] = {"Admin2"};
  char Pass1[] = {"Abcd1234"}; char Pass2[] = {"Aqwe1"};
  int n;
  printf("Hi\nWelcome to Hospital system:)\n");
  printf("Please enter 1-4 key for below states:\n");
  printf("Insert(1)\nDelete(2)\nUpdate(3)\nSerach(4)\n");
  scanf("%d", &n);

  if (n == 1) {
    //Insert
    puts("For adding new patients information you need to Login into system");
    puts("please enter your Username and Password:");
    printf("Username:");
    scanf("%s", Username);
    printf("Password:");
    scanf("%s", Password);
    if (strcmp(Username, User1) == 0 && strcmp(Password, Pass1) == 0  || strcmp(Username, User2) == 0 && strcmp(Password, Pass2) == 0) {
      puts("You entered succssesfully!");
    }
    else {
      puts("Username or Password was incorrect, please try again...");
    }
  }

  if (n == 2) {
    //Delete
  }

  if (n == 3) {
    //Update
  }

  if (n == 4) {
    //Serach
  }
}
