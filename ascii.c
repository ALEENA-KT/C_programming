#include <stdio.h>
int main()
{
  char character;
  printf("enter your character");
  scanf("%c",&character);
  if(character>=97&&character<=122){
    printf("lower");
  }
  else{
    printf("upper");
  }
  return 0;
}