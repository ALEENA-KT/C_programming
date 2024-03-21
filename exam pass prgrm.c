#include <stdio.h>
int main()
{
  int mark1,mark2,mark3;
  printf("enter you mark1\n");
  scanf("%d",&mark1);
  printf("enter you mark2\n");
  scanf("%d",&mark2);
  printf("enter you mark3\n");
  scanf("%d",&mark3);
  float total=(mark1+mark2+mark3)/3;
  
  if(total>=40){
 
  
      if(mark1<33||mark2<33||mark3<33){
       printf("your not passed because one subject fail below 33");
      }
      else{
       printf("congrats your passed");
      }
  }
  else{
    printf("sorry not passed");
  }
  return 0;
}