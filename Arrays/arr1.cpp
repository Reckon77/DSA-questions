// Reverse the array

#include <bits/stdc++.h>
using namespace std;
void reverse(int arr[], int size)
{
    for (int i = 0, j = size - 1; i < j; i++, j--)
    {
        swap(arr[i], arr[j]);
    }
}
void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    reverse(arr, n);
    display(arr, n);
    return 0;
}