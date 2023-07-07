// 1. Define a structure Employee with member variables id, name, salary.

#include<stdio.h>
#include<string.h>

struct employee
{
    int id ;
    char name [20] ;
    float salary ;

} ;

int main ()
{
    struct employee a ;
    printf("Enter i'd , name and salary of a employee : ") ;

    scanf("%d",& a.id) ;
    fflush (stdin) ;
    fgets(a.name , 20 , stdin ) ;
    a.name [strlen(a.name)-1] = '\0' ;
    scanf("%f",&a.salary ) ;

    printf("%d , %s , %.2f",a.id,a.name,a.salary) ;
    return 0 ;

}
