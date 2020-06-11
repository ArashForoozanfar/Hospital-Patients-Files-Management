// main
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "structures.txt"
int main()
{
  int n = 0, m = 0, k = 0, l = 0, q = 0, b = 0, cnt = 0, x = 0, d = 0, z = 0, w = 0, e = 0;
  struct pInfo p[100];
  struct Users ad[10];
  FILE* F = fopen("PatientsInfo.txt", "a+");
  FILE* P = fopen("Admins.txt", "a+");
  FILE* S = fopen("NewPatients.txt", "a+");
  for (int i = 0; i < 10; i++) {
    if (ad[i].Name != NULL) {
      q = i;
      fscanf(P, "%s", ad[q].Name);
      fscanf(P, "%s", ad[q].userName);
      fscanf(P, "%s", ad[q].password);
    }
  }
  b = q - 4;
  char search_fName[100];
  char search_lName[100];
  long long search_ID;
  long long search_filenum;
  char Username[100];
  char Password[100];
  char User1[] = {"Admin1"};
  char Pass1[] = {"Abcd1234"};
  char delAdmin[100];
  printf("Hello :D\nWelcome to Hospital system:)\n");
  printf("Please enter 0-4 key for below states:\n");
  printf("Insert(1)\nDelete(2)\nUpdate(3)\nSerach(4)\nExit(0)\n");
  scanf("%d", &n);

  if (n == 1) {
    //Insert
    puts("For adding new information you need to Login to system");
    puts("please enter your Username and Password:");
    printf("Username:");
    scanf("%s", Username);
    printf("Password:");
    scanf("%s", Password);
    if (strcmp(Username, User1) == 0 && strcmp(Password, Pass1) == 0) {
      puts("You entered succssesfully as Adminastrator!");
      printf("Please select(1) to enter patients information  or  select(2) to add new admin  or  select(3) to remove admin:");
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
        puts("New Admins succssesfully added to system ...");
        puts("Now select(1) to enter new information or (0) to Exit ...");
        scanf("%d", &k);
        if (k == 1) {
          #include "Insert.txt"
        } else if (k == 0) {
          exit(0);
        }
        } else if (m == 3) {
        #include "Delete Admins.txt"
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
    #include "Search.txt"
    }




  if (n == 0) {
    //exit
    exit (0);
  }


}
