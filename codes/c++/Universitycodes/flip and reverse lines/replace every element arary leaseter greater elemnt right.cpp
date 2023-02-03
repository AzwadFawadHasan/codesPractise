#include <stdio.h>
#include <limits.h>
 
// Replace each element of the specified array with the
// least greater element on its right
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
    int arr[] = { 10, 100, 93, 32, 35, 65, 80, 90, 94, 6};
    int n = sizeof(arr)/ sizeof(arr[0]);
 
    findInorderSuccessor(arr, n);
 
    return 0;
}
