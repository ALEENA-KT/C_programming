#include <stdio.h>
int main()
{
  int n = 3,isprime=1;
  for(int i = 2; i<n ; i++){
    if(n%i==0){
      isprime=0;
      break;
    }
  
  }
  if(isprime){
    printf("number is prime\n");
  }
  else{
        printf("number is not prime\n");

  }
  
  return 0;
}