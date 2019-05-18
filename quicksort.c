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

// utility function to swap to numbers with their respective pointers
void swap ( int *t1, int *t2)
{
	int temp = *t1;
	*t1 = *t2;
	*t2 = temp;
}

// sub-function of quicksort, by fixing one number(pivot),
// and placing numbers smaller than pivot in left side of array, 
// and placing pivot to its correct position
int partition(int A[], int left, int right)
{
	int i,pivot = A[right],j;
	j = left;
	for(i= left; i < right;i++)
	{	
		if( pivot > A[i] )
		{
			swap(&A[j],&A[i]);
			j++;
		}
	}
	swap(&A[j],&A[right]);
	return j;
}

// main function for quick sorting, which is being called recursively again and again 
void quicksort(int A[], int left, int right)
{
	if( left  < right )
	{
		int partin = partition ( A,left,right);
		quicksort(A,left,partin - 1);
		quicksort(A, partin + 1, right);
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

	// quicksort function is being called and arrayprinter utility function
	// for printing the array 
	quicksort(A,0,n-1);
	arrayprinter(A,n);
}


