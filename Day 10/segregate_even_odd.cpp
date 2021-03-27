#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int left = 0;
    int right = n - 1;
    while (left < right)
    {
        while (arr[left] % 2 == 0 && left < right)
            left++;
        while (arr[right] % 2 != 0 && left < right)
            right--;
        if (left < right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}