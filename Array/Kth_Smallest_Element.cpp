/*################## In-Built Sort Method   ##################*/
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

int kthSmallest(vector<int> arr, int k)
{
    sort(arr.begin(), arr.end());
    return arr[k - 1];
}

int main()
{
    vector<int> arr;
    arr = getArray();

    int k;
    cout << "Enter value of K: ";
    cin >> k;

    cout << "Original array: " << endl;
    printArray(arr, arr.size());

    cout << "Kth smallest Element is: " << kthSmallest(arr, k);

    return 0;
}

/*################## Priority Queue Method   ##################*/
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

int kthSmallest(vector<int> arr, int l, int r, int k)
{
    priority_queue<int> pq;

    for (int i = l; i <= r; i++)
    {
        pq.push(arr[i]);
        if (pq.size() > k)
        {
            pq.pop();
        }
    }
    return pq.top();
}

int main()
{
    vector<int> arr;
    arr = getArray();

    int k;
    cout << "Enter value of K: ";
    cin >> k;

    cout << "Original array: " << endl;
    printArray(arr, arr.size());

    cout << "Kth smallest Element is: " << kthSmallest(arr, 0, arr.size() - 1, k);

    return 0;
}