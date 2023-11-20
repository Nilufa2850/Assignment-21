/*10. Write a program to enter the marks of 5 students in Chemistry, Mathematics and
Physics (each out of 100) using a structure named Marks having elements roll no.,
name, chem_marks, maths_marks and phy_marks and then display the percentage
of each student.*/

#include<stdio.h>
#include<string.h>

struct Student 
{
    int roll_no ;
    char name [20] ;
    float chem_marks ;
    float math_marks ;
    float phy_marks ;
    float percentage ;
    
} ;

int main ()
{
    int n ;
    printf("Enter students number : ") ;
    scanf("%d" , &n) ;

    struct Student x[n] ;

    int i ;
    
    for (i=0 ; i<n ; i++)
    {
        printf("Enter roll no , name and marks for %d students\n" , i+1) ;
        scanf("%d" , &x[i].roll_no) ;
        fflush(stdin) ;
        fgets(x[i].name , 20 , stdin) ;
        x[i].name[strlen(x[i].name) - 1] = '\0' ;
        scanf("%f%f%f" , &x[i].chem_marks , &x[i].math_marks , &x[i].phy_marks) ;
    }


    for (i=0 ; i<n ; i++)
    {
        x[i].percentage =( ( x[i].chem_marks + x[i].math_marks + x[i].phy_marks ) /300.0 )*100 ;
    }


    printf("\n/*********************************/\n") ;

    for (i=0 ; i<n ; i++)
    {
        printf("Roll no.    : %d\n" , x[i].roll_no) ;
        printf("Name        : %s\n" , x[i].name) ;
        printf("Chem        : %.2f\n" , x[i].chem_marks) ;
        printf("Math        : %.2f\n" , x[i].math_marks) ;
        printf("Phy         : %.2f\n" , x[i].phy_marks) ;
        printf("Percentage  : %.2f\n" , x[i].percentage) ;

        printf("\n/****************************/\n\n") ;
    }



}
