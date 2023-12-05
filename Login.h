#include<stdio.h>
#include<string.h>
#include"admin.h"
# define size  100

typedef struct {
char NameVerif[50];
char PassVerif[50];
}User ;

User user[size];

char Name[50];
char Passp[50];

int option;
int data_size = 3;
FILE* file;






void fetching_data() {
    
    file = fopen("Data.txt", "r");
    fopen("Data.txt", "r");
    for (int i = 0; i < size; i++){
        fscanf(file, "%s %s", user[i].NameVerif ,user[i].PassVerif);
        printf("Username is %s \n", user[i].NameVerif);
        
    }
    fclose(file);
}

void userAuthentication(char name[50], char pass[50], User user[size], int counter) {
   
    if (strcmp(name, "admin") == 0 && strcmp(pass, "admin") == 0) {
        printf("Welcome admin");
    }
    else if(strcmp(name, user[1].NameVerif) == 0 && strcmp(pass, user[1].PassVerif) == 0)
    {
        printf("\n welcome %s", name);
    }

}void login() {

    fetching_data();

    printf("The data from data.txt : %s\n", user[0].NameVerif);
    printf("   ====Login=====   ");
    printf("\n username");
    printf(" - "); scanf("%s", &Name);
    printf(" password");
    printf(" - "); scanf("%s", &Passp);

    userAuthentication(Name, Passp, user, size);

}

void start() {
    printf("====Register/Login====\n\n");
    printf("1. Register\n");
    printf("2. Login\n");
    printf("3. quit\n\n- ");
    scanf("%d", &option);

    switch (option)
    {
    case 1: 
        Registerol();
        break;
    case 2: 
        login();
        break;
    default:
        printf("Pls 1 or 2\n");
        if (option == 3) {
            break;
        }
        else {
            start();
        }

    }

}