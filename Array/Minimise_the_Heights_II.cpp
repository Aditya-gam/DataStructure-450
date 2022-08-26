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

int getMinDiff(vector<int> arr, int k)
{
    sort(arr.begin(), arr.end());
    int res = arr[arr.size() - 1] - arr[0];
    int small = arr[0] + k;
    int large = arr[arr.size() - 1] - k;
    int minE, maxE;

    for (int i = 0; i < arr.size(); i++)
    {
        minE = min(small, arr[i + 1] - k);
        maxE = max(large, arr[i] + k);
        if (minE < 0)
            continue;
        res = min(res, maxE - minE);
    }
    return res;
}

int main()
{
    vector<int> arr;
    arr = getArray();

    int k;
    cout << "Enter value of k: ";
    cin >> k;

    cout << "Original array: " << endl;
    printArray(arr, arr.size());

    int minDiff = getMinDiff(arr, k);

    cout << "Min max height: " << minDiff;

    return 0;
}