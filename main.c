// main
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "structures.txt"
int main()
{
  struct pInfo p;
  FILE* F = fopen("PatientsInfo.txt", "a+");
  FILE* P = fopen("Admins.txt", "a+");
  char Username[100]; char adminName[100]; char adminPass[100];
  char Password[100]; char adminUser[100];
  char User1[] = {"Admin1"};
  char Pass1[] = {"Abcd1234"};
  int n, m, k;
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
    if (strcmp(Username, User1) == 0 && strcmp(Password, Pass1) == 0) {
      puts("You entered succssesfully as Adminastrator!");
      puts("Please select(1) to enter patients information    or   select(2) to add new admin");
      scanf("%d", &m);
      if (m == 1) {
        #include "Insert.txt"
      } else if (m == 2) {
        puts("You want to add new admin so please enter:");
        printf("Admin Name: ");
        scanf("%s", adminName);
        fprintf(P, "Admin Name: %s\n", adminName);
        printf("Username: ");
        scanf("%s", adminUser);
        fprintf(P, "Admin Username: %s\n", adminUser);
        printf("Password: ");
        scanf("%s", adminPass);
        fprintf(P, "Admin Password: %s\n", adminPass);
        puts("New Admin succssesfully added to system...");
        puts("Now select(1) to enter new information or (0) to Exit...");
        scanf("%d", &k);
        if (k == 1) {
          #include "Insert.txt"
        } else if (k == 0) {
          exit(0);
        }
      }
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
