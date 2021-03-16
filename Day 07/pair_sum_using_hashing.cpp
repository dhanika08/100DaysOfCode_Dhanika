//Complexity : O(n)
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
    int target;
    cin >> target;
    unordered_set<int> ans;
    for (int i = 0; i < n; i++)
    {
        int temp = target - arr[i];
        if(ans.find(temp) !=ans.end())
            cout<<temp<<" "<<arr[i]<<endl;

            ans.insert(arr[i]);
    }
    return 0;
}