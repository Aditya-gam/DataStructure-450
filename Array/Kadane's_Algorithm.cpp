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

int maxSubArraySum(vector<int> arr)
{
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i - 1] > 0)
        {
            arr[i] = arr[i] + arr[i - 1];
        }
    }
    return max_element(arr.begin(), arr.end());
}

int main()
{
    vector<int> arr;
    arr = getArray();

    cout << "Original array: " << endl;
    printArray(arr, arr.size());

    res = maxSubArraySum(arr);

    cout << "Max sum of sub Array: " << res;

    return 0;
}