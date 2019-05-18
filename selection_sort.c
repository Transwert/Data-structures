#include<stdio.h>

int main()
{
	
	void swap(int *a, int *b){
		int c;
		c=*a; *a=*b; *b=c;
	}

	printf("please enter the size of array to be used: \n");
	int n,i,j,ex,m;
	scanf("%d",&n);

	int a[n];
	for(i=0;i<=n-1;i++)
	{printf("enter the no.:\n");
	scanf("%d",&a[i]);
	}
/* selection sort divide the unsorted array in two arrays, ( sorted and unsorted one),and insert elements from
unsorted array to sorted array. */

	for(i=0;i<n;i++)
	{
		m = a[i];
		for(j=i;j<n;j++)
		{ 
			if( m > a[j])
			{ 
				ex= a[i]; a[i]=a[j]; a[j]=ex;}  /* inner loop sort the first array,by comparing a[i]
												with remaining elements from 0 - (i-1), which already being
												sorted */
		}
	}ex=0;
			
			

	for(i=0;i<n;i++)
	{
 		printf("%d ",a[i]);
	}

	return 0;
}