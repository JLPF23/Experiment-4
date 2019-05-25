#include <iostream>
using namespace std;

int main()
{
	int size, arr[100], i, j, temp;

	
	
	cout <<"Selection sorting..."<<endl;
	cout <<"Enter the array size:"<<endl;
	cin >> size;
	cout << "Enter array elements: ";
	for(i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	cout << "sorting array using selection sort"<<endl;
	for(i=0; i <size; i++)
	{
		for(j=1+1; j < size; j++)
		{
			if(arr[i]> arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	cout << "After using the selection sort"<<endl;
	cout << "Sorted data:";
	for(i = 0; i < size; i++)
	{
		cout << arr[i]<< "  ";
	}
return 0;
}
