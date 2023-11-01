//Enter an array from the user and display all the value
#include<stdio.h>
#include<conio.h>
void display(int[],int );
void main(){
int arr[20],size,i;
int brr[20];
clrscr();
printf("How many elemnts: ");
scanf("%d",&size);

for(i=0;i<size;i++){
 printf("Enter %dth element: ",i+1);
 scanf("%d",&arr[i]);
 }
arr[i]=brr[i];
display(brr,size);
getch();
}
void display(int arr[],int size){
int i;
printf("Entered array is\n");
for(i=size-1;i>=0;i--){
 printf("%d ",arr[i]);
 }
}