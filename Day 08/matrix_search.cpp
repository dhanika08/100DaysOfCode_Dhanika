#include <iostream>
using namespace std;
int main()
{
    cout << "Enter rows and columns" << endl;
    int n, m;
    cin >> n >> m;

    int target;
    cout << "Enter element to be found" << endl;
    cin >> target;

    int arr[n][m];

    cout << "Enter elements of array" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int l = 0;
    int r = m - 1;

    bool found = false;

    while (l < n && r >= 0)
    {
        if (arr[l][r] == target)
        {
            found = true;
            break;
        }

        else if (arr[l][r] > target)
        {
            r--;
        }
        else
        {
            l++;
        }
    }

    if (found == true)
    {
        cout << "Element found" << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
    return 0;
}