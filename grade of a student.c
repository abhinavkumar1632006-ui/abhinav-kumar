#include <stdio.h>

int main()
{
   printf("Enter the marks science ");
   int sc;
   scanf("%d",&sc);
   if(sc==100)
   
   printf("your garde= A+");
   
   else if(sc<100 && sc>=90)
   printf("your grade= A\n");
   else if(sc<90 && sc>=75)
   printf("your grade= B\n");
   else if(sc<75 && sc>=65)
   printf("your grade= C\n");
   else
   printf("your grade=D \n");
   

    return 0;
}
