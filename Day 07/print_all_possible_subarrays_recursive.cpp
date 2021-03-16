#include <iostream>
using namespace std;
void printSubarray(int arr[], int start, int end, int n)
{
    if (end == n)
        return;

    else if (start > end)
        printSubarray(arr, 0, end + 1,n);

    else
    {
        cout << "[";
        for (int i = start; i < end; i++)
        {
            cout<<arr[i]<<",";
        }
        cout<<arr[end]<<"]"<<endl;
        printSubarray(arr,start+1,end,n);
    }
    return;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    printSubarray(arr, 0, 0, n);
    return 0;
}