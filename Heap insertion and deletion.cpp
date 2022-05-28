#include<bits/stdc++.h>
using namespace std;

class Heap{
	public:
	int arr[100] ;
	int size ;

	Heap()
	{
		arr[0] = -1 ;
		size = 0 ;
	}

	void insert(int value)
	{
		size = size + 1 ;
		int index = size ;

		arr[index] = value ;

		while(index > 1)
		{
			int parent = index/2 ;

			if(arr[parent] < arr[index])
			{
				swap(arr[parent] , arr[index]) ;
				index = parent ;
			}

			else 
				return ;
		}
	}

	void deleteHeap()
	{
		if(size == 0)
		{
			cout<<"Heap is empty :(( " ;
			return ;
		}

		arr[1] = arr[size] ;
		size = size - 1 ;

		int i = 1 ;

		while(i < size)
		{
			int left_index = 2*i ;
			int right_index = 2*i + 1 ;

			if(left_index < size and arr[i] < arr[left_index])
			{
				swap(arr[i] , arr[left_index]) ;
				i = left_index ;
			}

			else if(right_index < size and arr[i] < arr[right_index])
			{
				swap(arr[i] , arr[right_index]) ;
				i = right_index ;
			}


			return ;
		} 
	}

	void print()
	{
		for(int i=1 ; i<=size ; i++)
		{
			cout<<arr[i]<<" " ;
		}
		cout<<endl;

	}
} ;

int main()
{
	Heap h ;
	h.insert(50) ;
	h.insert(55) ;
	h.insert(53) ;
	h.insert(52) ;
	h.insert(54) ;
    h.print() ;

	h.deleteHeap() ;

	h.print() ;

	return 0;
}





