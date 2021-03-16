//Print all possible subarrays(Iterrative)
#include <iostream>
using namespace std;
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
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}