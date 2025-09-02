#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void registerUser()
 {
    int a;
    char username[100];
    char id[20];
    char password[100];
    FILE *file = fopen("users.txt", "a");

    if (file == NULL)
    {
        printf("Sorry error opening file.\n");
        return;
    }
    printf("Please enter your username: ");
    scanf("%s", username);
    printf("Please enter your University ID: ");
    scanf("%s",id);
    printf("Please enter your password: ");
    scanf("%s", password);
    printf("\n");

    fprintf(file, "%s %s %s %s\n",username, id , password);
    fclose(file);

    printf("Registration successful.\n\n");
    printf("Press 1 To Main Menu.....");
    scanf("%d",&a);
    system("cls");
}

void loginUser()
 {
    int f=0,d1,g=0;
    char username[100];
    char password[100];
    char storedid[20];
    char storedUsername[100];
    char storedPassword[100];
    FILE *file = fopen("users.txt", "r");

    if (file == NULL)
    {
        printf("Sorry error opening file.\n");
        return 0;
    }

    printf("Please enter your ID: ");
    scanf("%s", username);
    printf("Please enter your password: ");
    scanf("%s", password);
    printf("\n");
    while (fscanf(file, "%s %s %s", storedUsername,storedid, storedPassword) != EOF)
        {
        if (strcmp(username, storedid) == 0 && strcmp(password, storedPassword) == 0) {
            fclose(file);
            f=1;
        }
    }

    fclose(file);
    if(f==1)
    {
        printf("Login successful.\n\n");
        printf("Press 1 To Continue.....");
        scanf("%d",&d1);
        g=1;
        system("cls");
    }
    else
    {
        printf("Invalid ID or password.\n");
        printf("Press 1 To Main Menu.....");
        scanf("%d",&d1);
        system("cls");
    }
    return g;
}

int main() {
    int choice;

    while (1) {
        printf("1. Register\n");
        printf("2. Login\n");
        printf("3. Exit\n");
        printf("Please enter your choice: ");
        scanf("%d", &choice);
        system("cls");
        if(choice==1)
        {
            registerUser();
        }
        else if(choice==2)
        {
            loginUser();
            if(g>0)
            {

            }
        }
        else if(choice==3)
        {
            break;
        }
    }

    return 0;
}

