#include<stdio.h>
int main(){
int arr[100],i,n;

printf("enter the value of n:");
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    
}
int max=arr[0];
for(i=1;i<n;i++){
if(max<arr[i]){
    max=arr[i];
}
} 
printf("max numbers is :%d",max);
return 0;
}
