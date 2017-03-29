#include <stdio.h>
#include<stdlib.h>

int main(){
   int count;
   int *arr;
   int *arr2;
   int i = 0;
   int num = 1;
	 int sum=0;

   scanf("%d", &count);
   arr2 = (int *)malloc(sizeof(int)*count);
   arr = (int *)malloc(sizeof(int)*count);

   while (i < count){
      if (num % 2 == 1){
      	arr[i] = num;
	i++;
      }    
      num++;
   }
   
   while(i<count){
   	arr2[i]=arr[i]*arr[count-1];
	i++;
	count--;
   }

	for(i=0; i<count; i++){
	 	sum=sum+arr2[i];
	 }

printf("%d", sum);
   
   

   return 0;
}
