/*################## Linear Search Method   ##################*/
/*################## Time Complexity: O(n) ##################*/
/*################## Space Complexity: O(1) ##################*/
// #include <bits/stdc++.h>

// using namespace std;

// struct Pair
// {
//     int min;
//     int max;
// };

// vector<int> getArray()
// {
//     int n;
//     cout << "Enter size of array: ";
//     cin >> n;
//     vector<int> arr(n);
//     cout << "Enter the array:";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     return arr;
// }

// void printArray(vector<int> arr, int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     cout << endl;
// }

// Pair getMinMax(vector<int> arr, int n)
// {
//     struct Pair minmax;
//     int i;

//     if (n == 1)
//     {
//         minmax.max = arr[0];
//         minmax.min = arr[0];
//         return minmax;
//     }

//     if (arr[0] > arr[1])
//     {
//         minmax.max = arr[0];
//         minmax.min = arr[1];
//     }
//     else
//     {
//         minmax.max = arr[1];
//         minmax.min = arr[0];
//     }

//     for (i = 2; i < n; i++)
//     {
//         if (arr[i] > minmax.max)
//         {
//             minmax.max = arr[i];
//         }
//         else if (arr[i] < minmax.min)
//         {
//             minmax.min = arr[i];
//         }
//     }
//     return minmax;
// }

// int main()
// {
//     vector<int> arr;
//     arr = getArray();

//     cout << "Original array: " << endl;
//     printArray(arr, arr.size());

//     struct Pair minmax = getMinMax(arr, arr.size());

//     cout << "Minimum element is " << minmax.min << endl;
//     cout << "Maximum element is " << minmax.max;

//     return 0;
// }

/*################## Binary Search Method   ##################*/
/*################## Time Complexity: O(n) ##################*/
/*################## Space Complexity: O(log n) ##################*/
#include <bits/stdc++.h>

using namespace std;

struct Pair
{
    int min;
    int max;
};

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

Pair getMinMax(vector<int> arr, int low, int high)
{
    struct Pair minmax, mml, mmr;
    int mid;

    if (low == high)
    {
        minmax.max = arr[low];
        minmax.min = arr[low];
        return minmax;
    }

    if (high == low + 1)
    {
        if (arr[low] > arr[high])
        {
            minmax.max = arr[low];
            minmax.min = arr[high];
        }
        else
        {
            minmax.max = arr[high];
            minmax.min = arr[low];
        }
        return minmax;
    }

    mid = (low + high) / 2;
    mml = getMinMax(arr, low, mid);
    mmr = getMinMax(arr, mid + 1, high);

    if (mml.min < mmr.min)
    {
        minmax.min = mml.min;
    }
    else
    {
        minmax.min = mmr.min;
    }

    if (mml.max > mmr.max)
    {
        minmax.max = mml.max;
    }
    else
    {
        minmax.max = mmr.max;
    }

    return minmax;
}

int main()
{
    vector<int> arr;
    arr = getArray();

    cout << "Original array: " << endl;
    printArray(arr, arr.size());

    struct Pair minmax = getMinMax(arr, 0, arr.size() - 1);

    cout << "Minimum element is " << minmax.min << endl;
    cout << "Maximum element is " << minmax.max;

    return 0;
}