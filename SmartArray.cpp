#include"SmartArray.h"
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;




void SmartArray::maxValue()
{
	int max = arr[0];
	for(int i = 1; i < size; i ++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	cout<<"Max value: "<<max<<endl;
}

void SmartArray::minValue()
{
	int min = arr[0];
	for(int i = 1; i < size; i ++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	cout<<"Min value: "<<min<<endl;
}

void SmartArray::ifSorted()
{
	int counter = 1;
	for(int i = 1; i < size; i ++)
	{
		if(arr[i] > arr[i - 1])
		{
			counter ++;
		}
	}
	if(counter == size)
	{
		cout<<"SORTED"<<endl;
	}
	else cout<<"NOT SORTED"<<endl;
}

void SmartArray::sortArray()
{
	for(int i = 0; i < size; i ++)
	{
		for(int j = 0; j < size; j ++)
		{
			if(arr[j] > arr[j + 1])
			{
				swap(arr[j],arr[j + 1]);
			}
		}
	}
}

void SmartArray::shuffleArray()
{
	for(int i = 0; i < size; i ++)
	{
		for(int j = 0; j < size; j ++)
		{
			int d = rand()%2;
			if(d == 1)
			{
				swap(arr[j],arr[j+1]);
			}
		}
	}
}

void SmartArray::showValue()
{
	int position;
	cout<<"Enter position: ";
	cin>>position;
	cout<<"Value: "<<arr[position]<<endl;
}

void SmartArray::showArray()
{
	for(int i = 0; i < size; i ++)
	{
		cout<<arr[i]<<endl;
	}
}
