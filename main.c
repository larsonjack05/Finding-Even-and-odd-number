/*
Program to check if number is even or odd
Author: Dhruv Patil
College: Acropolis Indore (IT) Branch
*/

#include <stdio.h>

int main(void) {

  int a; 

  scanf("%d",&a);
  
  if(a%2==0){
    printf("Even");
  } else {
    printf("Odd");
  }
  return 0;
}
