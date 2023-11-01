//print the number in array if even ;
#include<stdio.h>
#include<conio.h>
int even();
void main(){
int arr[20],size,i,value;
clrscr();
printf("How many elements: ");
scanf("%d",&size);

for(i=0;i<size;i++){
 printf("Enter the %dth element: ",i);
 scanf("%d",&arr[i]);
 }
even(arr,size);
getch();

}
int even(int arr[],int size){
int i;
 for(i=0;i<size;i++){
 if(arr[i]%2 == 0 && arr[i]>0){
   printf("\nElement on %dth index ie. %d is even and positive.",i,arr[i]);
   }
   else{
   printf("\nElemnt on %dth not even",i);
   }
 }
 return;
}