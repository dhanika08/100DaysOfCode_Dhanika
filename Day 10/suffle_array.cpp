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
    srand(time(NULL));
    for (int j = n - 1; j > 0; j--)
    {
        int i = rand() % (j + 1);
        swap(arr[i], arr[j]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
}