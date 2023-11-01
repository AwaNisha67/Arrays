//Enter an array and copy it and print it in reverse order
#include<stdio.h>
#include<conio.h>
void display(int[],int);//copied array
void reverse(int[],int);//reverse order
void copy(int[],int[],int);
void main(){
int arr[20],brr[20],size,i;
clrscr();
printf("How many numbers: ");
scanf("%d",&size);

for(i=0;i<size;i++){
 printf("Enter the %dth element: ",i+1);
 scanf("%d",&arr[i]);
 }
printf("The Copied array:");
copy(arr,brr,size);
display(brr,size);

printf("Copied array in reverse order: ");
reverse(brr,size);

getch();
}
void copy(int arr[],int brr[],int size){
int i;
for(i=0;i<size-1;i++){
 brr[i]=arr[i];
 }
}
void display(int arr[],int size){
int i;
for(i=0;i<size-1;i++){
printf("%d ",arr[i]);
}
printf("\n");
}
void reverse(int arr[],int size){
int i;
for(i=size;i>=0;i--){
 printf("%d ",arr[i]);
 }
}