/*################## Iterrative Apporach   ##################*/
/*################## Time Complexity: O(n) ##################*/
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

vector<int> reverseArray(vector<int> arr)
{
    int start = 0, end = arr.size() - 1;

    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    return arr;
}

int main()
{
    vector<int> arr;
    arr = getArray();

    cout << "Original array: " << endl;
    printArray(arr, arr.size());

    arr = reverseArray(arr);

    cout << "Reversed array: " << endl;
    printArray(arr, arr.size());

    return 0;
}

/*################## Iterrative Apporach   ##################*/
/*################## Time Complexity: O(n) ##################*/
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

vector<int> reverseArray(vector<int> arr, int start, int end)
{
    if (start >= end)
    {
        return arr;
    }

    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    arr = reverseArray(arr, start + 1, end - 1);
    return arr;
}

int main()
{
    vector<int> arr;
    arr = getArray();

    cout << "Original array: " << endl;
    printArray(arr, arr.size());

    arr = reverseArray(arr, 0, arr.size() - 1);

    cout << "Reversed array: " << endl;
    printArray(arr, arr.size());

    return 0;
}