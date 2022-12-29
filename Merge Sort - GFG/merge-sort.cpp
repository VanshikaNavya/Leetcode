//{ Driver Code Starts
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
    void merge(int arr[], int l, int m, int r)
    {
         m=l+(r-l)/2;
         int length1=m-l+1;
         int length2=r-m;
         
         int *first=new int[length1];
         int *second=new int[length2];
         
         int k=l;
         for(int i=0; i<length1; i++){
            first[i]=arr[k++]; 
         }
         k=m+1;
         for(int i=0; i<length2; i++){
            second[i]=arr[k++]; 
         }
         
         int idx1=0;
         int idx2=0;
         k=l;
         while(idx1<length1 && idx2<length2){
             if(first[idx1]<second[idx2]){
                 arr[k++]=first[idx1++];
             }
             else{
                 arr[k++]=second[idx2++];
             }
         }
         while(idx1<length1){
             arr[k++]=first[idx1++];
         }
         while(idx2<length2){
             arr[k++]=second[idx2++];
         }
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        if(l>=r){
            return;
        }
        int mid=l+(r-l)/2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);
        merge(arr, l, mid, r);
    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends