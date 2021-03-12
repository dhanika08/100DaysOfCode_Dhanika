// Search an element in array with O(logn) time complexity
#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int k)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == k)
            return mid;
        else if (arr[mid] < k)
            start = mid + 1;
        else
            end = mid - 1;
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
    int ans = binarySearch(arr, n, k);
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