//maximum value & minimum value
#include<stdio.h>
#include<conio.h>
void main(){
int arr[20],i, size;
clrscr();
printf("Enter how many elements: ");
scanf("%d",&size);

for(i=0;i<size;i++){
 printf("Enter %dth element: ",i);
 scanf("%d",&arr[i]);
 }
while(i<size){
  if(arr[i]>=arr[i+1]){
   printf("%d",arr[i]);
   i++;
  }
 // printf("%d",arr[i+1]);

 }
 getch();
}