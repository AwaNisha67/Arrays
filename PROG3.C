//Enter an array from the user and copy the array into another array
#include<stdio.h>
#include<conio.h>
void main(){
int arr[20],brr[20],size,i;
clrscr();
printf("Enter the size of the array: ");
scanf("%d",&size);

for(i=0;i<size;i++){
 printf("Emter the %dth element: ",i);
 scanf("%d",&arr[i]);
 }
for(i=0;i<size;i++){
 arr[i]=brr[i];
 }
printf("Copied element");
for(i=0;i<size;i++){
 printf("%d ",brr[i]);
 }
getch();
}