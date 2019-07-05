#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int sum,num1,num2;
  srand(time(NULL));
  num1=rand()%6+1;
  num2=rand()%6+1;
  sum=num1+num2;
  printf("Rolling the dice ..\nDie 1: %d\nDie 2: %d\nTotal value: %d\n",num1,num2,sum);
  return 0;
}
  
