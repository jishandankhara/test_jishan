#include<stdio.h>
void main(){
int j,i;
printf("Enter size of array:");
scanf("%d",&j);
i=j;
int a[j][i];
int r,c,cube;
printf("Enter array Elements:\n");
for(r=0;r<j;r++){
    for(c=0;c<i;c++){
    printf("a[%d][%d]=",r,c);
    scanf("%d",&a[r][c]);
	}
}
for(r=0;r<j;r++){
    for(c=0;c<i;c++){
    cube=a[r][c]*a[r][c]*a[r][c];
    printf("\ncube of %d is:%d\n",a[r][c],cube);}}
}
