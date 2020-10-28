// Find the "Kth" max and min element of an array

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int k;
        cin >> k;
        cout << arr[k - 1] << " " << arr[n - k] << "\n";
    }
    return 0;
}