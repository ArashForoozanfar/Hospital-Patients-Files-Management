// main
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define A 100
#define B 10
#include "structures.txt"
int main()
{
  time_t cur_time;
  int n = 0, m = 0, k = 0, l = 0, q = 0, b = 0, cnt = 0, z = 0, w = 0, e = 0, r = 0, c = 0, d = 0, x = 0, v = 0, t = 0;
  struct pInfo p[A];
  struct Users ad[B];
  FILE* P = fopen("Users.txt", "a+");
  FILE* S = fopen("Searched_Patients.txt", "a+");
  FILE* D = fopen("Prescriptions.txt", "a+");
  for (int i = 0; i < 10; i++) {
    if (ad[i].Name != NULL) {
      q = i;
      fscanf(P, "%d", &ad[i].index);
      fscanf(P, "%s", ad[i].Name);
      fscanf(P, "%s", ad[i].userName);
      fscanf(P, "%s", ad[i].password);
    }
  }
  b = q - 6;
  /*for (int i = 0; i < b; i++) {
    printf("%d\n", ad[i].index);
    printf("%s\n", ad[i].Name);
    printf("%s\n", ad[i].userName);
    printf("%s\n", ad[i].password);
  }*/
  char search_fName[A];
  char search_lName[A];
  long long search_ID;
  long long search_filenum;
  char Username[A];
  char Password[A];
  char new_fName[A];
  char new_lName[A];
  long long new_id;
  long long new_pNumber;
  long long new_fId;
  char new_cause[A];
  long long new_price;
  char new_price_Date[A];
  char new_noDate[A];
  char new_Drug[A];
  char new_Dosage[A];
  char User1[] = {"Admin1"};
  char Pass1[] = {"Arash1234"};
  char delUser[A];
  printf("Hello :D\nWelcome to Hospital system:)\n");
  printf("Please enter 0-2 key for below states:\n");
  printf("Insert(1)\nSearch, Delete and Update(2)\nExit(0)\n");
  scanf("%d", &n);

  if (n == 1) {
    //Insert
    FILE* F = fopen("PatientsInfo.txt", "a+");
    puts("For adding new information you need to Login to system");
    puts("please enter your Username and Password:");
    printf("Username:");
    scanf("%s", Username);
    printf("Password:");
    scanf("%s", Password);
    if (strcmp(Username, User1) == 0 && strcmp(Password, Pass1) == 0) {
      puts("You entered succssesfully as Adminastrator!");
      printf("Please select(1) to enter patients information  or  select(2) to add new Users  or  select(3) to remove a User:");
      scanf("%d", &m);
      if (m == 1) {
        #include "Insert.txt"
      } else if (m == 2) {
              puts("please select which number of Users you want to add:");
              scanf("%d", &l);
              printf("You want to add %d new Users so please enter:\n", l);
              for (int i = 0; i < l; i++) {
                printf("User Index:");
                scanf("%d", &ad[i].index);
                fprintf(P, "%d\n", ad[i].index);
                printf("User FirstName and LastName: ");
                scanf("%s", ad[i].Name);
                fprintf(P, "%s\n", ad[i].Name);
                printf("Username: ");
                scanf("%s", ad[i].userName);
                fprintf(P, "%s\n", ad[i].userName);
                printf("Password: ");
                scanf("%s", ad[i].password);
                fprintf(P, "%s\n", ad[i].password);
                fprintf(P, "\n");
              }
              puts("New Users succssesfully added to system ...");
              puts("Now select(1) to enter new information or (0) to Exit ...");
              scanf("%d", &k);
              if (k == 1) {
                #include "Insert.txt"
              } else if (k == 0) {
                      exit(0);
                    }
            } else if (m == 3) {
                #include "Delete Users.txt"
                  }
    }
    else {
        puts("Username or Password was incorrect, please try again ...");
      }
      fclose (F);
    }


  if (n == 2) {
    //Search, Update and Delete
    FILE* F = fopen("PatientsInfo.txt", "a+");
    puts("To Search patients information you need to Login to system:");
    #include "Login.txt"
    #include "Search.txt"
    }



  if (n == 0) {
    //exit
    exit (0);
  }


  fclose (P);
  fclose (S);
  fclose (D);


}
