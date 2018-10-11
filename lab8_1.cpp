#include <iostream>
using namespace std;
int addElements(int a[],int s)
{
	int sum=0;
	for(int i=0;i<s;i++)
	sum+=a[i];
	return sum;
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
	int sum=addElements(arr,size);
	cout<<"The sum of the elemts of the array is "<<sum<<endl;
	return 0;
}

