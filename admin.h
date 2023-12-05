#include<stdio.h>
#include"Login.h"
typedef struct {
    char Nameadmin[50];
    char Passadmin[50];
}AdminUser;



AdminUser user[100];

void fetching_Admin_data() {

    file = fopen("Data.txt", "r");
    fopen("Data.txt", "r");
    for (int i = 0; i < size; i++) {
        fscanf(file, "%s %s", user[i].NameVerif, user[i].PassVerif);
        printf("Username is %s \n", user[i].NameVerif);

    }
    fclose(file);
}
void Admin_Homepage() {

	

}