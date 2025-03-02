#include <stdio.h>
void main(){
  int avg ,sum;
  int i;
  int mark [10];
  for(i>=0; i<10; i++){
    printf("Enter the mark of student %d: ", i+1);
    scanf("%d", &mark[i]);
    sum = sum + mark[i];
    printf("tne total mrk is: %d", sum);
  }
  avg = sum/10;
  printf("The average mark is: %d", avg); 

}
