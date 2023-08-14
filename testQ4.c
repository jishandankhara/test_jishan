#include<stdio.h>
void main(){
int a;
printf("Enter array size:");
scanf("%d",&a);
int i,j[a];
printf("Enter array Elements:\n");
for(i=0;i<a;i++){
printf("j[%d]",i);
scanf("%d",&j[i]);
}
int *p;
p=&i;
printf("Odd numbers are:\n");
for(i=0;i<=a;i++){
if(i%2!=0){
printf("%d\n",*p);
}	
}
}
