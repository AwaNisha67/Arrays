//Square all the values of array
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
int arr[20],size,i,sqr;
clrscr();
printf("Enter how many elements: ");
scanf("%d",&size);

for(i=0;i<size;i++){
 printf("Enter %dth element: ",i);
 scanf("%d",&arr[i]);
 }

for(i=0;i<size;i++){
  sqr=pow(arr[i],2);
  printf("\nSqare of %d value is: %d",arr[i],sqr);
}
getch();
}