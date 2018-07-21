#include <stdio.h>
#include <string.h>

int main ()
{
    int i,t,j;
    char string[100], temp[100];
    scanf("%d",&t);
    for (i=0;i<=t;i++)
    {
    gets(string);
    if(strcmp(string,"gandhi"))
    {
        string[0] = toupper(string[0]);
        printf("%s",string);
    }
    else if(strcmp(string,"mahatma")){
        for(j=0;j<=7;j++){
            string[j]="";}
    string[1] = "M";
    }
    string[0] = toupper(string[0]);
    printf("%s",string);
    }
    printf("\n"); 
return 0;
}
