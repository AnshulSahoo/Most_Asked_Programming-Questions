//WAP in C to find the maximum and minimum elements of an array

#include<iostream>
using namespace std;
#define MAX_SIZE 30
int main()
{
	int arr[MAX_SIZE];
	int n,i,max,min;
	
	cout<<"Enter the SIZE of array :";
	cin>>n;

	cout<<"Enter the elemets of array :"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
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
	
	cout<<"The maximum of all the elements of array: "<<max<<endl;
	cout<<"The maximum of all the elements of array: "<<min<<endl;
	return 0;
}