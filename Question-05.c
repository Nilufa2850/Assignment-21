/*5.Write a function to sort employees according to their salaries [ refer structure from
question 1]*/

#include<stdio.h>
#include<string.h>

struct emp 
{
    int id ;
    char name [20] ;
    float salary ;
} ;

struct emp input ();
void sort (struct emp B[] , int size) ;

int main ()
{
    struct emp A[10] ;
    int i ;

    for ( i=0 ; i<10 ; i++)
        A[i] = input () ;

    sort (A,10) ;

    for (i=0 ; i<10 ; i++)
        printf("\n%d %s %.2f",A[i].id , A[i].name , A[i].salary ) ;

    
}

struct emp input ()
{
    struct emp x ;
    printf("\nEnter id , name & salary of employee : ");
    scanf ("%d",&x.id) ;
    fflush (stdin) ;
    fgets (x.name , 20 , stdin) ;
    x.name[strlen(x.name)-1] = '\0' ;
    scanf("%f",&x.salary) ;

    return x ;

}

void sort (struct emp B[] , int size)
{
    int i , j ;
    struct emp temp ;

    for(i=0 ; i<size-1 ; i++)
        for(j=i+1 ; j<size ; j++)
            if (B[i].salary > B[j].salary)
            {
                temp = B[i] ;
                B[i] = B[j] ;
                B[j] = temp ;
                
            }
}
