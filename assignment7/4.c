/*
Implement nested structures. Think about any real world application of nested
structures.
*/
#include<stdio.h>
struct names
{
    char firstname[30];
    
    char lastname[30];
};
struct  addresses
{
    char permanent[30];
    char temporary[30];
};
struct contacts
{
    unsigned long int phoneno;
    char email[50];
};

struct students
{
    int rollno;
    struct  names name;
    struct addresses address;
    struct contacts contact;
    
};

    

int main()
{
    printf("how many students do you have?");
    int num;
    scanf("%d",&num);
    struct students student[num];
    for (int i =0;i<num;i++)
    {
        printf("for student %d :\n",i+1);
        printf("Enter roll no. : ");
        scanf("%d",&student[i].rollno);
        printf("Enter first name : ");
        scanf("%s",student[i].name.firstname);
        printf("Enter last name : ");
        scanf("%s",student[i].name.lastname);
        printf("Enter temporary address : ");
        scanf("%s",student[i].address.temporary);
        printf("Enter permanent address : ");
        scanf("%s",student[i].address.permanent);
        printf("Enter phone no. : ");
        scanf("%llu",&student[i].contact.phoneno);
        printf("Enter email : ");
        scanf("%s",student[i].contact.email);
    }
    printf("-------------------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("Roll No.\tFirst Name\tLast Name\tTemporary Address\tPermanent address\tphone no.\temail\n");
    for(int i=0;i<num;i++)
    {
        printf("----------------------------------------------------------------------------------------------------------------------------------------------\n");
        printf("%d\t\t%s\t\t%s\t\t%s\t\t\t%s\t\t\t%llu\t\t%s\n",student[i].rollno,student[i].name.firstname,student[i].name.lastname,student[i].address.temporary,student[i].address.permanent,student[i].contact.phoneno,student[i].contact.email);
    }
}