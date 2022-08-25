/*################## In-Built Method   ##################*/
/*################## Time Complexity: O(n*log(n)) ##################*/
/*################## Space Complexity: O(n) ##################*/
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

vector<int> rearrange(vector<int> arr)
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

    arr = rearrange(arr);

    cout << "Rearranged Array: " << endl;
    printArray(arr, arr.size());

    return 0;
}

/*################## Partition Method   ##################*/
/*################## Time Complexity: O(n) ##################*/
/*################## Space Complexity: O(1) ##################*/
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

vector<int> rearrange(vector<int> arr)
{
    int j = 0;

    for (int i = 0; i < arr.size(); i++)
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

    return arr;
}

int main()
{
    vector<int> arr;
    arr = getArray();

    cout << "Original array: " << endl;
    printArray(arr, arr.size());

    arr = rearrange(arr);

    cout << "Rearranged Array: " << endl;
    printArray(arr, arr.size());

    return 0;
}

/*################## Two Pointer Method   ##################*/
/*################## Time Complexity: O(n) ##################*/
/*################## Space Complexity: O(1) ##################*/
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

vector<int> rearrange(vector<int> arr, int left, int right)
{
    while (left <= right)
    {
        if (arr[left] < 0 && arr[right] < 0)
        {
            left += 1;
        }
        else if (arr[left] > 0 && arr[right] < 0)
        {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left += 1;
            right -= 1;
        }
        else if (arr[left] > 0 && arr[right] > 0)
        {
            right -= 1;
        }
        else
        {
            left += 1;
            right -= 1;
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

    arr = rearrange(arr, 0, arr.size() - 1);

    cout << "Rearranged Array: " << endl;
    printArray(arr, arr.size());

    return 0;
}

/*################## Dutch National Flag Algorithm ##################*/
/*################## Time Complexity: O(n) ##################*/
/*################## Space Complexity: O(1) ##################*/
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

vector<int> rearrange(vector<int> arr)
{
    int low = 0, high = arr.size() - 1;
    while (low < high)
    {
        if (arr[low] < 0)
        {
            low++;
        }
        else if (arr[high] > 0)
        {
            high--;
        }
        else
        {
            swap(arr[low], arr[high]);
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

    arr = rearrange(arr);

    cout << "Rearranged Array: " << endl;
    printArray(arr, arr.size());

    return 0;
}