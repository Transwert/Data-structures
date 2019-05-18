#include<stdio.h>
int main()
{
	
	void swap(int *a, int *b)
	{
		int c;
		c=*a; *a=*b; *b=c;
	}

	printf("please enter the size of array to be used: \n");
	int n,i,j,ex;
	scanf("%d",&n);

	int a[n];
	for(i=0;i<=n-1;i++)
	{printf("enter the no.:\n");
	scanf("%d",&a[i]);
	}

	for(i=0;i<n;i++)
	{ 
			for(j=0;j<n;j++)
			{ if(a[j] > a[j+1])  
				{ 	/*swap(&a[j],&a[j+1]);*/ 
					ex =a[j]; a[j]=a[j+1]; a[j+1]=ex;
					for(i=0;i<n;i++)
						{
					 		printf("%d ",a[i]);
						}
						printf("\n");
				}	
			}
	}
			
			

	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}

	return 0;
}
