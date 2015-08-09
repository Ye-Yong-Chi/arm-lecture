#include <stdio.h>

int fibonacci(int number)
{
   int answer;
   if(number == 0 || number== 1)
      answer = 1;
   else      
      answer = fibonacci(n-1)+fibonacci(n-2);
   return(answer);
  printf("The fibonacci sequence at %d is: %d\n",number,answer);
}
