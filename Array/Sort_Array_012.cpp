/*################## In-built Method   ##################*/
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

vector<int> sort012(vector<int> arr)
{
    sort(arr.begin(), arr.end());
    return arr;
}

int main()
{
    vector<int> arr;
    arr = getArray();

    cout << "Original array: " << endl;
    printArray(arr, arr.size());

    arr = sort012(arr);

    cout << "Sorted array: " << endl;
    printArray(arr, arr.size());

    return 0;
}

/*################## Counting Method   ##################*/
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

vector<int> sort012(vector<int> arr)
{
    int count0 = 0, count1 = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
        {
            count0++;
        }
        if (arr[i] == 1)
        {
            count1++;
        }
    }

    for (int i = 0; i < arr.size(); i++)
    {
        if (i < count0)
        {
            arr[i] = 0;
        }
        if (i >= count0 && i < count0 + count1)
        {
            arr[i] = 1;
        }
        if (i >= count0 + count1)
        {
            arr[i] = 2;
        }
    }
    return arr;
}

int main()
{
    vector<int> arr;
    arr = getArray();

    cout << "Original array: " << endl;
    printArray(arr, arr.size());

    arr = sort012(arr);

    cout << "Sorted array: " << endl;
    printArray(arr, arr.size());

    return 0;
}