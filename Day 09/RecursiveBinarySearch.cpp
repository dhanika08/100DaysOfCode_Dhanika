// Search an element in array with O(logn) time complexity
#include <iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int k)
{
    if (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == k)
            return mid;
        else if (arr[mid] < k)
            binarySearch(arr,mid+1,end,k);
        else
            binarySearch(arr,start,mid-1,k);
    }
    return -1;
}
int main()
{
    int n;
    cout << "Enter number of elements in an array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter elements of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Element to be searched for" << endl;
    int k;
    cin >> k;
    int ans = binarySearch(arr,0,n-1, k);
    if (ans == -1)
    {
        cout << "Element not found" << endl;
    }
    else
    {
        cout << "Element found at index " << ans << endl;
    }
    return 0;
}