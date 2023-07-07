// 8. Write a program to store information of 10 students and display them using structure.

#include<stdio.h>

struct student
{
    int RollNo ;
    char name [20] ;
    float mark ;
} ;

int main ()
{
    struct student x [10] ;
    int i ;

    for(i=0 ; i<10 ; i++)
    {
        printf("\nEnter Roll no , name  & marks : ");

        scanf("%d",& x[i].RollNo) ;
        fflush (stdin) ;
        gets(x[i].name ) ;
        scanf("%f",&x[i].mark) ;

    }

    printf("\nOUTPUT : ") ;

    for(i=0 ; i<10 ; i++)
        printf("\n%d %s %.2f" ,x[i].RollNo , x[i].name , x[i].mark) ;
        return 0 ;
}
