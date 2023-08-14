#include<stdio.h>
leap(){
	int f,s;
printf("Enter frist year:");
scanf("%d",&f);
printf("Enter second year:");
scanf("%d",&s);
int i;
for(i=f;i<=s;i++){
if(i%4==0){
printf("%d\n",i);
}
}
}
main(){
leap();
}
