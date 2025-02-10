#include<stdio.h>
void main(){


  int length, breadth, side, area_rect, perimeter_rect, area_square, perimeter_square;


  printf("Enter the length and breadth of the rectangle: ");
  scanf("%d%d", &length, &breadth);
  area_rect = length * breadth;
  perimeter_rect = 2 * (length + breadth);


  printf("Area of the rectangle is %d\n", area_rect);
  printf("Perimeter of the rectangle is %d\n", perimeter_rect);


  printf("Enter the side of the square: ");
  scanf("%d", &side);

  area_square = side * side;
  perimeter_square = 4 * side;


  printf("Area of the square is %d\n", area_square);
  printf("Perimeter of the square is %d\n", perimeter_square);


}
