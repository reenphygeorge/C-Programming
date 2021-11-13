// Program to append text to an existing file //

#include<stdio.h>
#include<string.h>

int main()
{
    FILE *fp = fopen("test.txt","w");
    char str[100];
    gets(str);
    int len = strlen(str);
    for(int i=0 ; i<len ; i++)
    {
        putc(str[i],fp);
    }
    fclose(fp);
    fp = fopen("test.txt","a");
    char str2[100];
    gets(str2);
    int len2 = strlen(str2);
    for(int i=0 ; i<len2 ; i++)
    {
        putc(str2[i],fp);
    }
    fclose(fp);
    return 0;
}