#include<stdio.h>
odd(){
int j,s,i;
printf("Enter frist number:");
scanf("%d",&j);
printf("Enter second number:");
scanf("%d",&i);
printf("Odd numbers are:");
for(s=j;s<=i;s++){
if(s%2!=0){
printf("\n%d",s);
}
}
}
void main(){
odd();
}
