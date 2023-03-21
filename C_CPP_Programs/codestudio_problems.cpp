// #include "useful_functions.cpp"
#include <bits/stdc++.h>

using namespace std;

// Triplets with Given Sum
/*vector<vector<int>> findTriplets(vector<int> arr, int n, int K)
{
    //function me ghuste hi arr[] ko sort kardo
    if (!is_sorted(arr.begin(), arr.end()))
        sort(arr.begin(), arr.end());


	vector <vector<int>> ans;

    
    for (int i = 0; i < n-2; ++i)
    {
        if (i > 0 && arr[i] == arr[i-1])
            continue;


        for (int j = i+1; j < n-1; ++j)
        {
            if ((j > i+1 && arr[j] == arr[j-1]))
                continue;



            int e1 = arr[i], e2 = arr[j], e3 = K - e1 - e2;

            if (e3 < arr[j+1])
                continue;



            vector <int> t {e1, e2, e3};

            if (binary_search(arr.begin() + j+1, arr.end(), e3))
                ans.push_back(t);
        }
    }

    return ans;
}

int main(){
    vector <int> arr;

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;

        arr.push_back(x);
    }
    
    int k;
    cin >> k;
    
    vector <vector<vector<int>>> v {findTriplets(arr, n, k)};

    for (auto u : v)
    {
        for (auto a : u)
        {
            for (int i = 0; i < 3; ++i)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }        
    }
    
    return 0;
}//*/

//---------------------------|
// Sort 0 1 2
/*void sort012(int *arr, int n)
{
    int i {}, index_of_0 = find(arr + i, arr + n, 0) - arr;

    //sorting all 0s 1st
    while (index_of_0 < n)
    {
        if (i < index_of_0)
            swap(arr[i], arr[index_of_0]);

        index_of_0 = find(arr + ++i, arr + n, 0) - arr;
    }

    //sorting all 1s
    int index_of_1 = find(arr + i, arr + n, 1) - arr;

    while (index_of_1 < n)
    {
        if (i < index_of_1)
            swap(arr[i], arr[index_of_1]);

        index_of_1 = find(arr + ++i, arr + n, 1) - arr;
    }
    
    //sorting all 2s
    int index_of_2 = find(arr + i, arr + n, 2) - arr;

    while (index_of_2 < n)
    {
        if (i < index_of_2)
            swap(arr[i], arr[index_of_2]);

        index_of_2 = find(arr + ++i, arr + n, 2) - arr;
    }
}

int main(){
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; ++i)
        cin >> a[i];

    sort012(a, n);

    for (int i = 0; i < n; ++i)
        cout << a[i] << " ";
    cout << endl;

    return 0;
}//*/

//------------------------------------------------------|
// First and Last Position of an Element In Sorted Array
/*pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    int mid = binary_search(k, arr);
    pair <int, int> ans;

    if (mid < 0)
        ans.first = ans.second = -1;

    else {
        int i = mid;

        while (i > 0 && arr[i-1] == k)
            --i;

        ans.first = i;

        int j = mid;

        while (j < n-1 && arr[j+1] == k)
            ++j;
        
        ans.second = j;
    }

    return ans;
}

int main(){
    int n, k;
    cin >> n >> k;

    vector <int> arr;

    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;

        arr.push_back(x);
    }

    pair <int, int> ans(firstAndLastPosition(arr, n, k));

    cout << ans.first << " " << ans.second << endl;
    return 0;
}//*/

//-------------------------------------------|
// Search an Element in Sorted-Rotated Array
/*int findPosition(vector<int>& a, int n, int k)
{
    int l {}, h {n-1};

    while (l <= h)
    {
        int m = l + (h-l)/2;

        if (k == a[m]) //agar mid index pe hi k mil gaya toh
            return m;

        
        //agar middle index pe k nahi mila toh
        if (k < a[0]) //if k lies on the lower line
        {
            if (a[m] >= a[0]) //if a[m] lies on the higher line
                l = m + 1;

            else { //if a[m] < a[0]
                if (k > a[m])
                    l = m + 1;

                else //if k < a[m] & k < a[0]
                    h = m - 1;
            }
        }

        else //k >= a[0]
        {
            if (a[m] < a[0])
                h = m - 1;

            else {
                if (k < a[m])
                    h = m - 1;

                else //k > a[m] & k > a[0]
                    l = m + 1;
            }
        }
    }

    return -1;
}

int main(){
    int n, k;
    cin >> n >> k;

    vector <int> a;

    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;

        a.push_back(x);
    }
    
    cout << findPosition(a, n, k) << endl;
    return 0;
}//*/

//-----------------------------|
// Allocate Books
/*bool is_valid(vector <int> &a, int mid, int m, int n)
{
    int i = 0;

    while (m)
    {
        int s {};

        while (i < n && s + a[i] <= mid)
            s += a[i++];
        
        --m;
    }
    
    return i == n ? 1 : 0;
}

int allocateBooks(vector<int> a, int n, int m)
{
    int l = 0, h = 0; //l: min pages a student can have

    for (int i = 0; i < n; ++i)
        h += a[i]; //max pages a stud can have (sum of all pages)

    int ans = -1;

    while (l <= h)
    {
        int mid = l + (h-l)/2;

        if (is_valid(a, mid, m, n))
            ans = mid, h = mid - 1;

        else
            l = mid + 1;
    }
    
    return ans;
}

int main(){
    int n, m;
    cin >> n >> m;
    
    vector <int> a;

    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;

        a.push_back(x);
    }

    cout << allocateBooks(a, n, m) << endl;
    return 0;
}//*/

//--------------------------------------------------|
//  Painter's Partition Problem 
/*bool is_valid(vector<int> &a, int n, int m, int k)
{
    int s {}, i {};

    while (i < n)
    {
        if (a[i] > m)
            return false;

        if (s + a[i] <= m)
        {
            if (i == n-1)
                --k;

            s += a[i++];
        }

        else {
            if (--k < 1)
                return false;

            s = 0;
        }
    }
    
    return true;
}

int findLargestMinDistance(vector<int> &a, int k)
{
    size_t l {}, h {}, n {a.size()};

    for (int i = 0; i < n; ++i)
        h += a[i];

    int ans {};

    while (l <= h)
    {
        int m = l + (h-l)/2;

        if (is_valid(a, n, m, k))
            ans = m, h = m-1;

        else
            l = m + 1;
    }
    
    return ans;
}

int main(){
    int n, k;
    cin >> n >> k;

    vector <int> a;

    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;

        a.push_back(x);
    }
    
    cout << findLargestMinDistance(a, k) << endl;
    return 0;
}//*/

//-------------------------------------------------|
//  Aggressive Cows
/*bool is_valid(vector<int> a, int n, int m, int k)
{
    vector <int> positions;

    for (int i = 0; i < n-1; ++i)
    {
        bool two_cows_placed {};

        for (int j = i+1; j < n; ++j)
        {
            if (a[j] - a[i] >= m)
            {
                two_cows_placed = true;

                positions.assign({a[i], a[j]});
                a[i] = a[j] = -1;

                break;
            }
        }

        if (two_cows_placed)
            break;
    }

    if (k == 2)
        return true;

    size_t stall_allocations = positions.size();

    while (stall_allocations < k)
    {
        size_t previous {stall_allocations};

        for (int i = 0; i < n; ++i) //iterating thru the main array
        {
            int p = a[i];

            if (p < 0)
                continue;
            
            bool valid_position = true;

            for (int j = 0; j < stall_allocations; ++j)
            {
                if (abs(p - positions[j]) < m)
                {
                    valid_position = false;
                    break;
                }
            }

            if (valid_position)
            {
                positions.push_back(p);
                a[i] = -1;
                break;
            }
        }

        stall_allocations = positions.size();

        if (stall_allocations == previous)
            return false;
    }
    
    return true;
}

int aggressiveCows(vector<int> &a, int k)
{
    sort(a.begin(), a.end());

    size_t n = a.size();
    int ans {}, l = 1, h = a[n-1] - a[0];

    while (l <= h)
    {
        int m = l + (h-l)/2;

        if (is_valid(a, n, m, k))
            ans = m, l = m + 1;

        else
            h = m - 1;
    }
    
    return ans;
}

//optimised approach
bool is_valid(vector<int> a, int n, int m, int k)
{
    int last_position = a[0];
    --k;

    for (int i = 1; i < n; ++i)
    {
        if (a[i] - last_position >= m)
        {
            if (--k == 0)
                return true;

            last_position = a[i];
        }
    }

    return false;
}

int main(){
    int n, k;
    cin >> n >> k;

    vector <int> a;

    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;

        a.push_back(x);
    }
    
    cout << aggressiveCows(a, k) << endl;
    return 0;
}//*/

