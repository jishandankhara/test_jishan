#include<stdio.h>
void main(){
int a,b,c;
printf("Enter frist number:");
scanf("%d",&a);
printf("Enter second number:");
scanf("%d",&b);
printf("Enter third number:");
scanf("%d",&c);
if(a<b){
if(a<c){
printf("a is min.....");
}
}else if(b<c){
printf("b is min.....");
}else{
printf("c is min....");
}
}
