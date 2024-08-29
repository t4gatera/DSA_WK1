#include<stdio.h>

void main(){
//array declaration
int arr[6]={5,3,8,9,2,0};
//declare variable to store the maximum value
int max=0;

//Use the loop to determine the maximum value
for (int i=0; i<6; i++){
if(arr[i] > max)
max = arr[i];
}
//Printout the maximum
printf("The maximum value is %d\n",max);
}
