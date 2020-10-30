//Move all the negative elements to one side of the array

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
    //Two Pointer approach
    // int i = 0, j = n - 1;
    // while (i < j) {
    // 	while (arr[i] < 0) {
    // 		i++;
    // 	}
    // 	while (arr[j] >= 0) {
    // 		j--;
    // 	}
    // 	if (i < j) {
    // 		swap(arr[i], arr[j]);
    // 	}
    // }

    int i = 0, j = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            if (i != j)
            {
                swap(arr[i], arr[j]);
            }
            j++;
        }
    }
    for (auto a : arr)
    {
        cout << a << " ";
    }
    return 0;
}
