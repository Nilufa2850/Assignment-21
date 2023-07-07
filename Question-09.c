// 9.Write a program to store information of n students and display them using structure.

#include<stdio.h>

struct student
{
    int RollNo ;
    char name [20] ;
    float mark ;
} ;

int main ()
{
    struct student x [20] ;
    int i ,n ;

    printf("Enter a size : ");
    scanf("%d",&n) ;

    for(i=0 ; i<n ; i++)
    {
        printf("\nEnter %d students's Roll no , name  & marks : ",i+1);

        scanf("%d",& x[i].RollNo) ;
        fflush (stdin) ;
        gets(x[i].name ) ;
        scanf("%f",&x[i].mark) ;

    }

    printf("\nOUTPUT : ") ;

    for(i=0 ; i<n ; i++)
        printf("\n%d %s %.2f" ,x[i].RollNo , x[i].name , x[i].mark) ;
        return 0 ;
}
