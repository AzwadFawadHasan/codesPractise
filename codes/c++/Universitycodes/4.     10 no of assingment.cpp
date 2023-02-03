#include <stdio.h>
#include <limits.h>

void findInorderSuccessor(int arr[], int n)
{
    // traverse the array from the beginning
    for (int i = 0; i < n; i++)
    {
        int successor = -1;
        int diff = INT_MAX;
 
        // check every element on right of current element for successor
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i] && (arr[j] - arr[i] < diff))
            {
                successor = arr[j];
                diff = arr[j] - arr[i];
            }
        }
        arr[i] = successor;
    }
 
    // print the resultant array
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
 
int main(void)
{
    int arr[] = { 190, 100, 91, 31, 33, 60, 82, 95, 93, 2};
    int n = sizeof(arr)/ sizeof(arr[0]);
 
    findInorderSuccessor(arr, n);
 
    return 0;
}



