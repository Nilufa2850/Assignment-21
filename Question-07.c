// 7.Write a program to calculate the difference between two time periods.

#include<stdio.h>

struct time 
{
    int sec ;
    int min ;
    int hrs ;
} ;
struct time diff ( struct time start , struct time stop , struct time *diff ) ;

int main ()
{
    struct time s , e , difference ;

    printf("\nEnter start time : ") ;
    scanf("%d",&s.hrs) ;
    scanf("%d",&s.min) ;
    scanf("%d", &s.sec) ;
    
    printf("\nEnter stop time : ") ;
    scanf("%d",&e.hrs) ;
    scanf("%d",&e.min) ;
    scanf("%d", &e.sec) ;

    diff (s,e,&difference) ;

    printf("time diff : %d:%d:%d ",s.hrs ,s.min,s.sec) ;
    printf("- %d:%d:%d ",e.hrs,e.min,e.sec) ;
    printf(" = %d:%d:%d",difference.hrs,difference.min,difference.sec) ;


}

struct time diff ( struct time start , struct time stop , struct time *diff )
{
    
    if ( start.sec < stop.sec)
    {
        start.min-- ;
        start.sec+=60 ;
    }
    diff -> sec = start.sec - stop.sec ;

    if ( start.min < stop.min)
    {
        start.hrs-- ;
        start.min+=60 ;
    }
    diff -> min = start.min - stop.min ;
    diff -> hrs = start.hrs - stop.hrs ;

     

}
