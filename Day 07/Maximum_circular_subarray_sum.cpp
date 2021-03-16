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
    int max_sum = INT_MIN;
    int min_sum = INT_MAX;

    int min_temp = 0;
    int max_temp = 0;

    int arr_sum = 0;
    for (int i = 0; i < n; i++)
    {
        arr_sum += arr[i];

        max_temp += arr[i];
        max_sum = max(max_sum,max_temp);
        if(max_temp<0)
        {
            max_temp = 0;
        }

        min_temp += arr[i];
        min_sum = min(min_sum, min_temp);
        if (min_temp > 0)
        {
            min_temp = 0;
        }
    }
    if(arr_sum == min_sum)
    cout<< max_sum<<endl;
    else
    cout<< max(max_sum,arr_sum - min_sum);
}