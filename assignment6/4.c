//Verify the addresses of adjacent elements stored in an array of char, int, float.
#include<stdio.h>

int main(){
    int arrint[3];
    float arrfloat[3];
    char arrchar[3];
    printf("the corresponding address of int is :");
    for (int i =0;i<3;i++)
    {
        printf("%u\t",&arrint[i]);//difference of sizeof int
    }
    printf("\nthe corresponding address of float is :");
    for (int i =0;i<3;i++)
    {
        printf("%u\t",&arrfloat[i]);//difference of size of float
    }
    printf("\nthe corresponding address of char is :");
    for (int i =0;i<3;i++)
    {
        printf("%u\t",&arrchar[i]);//difference of size of char
    }
    return 0;
}