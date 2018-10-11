#include <iostream>
using namespace std;
int findMax(int a[],int s)
{
	return a[s-1];
}
int findMin(int a[])
{
	return a[0];
}
float findMean(int a[],int s)
{
	int sum=0;
	for(int i=0;i<s;i++)
	sum+=a[i];
	return (sum/s);
}
int findMedian(int a[],int s)
{
	if(s%2==0)
	return ((a[s/2-1]+a[s/2])/2);
	else
	return a[(s-1)/2];
}
int main()
{
	int size=0;
	cout<<"Enter the size of the array."<<endl;
	cin>>size;
	int arr[size];
	cout<<"Enter the elements of the array."<<endl;
	for(int i=0;i<size;i++)
	cin>>arr[i];
	int temp=0;
	for (int i=0;i<size-1;i++)    
        for (int j=0;j<size-i-1;j++)  
		if(arr[j]>arr[j+1]) 
		{
			arr[j]=arr[j]+arr[j+1];
			arr[j+1]=arr[j]-arr[j+1];
			arr[j]=arr[j]-arr[j+1];
		} 
	int max=findMax(arr,size);
	int min=findMin(arr);
	float mean=findMean(arr,size);
	int median=findMedian(arr,size);
	cout<<"The maximum element in the array is "<<max<<endl;
	cout<<"The minimum elememt in the array is "<<min<<endl;
	cout<<"The mean element in the array is "<<mean<<endl;
	cout<<"The median element in the array is "<<median<<endl;
	return 0;
}
	
