#include<Stdio.h>
#include<string.h>
#include<stdlib.h>
struct details{

    char username[100];
    char id[20];
    char pass[50];
};
void registe(int a)
{
    int a1,i;
    FILE *log;
    int s;
    log = fopen("login.txt","r");
    fscanf(log,"%d",&s);
    fclose(log);
    struct details ar[100];
    for(i=0;i<a;i++)
    {
        printf("Enter Username: ");
        scanf("%s", ar[s].username);
        printf("Enter ID: ");
        scanf("%s", ar[s].id);
        printf("Enter Password: ");
        scanf("%s", ar[s].pass);
        s++;
    }
    log = fopen("login.txt","w");
    fprintf(log,"%d\n",s);
    for(i=0;i<s;i++)
    {
        fprintf(log,"%s\n",ar[i].username);
        fprintf(log,"%s\n",ar[i].id);
        fprintf(log,"%s\n",ar[i].pass);
    }
    fclose(log);
    printf("Press 1 To Return Log in.....");
    scanf("%d",&a1);
    system("cls");
    //login();

}
void login()
{
    char id[20], ps[50];
    FILE *log;
    struct details ar[100];
    int s,i;
    log = fopen("login.txt", "r");
    fscanf(log, "%d", &s);
    for(i=0;i<s;i++)
    {
        fscanf(log,"%s",ar[i].username);
        fscanf(log,"%s",ar[i].id);
        fscanf(log,"%s",ar[i].pass);
    }
    fclose(log);
    for(i=0;i<s;i++)
    {
        printf("%s\n%s\n%s\n",ar[i].username,ar[i].id,ar[i].pass);
    }
    printf("Enter Your ID: ");
    scanf("%s", id);
    printf("Enter Password: ");
    scanf("%s", ps);
    int found = 0,a;
    for (int i = 0; i<s; i++)
    {
        if (strcmp(id, ar[i].id) == 0 && strcmp(ps, ar[i].pass) == 0)
        {
            printf("Successful Login.");
            found = 1;
            scanf("%d",&a);
            break;
        }
    }
    if (!found)
    {
        printf("Please Enter correct ID or Password\n");
        scanf("%d",&a);
    }
}
int main()
{
    int q1;
    while(1)
    {
        printf("1. Register\n");
        printf("2. Login\n");
        printf("3. Exit\n\n");
        printf("Please enter your choice: ");
        scanf("%d", &q1);
        system("cls");
        if(q1==1)
        {
            registe(1);
        }
        else if(q1==2)
        {
            login();
        }
        else if(q1==3)
        {
            break;
        }
    }
    return 0;
}
