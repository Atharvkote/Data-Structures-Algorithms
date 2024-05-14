#include<stdio.h>
int main ()
{
    int i;
    for (i=1;i<=100;i++)
    {
      if (i%3==0&&i%5==0)
   {
           
            printf(" fizz bazz");
         
       } 
       else if(i%3==0)
        {
            printf(" fizz"
                   "z");
            }
       else if(i%5==0)
       {
           printf(" bazz");
           }
           else 
           {
               printf(" %d",i);
               }
           
      
                
    }
                 return 0 ;
}
