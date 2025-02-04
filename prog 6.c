#include<stdio.h>
void main(){
    float a, b, c, dis;
    printf("Enter a,b,c");
    scanf("%f%f%f",&a,&b,&c);
    dis = b*b-4*a*c;
    printf("discrimenent is %.2f",dis);
}
