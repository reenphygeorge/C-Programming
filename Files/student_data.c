#include<stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("data.txt" , "w");
    char name[100] , grade;
    int mark;
    printf("Enter the name: ");
    gets(name);
    printf("Enter the total mark: ");
    scanf("%d" , &mark);
    getchar();
    printf("Enter the grade: ");
    scanf("%c" , &grade);

    fprintf(fp,"%s %d %c",name,mark,grade);
    fclose(fp);

    char name_tmp[100] , grade_tmp;
    int mark_tmp;
    fp = fopen("data.txt" , "r");
    fscanf(fp, "%s %d %c",name_tmp, &mark_tmp, &grade_tmp);
    printf("\nName: %s\n" , name_tmp);
    printf("Mark: %d\n" , mark_tmp);
    printf("Grade: %c\n" , grade_tmp);
    fclose(fp);
    return 0;
}
