/*Write a program to enter the marks of 5 students in Chemistry, Mathematics and
Physics (each out of 100) using a structure named Marks having elements roll no.,
name, chem_marks, maths_marks and phy_marks and then display the percentage
of each student.*/

#include<stdio.h>

struct student
{
    int RollNo ; 
    char name [20] ;
    float chem_marks ;
    float math_marks ;
    float phy_marks ;
} ;

int main ()
{
    struct student x[2] ;
    int i ;
    int sum[10] ;
    float avg[10] ;

    for(i=0 ; i<2 ; i++)
    {
        printf("Enter %d student's Roll no , name , chem , math ,phy marks : ",i+1) ;
        scanf("%d", &x[i].RollNo) ;
        fflush (stdin) ;
        gets(x[i].name) ;
        scanf("%f",&x[i].chem_marks) ;
        scanf("%f",&x[i].math_marks) ;
        scanf("%f",&x[i].phy_marks) ;
    }

    for(i=0 ; i<2 ; i++)
    {
        
        sum[i] = x[i].chem_marks + x[i].math_marks + x[i].phy_marks ;
        avg[i] = sum[i] / 300.00 * 100.00 ;
    }

    for(i=0 ; i<2 ; i++)
        printf("\n%d %s - percentage is %.1f", x[i].RollNo , x[i].name , avg[i]) ;
}
