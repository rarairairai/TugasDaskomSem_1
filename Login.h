#include<stdio.h>
int size;
char Name[50];
char Passp[50];
int option;

void login() {
	fopen("Data.txt", "r");
    printf("   ====Login=====   ");
    printf("\n username");
    printf(" - "); scanf("%s", &Name);
    printf(" password");
    printf(" - "); scanf("%s", &Passp);

}

void start() {
    printf("====Register/Login====\n");
    printf("1. Register\n");
    printf("2. Login\n");
    scanf("%d", &option);

    switch (option)
    {
    case 1: 
        Registerol();
    case 2: 
        login();
    default:
        printf("Pls 1 or 2");
        if (option == 3) {
            break;
        }
        else {
            start();
        }

    }

}