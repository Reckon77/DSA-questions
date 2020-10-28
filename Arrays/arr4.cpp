//Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo

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
        //Counting sort algo.
        // ----------------------------
        // int h[3] = {0};
        // for (int i = 0; i < n; i++) {
        // 	h[arr[i]]++;
        // }
        // for (int i = 0; i < h[0]; i++) {
        // 	arr[i] = 0;
        // }
        // for (int i = h[0]; i < (h[0] + h[1]); i++) {
        // 	arr[i] = 1;
        // }
        // for (int i = h[0] + h[1]; i < n; i++) {
        // 	arr[i] = 2;
        // }
        // ----------------------------
        // Optimized Dutch national flag algo
        int low = 0, mid = 0, high = n - 1;
        while (mid <= high)
        {
            if (arr[mid] == 1)
                mid++;
            if (arr[mid] == 0)
            {
                swap(arr[low], arr[mid]);
                low++;
                mid++;
            }
            if (arr[mid] == 2)
            {
                swap(arr[high], arr[mid]);
                high--;
            }
        }
        for (auto a : arr)
        {
            cout << a << " ";
        }
    }
    return 0;
}