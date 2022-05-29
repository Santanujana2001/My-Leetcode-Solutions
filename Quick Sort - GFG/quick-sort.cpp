// { Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

 // } Driver Code Ends
class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int a[], int s, int e)
    {
        if(s<e){
		int p=partition(a,s,e);
		quickSort(a,s,p-1);
		quickSort(a,p+1,e);
	}
    }
    
    public:
    int partition (int a[], int s, int e)
    {
       int pivot = a[e];
int i=s-1;
for(int j=s;j<e;j++){
	if(a[j]<pivot){
		i++;
		swap(a[i],a[j]);
	}
}
swap(a[i+1],a[e]);
return i+1;
    }
};


// { Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      Solution ob;
    ob.quickSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}  // } Driver Code Ends