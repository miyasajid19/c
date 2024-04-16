//Use arrays to input and output 3 names, roll numbers and marks.
#include<stdio.h>
int main()
{
    struct student
    {
        char name [30];
        int roll_no;
        int marks;
    };
    struct student std[3];
    for (int i =0;i<3;i++)
    {
        printf(" for student %d: \n",i+1);
        printf("enter name");
        scanf("%s",std[i].name);
        printf("enter roll no.");
        scanf("%d",&std[i].roll_no);
        printf("enter marks");
        scanf("%d",&std[i].marks);
    }
    printf("name\troll no\tmarks\n");
    for (int i=0;i<3;i++)
    {
        printf("%s\t%d\t%d\n",std[i].name,std[i].roll_no,std[i].marks);
    }
    
}