#include<stdio.h>
int main()
{
printf("please enter the size of array to be used: \n");
int n,i;
scanf("%d",&n);

int a[n];
for(i=0;i<=n-1;i++)
{printf("enter the no.:\n");
 scanf("%d",&a[i]);
}

int key;
printf("enter the no. to be searched in the array.\n");
scanf("%d",&key);

int hi=n,mid,lo=0;
while( lo <= hi ) { mid=(lo+hi)/2;

	if( a[mid] < key ) { lo = mid; }
	else if( a[mid] > key ) { hi = mid; }
	else if( a[mid] == key ) { printf(" the specified no. is at %dth position \n",mid ); break;}
	else{ printf("specified key is not present in the array."); }
}

return 0;
}
