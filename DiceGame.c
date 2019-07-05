#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int sum,num1,num2;
  char name[256];
  printf("What is your name?\n");
  scanf("%s",name);
  printf("Hello %s\n",name);
  srand(time(NULL));
  num1=rand()%6+1;
  num2=rand()%6+1;
  sum=num1+num2;
  printf("Rolling the dice ..\nDie 1: %d\nDie 2: %d\nTotal value: %d\n",num1,num2,sum);
  if(sum>=7)
    printf("you won\n",name);
  else
    printf("you false\n",name);
  return 0;
}
  
