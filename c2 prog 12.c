#include<stdio.h>
void main(){
    float ag1,ag2,ag3;
    printf("Enter the 3 angles of triangle : ");
    scanf("%f%f%f",&ag1, &ag2  ,&ag3);
    if(ag1+ag2+ag3==180)
    printf("the triangle is valid\n");
    else 
    printf("the triangle is invalid\n");
    
   
}
