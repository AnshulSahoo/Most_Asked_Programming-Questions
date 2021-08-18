//WAP in C to find the maximum and minimum elements of an array

#include<stdio.h>
#define MAX_SIZE 30
int main()
{
	int arr[MAX_SIZE];
	int n,i,max,min;
	
	printf("Enter the SIZE of array :");
	scanf("%d",&n);

	printf("Enter the elemets of array :\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",arr[i]);
	}
	
	max = arr[0];
	min = arr[0];

	//sum of elements  of array
	for(int i=0;i<n;i++)
	{
		if(arr[i]>max)
			max = arr[i];
		if(arr[i]<min)
			min = arr[i];
	}
	
	printf("The maximum of all the elements of array: %d",max);
	printf("The maximum of all the elements of array: %d",min);
	return 0;
}