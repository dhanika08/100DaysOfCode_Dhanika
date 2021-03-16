//Complexity can be O(nlogn) if sorting is heap or merge or O(n^2) if it is quick sort
#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter number of elelemnts in an array and sum" << endl;
    int n, x;
    cin >> n >> x;
    int arr[n];
    cout << "Enter elements of an array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int l = 0;
    int h = n - 1;
    int flag = 0;
    while (l < h)
    {
        if (arr[l] + arr[h] == x)
        {
            cout << arr[l] << " " << arr[h] << endl;
            flag = 1;
            break;
        }
        else if (arr[l] + arr[h] < x)
            l++;
        else
            h--;
    }
    if (flag == 0)
    {
        cout << "Sum is not present" << endl;
    }
    return 0;
}