#include <bits/stdc++.h>

using namespace std;

vector<int> getArray()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    return arr;
}

void printArray(vector<int> arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

vector<int> rotate(vector<int> arr)
{
    int x = arr[arr.size() - 1];
    for (int i = arr.size() - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = x;

    return arr;
}

int main()
{
    vector<int> arr;
    arr = getArray();

    cout << "Original array: " << endl;
    printArray(arr, arr.size());

    arr = rotate(arr);

    cout << "Rotated array: " << endl;
    printArray(arr, arr.size());

    return 0;
}