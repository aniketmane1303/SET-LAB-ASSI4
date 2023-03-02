#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    char *p[5];
    char tmp[15];
    int i=0,n;
    printf("\n data\n");
    while(i<n)
    {
        scanf("%s",tmp);
        n=strlen(tmp)+1;
        *(p+i)=(char*)malloc(n*sizeof(char));
        strcpy(*(p+i),tmp);
        i++;
    }
    printf("\n city name:");
    for(i=0;i<5;i++)
    {
        puts(*(p+i));
        free(*(p+i));
    }
    return;
}