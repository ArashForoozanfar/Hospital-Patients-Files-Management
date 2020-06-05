// main
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "structures.txt"
int main()
{
  int q, n, m, k, l;
  struct pInfo p;
  struct Users ad[10];
  FILE* F = fopen("PatientsInfo.txt", "a+");
  FILE* P = fopen("Admins.txt", "a+");
  for (int i = 0; i < 10 && ad[i].Name != NULL; i++) {
    fscanf(P, "%s", ad[i].userName);
    fscanf(P, "%s", ad[i].password);
    if (ad[i].Name == NULL) {
        q = i;
    }
  }
  char Username[100];
  char Password[100];
  char User1[] = {"Admin1"};
  char Pass1[] = {"Abcd1234"};
  printf("Hello :D\nWelcome to Hospital system:)\n");
  printf("Please enter 1-4 key for below states:\n");
  printf("Insert(1)\nDelete(2)\nUpdate(3)\nSerach(4)\n");
  scanf("%d", &n);

  if (n == 1) {
    //Insert
    puts("For adding new patients information you need to Login to system");
    puts("please enter your Username and Password:");
    printf("Username:");
    scanf("%s", Username);
    printf("Password:");
    scanf("%s", Password);
    if (strcmp(Username, User1) == 0 && strcmp(Password, Pass1) == 0) {
      puts("You entered succssesfully as Adminastrator!");
      puts("Please select(1) to enter patients information  or  select(2) to add new admin");
      scanf("%d", &m);
      if (m == 1) {
        #include "Insert.txt"
      } else if (m == 2) {
        puts("please select which number of Admins you want to add:");
        scanf("%d", &l);
        printf("You want to add %d new Admins so please enter:\n", l);
        for (int i = 0; i < l; i++) {
          printf("Admin Name: ");
          scanf("%s", ad[i].Name);
          fprintf(P, "%s\n", ad[i].Name);
          printf("Username: ");
          scanf("%s", ad[i].userName);
          fprintf(P, "%s\n", ad[i].userName);
          printf("Password: ");
          scanf("%s", ad[i].password);
          fprintf(P, "%s\n", ad[i].password);
      }
        puts("New Admins succssesfully added to system...");
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
    puts("To Delete patients information you need to Login to system");
    #include "Login.txt"
  }

  if (n == 3) {
    //Update
    puts("To Update patients information you need to Login to system:");
    #include "Login.txt"
  }

  if (n == 4) {
    //Serach
    puts("To Search patients information you need to Login to system:");
    #include "Login.txt"
  }
}
