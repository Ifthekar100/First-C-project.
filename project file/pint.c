#include<stdio.h>
#include<string.h>
int main()
{
    int c1,y,z;
    char name[100],x[20];
    FILE *fr;
    fr=fopen("bus.txt","r");
    fscanf(fr,"%s %s %d %d",name,x,&y,&z);
    printf("%s %s %d %d",name,x,y,z);
    return 0;
}
