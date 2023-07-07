/*2. Write a function to take input employee data from the user. [ Refer structure from
question 1 ] */

#include<stdio.h>
#include<string.h>

struct employee input () ;

struct employee 
{
    int id ;
    char name [20] ;
    float salary ;

} ;


int main ()
{
    struct employee x ;
    x = input () ;
    
    return 0 ;

}


struct employee input ()
{
    struct employee z ;
    printf("Enter id, name & salary of a employee : \n") ;

    scanf("%d", &z.id) ;
    fflush (stdin) ;
    fgets(z.name , 20 , stdin) ;
    z.name[strlen(z.name)-1] = '\0' ;
    scanf("%f",&z.salary) ;

    return z ;

}

