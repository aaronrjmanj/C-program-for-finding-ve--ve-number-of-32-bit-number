//this is program to find the fibonacci series
//num = number in the sequence 1,1,2,3,5,8,13,21,34,55

#include <stdio.h>
#include<math.h>

int fib(int num)
{
   if((num==0)||(num==1))
     return num;
  else
    return (fib(num-1)+fib(num-2));
}  

int main() {
    int ans,num;
  printf("Hello, world!");
  num = 9; 
  ans = fib(num);
  printf("\n The %0dth number in the sequence and the value is %0d",num,ans);
  return 0;  
}

