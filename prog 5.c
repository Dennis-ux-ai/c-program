#include<stdio.h>
void main()
{
 float p, r, t, si, ci;
 printf("enter principal value ,rate ,time ");
 scanf("%f%f%f",&p,&r,&t);
 si = p*r*t/100;
 ci = p*(1 + r/100)*t-p;
 printf(" simple interest is %.2f\n",si);
 printf("compound intrest is %.2f\n",ci);
}
