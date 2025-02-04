#include<stdio.h>
void main(){
    float l,b,s,perimetersq,perimeterrect,area;
    printf("Enter the length and bredth of the rectangle: ");
    scanf("%f %f",&l,&b);
    area = l*b;
    perimeterrect = 2*(l+b);
    printf("Area of the rectangle is: %f\nPerimeter of the rectangle is: %f\n",area,perimeterrect);
    
    printf("Enter the side of the square: ");
    scanf("%f",&s);
    area = s*s;
    perimetersq = 4*s;
    printf("Area of the square is: %f\nPerimeter of the square is: %f\n",area,perimetersq);
   
}
