#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"Register.h"
#include"admin.h"

int option = 0;
typedef struct 
{
    char name[50];
    char passp[50];
    char type[50];
    int balance;
    int frequency;
}User;

int loginvalue;
int couter = 0;
char userType[50];

int Authentication(User user2,char username[50], char password[50]) {

    FILE* file1;
    file1 = fopen("Data.bin", "rb");

    
    while (fread(&user2, sizeof(user2), 1, file1)) {
        if (strcmp(user2.name, username) == 0 && strcmp(user2.passp,password)) {
            strcpy(userType,user2.);
            return 1;
            break;
        }
    }
    fclose(file1);
    return 0;
}


int login() {
    User user,user1;
 
    printf("Enter your Username - ");
    scanf("%s", &user.name);
    printf("Enter your password - ");
    scanf("%s", &user.name);
    if (Authentication(user1, user.name, user.passp) == 1) {
        
        loginvalue = 1;

   }
    else {

        loginvalue = 1;
    }
}

int start() {

    printf("====Register/Login====\n\n");
    printf("1. Register\n");
    printf("2. Login\n");
    printf("3. quit\n\n- ");
    scanf("%d", &option);
    while (option != 3) {
        if (option == 1) {
            Registerol();
            break;
        }
        else if (option == 2) {
            login();
            if (loginvalue == 1) {
                printf("Login Sucessful");
            }
            break;
        }
        else {
            option = 3;
        }

        // login sucess for admin
    }
  
}