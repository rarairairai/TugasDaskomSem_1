#include<stdio.h>

# define size  100
typedef struct {
	char NameVerif[50];
	char PassVerif[50];
	char type[50];
}RegisterUser;

FILE* file;

void Registerol() {
	RegisterUser Register_user[size];
	file = fopen("Data.txt", "a");
	if (file == NULL) {
		printf("There is an error in reading the file");
		
	}
	printf("====Register====\n\n");
	printf("Username - ");
	scanf("%s", Register_user[0].NameVerif);
	printf("Password - ");
	scanf("%s", Register_user[0].PassVerif);
	printf("Type - ");
	scanf("%s", Register_user[0].type);

	fprintf(file, Register_user[0].NameVerif);
	fprintf(file, " ");
	fprintf(file, Register_user[0].PassVerif);
	fprintf(file, " ");
	fprintf(file, Register_user[0].type);
	fprintf(file, "\n");

	fclose(file);
	
}