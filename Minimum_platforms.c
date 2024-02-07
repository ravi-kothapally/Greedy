#include <stdio.h>
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  // A function to implement bubble sort 
void bubbleSort(int arr[], int n,int z[]) 
{ 
   int i, j; 
   for (i = 0; i < n-1; i++)       
  
       // Last i elements are already in place    
       for (j = 0; j < n-i-1; j++)  
           if (arr[j] > arr[j+1]) 
              {
              		swap(&arr[j], &arr[j+1]);
              		swap(&z[j],&z[j+1]); 
              }
}  
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i;
		scanf("%d",&n);
		 int c[n+n],z[n+n];
		for (int i = 0; i < n+n; ++i)
		{
			scanf("%d",&c[i]);
			z[i]=-1;
			if(i<n)
				z[i]=1;
		}
		bubbleSort(c,n+n,z);
		int max=0,v=0;
		for (int i = 0; i < n+n; ++i)
		{
			/* code */
			v+=z[i];
			if(v>max)max=v;
		}
		printf("%d\n",max,);
	}
	return 0;
}