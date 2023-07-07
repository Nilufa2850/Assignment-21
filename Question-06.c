/*6. Write a function to sort employees according to their names [refer structure from
question 1]*/

#include<stdio.h>
#include<string.h>

struct emp 
{
    int id ;
    char name [20] ;
    float salary ;  
} ;
void sort (struct emp[]  , int ) ;



int main ()
{
    struct emp x[5] ;
    int i ;

    for(i=0 ; i<5 ; i++)
    {
        printf("Enter id , name & salary : \n") ;
        scanf("%d",&x[i].id) ;
        fflush (stdin) ;
        fgets(x[i].name,20,stdin ) ;
        x[i].name [strlen(x[i].name)-1] = '\0' ;
        scanf("%f",&x[i].salary) ;
    }

    sort (x,5) ;

    for(i=0 ; i<5 ; i++)
        printf("\n%d %s %.1f" ,x[i].id , x[i].name , x[i].salary) ;
}



void sort (struct emp y[] , int size)
{
    int i,j ;
    struct emp temp ;
    for(i=0 ; i<size-1 ; i++)
        for(j=i+1 ; j<size ; j++)
            if(strcmp(y[i].name , y[j].name) > 0)
            {
                temp = y[i] ;
                y[i] = y[j] ;
                y[j] = temp ;
            }
}
