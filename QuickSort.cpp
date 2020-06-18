#include<iostream>
using namespace std;
int partition(int a[],int beg,int end)
{
	int left,right,temp,loc;
	bool done;
	left = loc = beg;
	right = end;
	done = false;
	while(!done)
	{
		while((a[loc] < a[right]) && (loc != right))
			right--;
		if(loc == right)
		{
			done = true;
		}
		else
		{
			temp = a[loc];
			a[loc] = a[right];
			a[right] = temp;
			loc = right;
		}
		if(!done)
		{
			while((a[loc] > a[left]) && (loc != left) )
				left++;
			if(loc == left)
			{
				done = true;
			}
			else
			{
				temp = a[loc];
				a[loc] = a[left];
				a[left] = temp;
				loc = left;
			}
		}
		
	}
	return loc;
}
void quicksort(int a[],int lb,int ub)
{
	if(lb < ub)
	{
		int loc = partition(a,lb,ub);
		quicksort(a,lb,loc-1);
		quicksort(a,loc+1,ub);
	}
}

int main()
{
	int i,n,a[10];
	cout<<"Enter the Size of array = ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	quicksort(a,0,n-1);
	cout<<"OuickSort = ";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
