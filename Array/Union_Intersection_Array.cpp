/*################## Using Set   ##################*/
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

int unIon(vector<int> arr1, vector<int> arr2)
{
    set<int> st;
    for (int i = 0; i < arr1.size(); i++)
    {
        st.insert(arr1[i]);
    }
    for (int i = 0; i < arr2.size(); i++)
    {
        st.insert(arr2[i]);
    }

    return st.size();
}

int main()
{
    vector<int> arr1, arr2;
    arr1 = getArray();
    arr2 = getArray();

    cout << "Lenght of Union: " << unIon(arr1, arr2) << endl;

    return 0;
}

/*################## Without Using Set   ##################*/
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

int unIon(vector<int> arr1, vector<int> arr2)
{
    int ans = 0;

    vector<int> v;
    for (int i = 0; i < arr1.size(); i++)
    {
        v.push_back(arr1[i]);
    }
    for (int i = 0; i < arr2.size(); i++)
    {
        v.push_back(arr2[i]);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == v[i + 1])
            continue;
        ans++;
    }

    return ans;
}

int main()
{
    vector<int> arr1, arr2;
    arr1 = getArray();
    arr2 = getArray();

    cout << "Lenght of Union: " << unIon(arr1, arr2) << endl;

    return 0;
}