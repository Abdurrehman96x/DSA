#include <iostream>  
 
using namespace std;  
 
/* Function to merge the subarrays of arr[] */  
void merge(int arr[], int l, int mid, int r)    
{    
    int i, j, k;  
    int n1 = mid - l + 1;    
    int n2 = r - mid;    
 
    int lArr[n1], rArr[n2]; //temporary arrays  
 
    /* copy data to temp arrays */  
    for (int i = 0; i < n1; i++)    
    lArr[i] = arr[l + i];    
    for (int j = 0; j < n2; j++)    
    rArr[j] = arr[mid + 1 + j];    
 
    i = 0; /* initial index of first sub-array */  
    j = 0; /* initial index of second sub-array */   
    k = l;  /* initial index of merged sub-array */  
 
    while (i < n1 && j < n2)    
    {    
        if(lArr[i] <= rArr[j])    
        {    
            arr[k] = lArr[i];    
            i++;    
        }    
        else    
        {    
            arr[k] = rArr[j];    
            j++;    
        }    
        k++;    
    }    
    while (i<n1)    
    {    
        arr[k] = lArr[i];    
        i++;    
        k++;    
    }    
 
    while (j<n2)    
    {    
        arr[k] = rArr[j];    
        j++;    
        k++;    
    }    
}    
 
void mergeSort(int arr[], int l, int r)  
{  
    if (l < r)   
    {  
        int mid = (l + r) / 2;  
        mergeSort(arr, l, mid);  
        mergeSort(arr, mid + 1, r);  
        merge(arr, l, mid, r);  
    }  
}  
 
/* Function to print the array */  
void display(int arr[], int n)  
{  
    for (int i = 0; i < n; i++)  
        cout<<arr[i]<<" ";  
}  
 
int main()  
{  
    int arr[] = { 10, 28, 24, 6, 34, 18, 38, 44 };  
    int n = sizeof(arr) / sizeof(arr[0]);  
    cout<<"Before sorting array elements are - \n";  
    display(arr, n);  
    mergeSort(arr, 0, n - 1);  
    cout<<"\nAfter sorting array elements are - \n";  
   display(arr, n);  
    return 0;  
}  