#include<stdio.h>
#include<stdlib.h>

// utility function to print elements of array of inputted numbers
void arrayprinter ( int A[], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",A[i]);
	}
	printf("\n");
}

// subfunction, merge , used to sort from two arrays and storing into a single array
void merge ( int A[], int left, int mid, int right )
{
	int i,j=0,k=0;
	// two subarrays are initialised, with lenght given by ( last pointer - first pointer +1)
	int L[ mid - left + 1], R[right - (mid + 1) + 1];

	for(i =  0 ;i < ( mid - left +1 );i++)
	{
		L[i] = A[left + i];
	}

	for(i =  0 ;i < ( right - mid );i++)
	{
		R[i] = A[i + mid +1 ];
	}

	i = left;

	// main procedure to take numbers from both subarrays and adding them after comparing,
	// into main array.
	while ( j < mid -left + 1 && k < right - mid)
	{
		if( L[j] <= R[k] )
		{
			A[ i ] = L[j];
			j++;
		}
		else
		{
			A[ i ] = R[k];
			k++;
		}
		i++;
	}

	// in case the length of two subarrays are not equal, then we 
	// add remainng unadded numbers in the main array
	while( j < mid - left + 1)
	{
		A[i] = L[j];
		i++;
		j++;
	}
	while( k < right - mid)
	{
		A[i] = R[k];
		i++;
		k++;
	}
}

// main merge sorting function which is being called recursively 
void mergesort ( int A[], int left, int right)
{
	int mid;
	if(left < right)
	{
		mid = ( left + right ) / 2;
		mergesort( A, left, mid);
		mergesort(A, mid +1, right);
		merge(A,left,mid,right);
	}
}

// main body
int main()
{
	int j,n;

	scanf("%d",&n);
	int A[n],temp;

	// loop for taking input of numbers from user
	for(j=0;j<n;j++)
	{
		scanf("%d",&temp);
		A[j] = temp;
	}

	// main function for sorting and utility function to print array are called here
	mergesort(A,0,n-1);
	arrayprinter(A,n);
}


