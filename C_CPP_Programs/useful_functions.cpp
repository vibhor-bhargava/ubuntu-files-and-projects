#include <bits/stdc++.h>
using namespace std;

//------------------------------|
// Minimum of 3 nos.
int min3(int &a, int &b, int &c)
{
    if (a <= b && a <= c)
        return a;
    else if (b <= a && b <= c)
        return b;
    else
        return c;
}

//-------------------|
// Swap 2 nos.
void swap(int &a, int &b)
{
    int t = a;
    a = b, b = t;
}

//------------------------------|
// Exponent of +ve int
unsigned int pow(int m, int n)
{
    unsigned int p = 1;

    while (n)
        p *= m, --n;
    return p;
}


//-------------------------------------------------|
// Binary Search
//Iterative
int binary_search(int key, vector <int> &v)
{
    int low = 0, high = v.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (key == v[mid])
            return mid;

        else if (key < v[mid])
            high = mid - 1;

        else
            low = mid + 1;
    }
    
    return -1;
}

//-------------------------------------------------------|
// Determine if a year is leap
bool is_leap(int y)
{
    if (y % 4 == 0)
    {
        if (y % 100 != 0)
            return 1;
        
        else
        {
            if (y % 400 == 0)
                return 1;
            else
                return 0;
        }
    }
    
    return 0;
}

//--------------------------------|
// Product of elements of an array
int product_of_elements(int *a, int n)
{
    int p = 1;

    for (int i = 0; i <= (n-1)/2; ++i)
    {
        if (i != n-1-i)
            p *= a[i] * a[n-1-i];
        else
            p *= a[i];
    }

    return p;
}

//---------------------------------------|
// Find an element in a range
int find_k(int *arr, int n, int j, int k)
{
    int mid = j + (n-1-j)/2, back = n-1;

    for (int i = j; i <= mid; ++i, --back)
    {
        if (arr[i] == k)
            return i;

        if (arr[back] == k)
            return back;
    }

    return n;
}

//---------------------------------|
// Reverse an Array
void reverse_array(vector <int> &a, size_t n)
{
    for (size_t i = 0; i < n-1-i; ++i)
        swap(a[i], a[n-1-i]);
}

//------------------------------------------|
// Merge 2 Sorted Arrays
void merge(vector<int>& a, int m, vector<int>& v, int n)
{
    a.resize(m + n);

    for (size_t i = 0; i < n; ++i)
    {
        int x = v[i], j = m++ - 1;

        while (j >= 0 && a[j] > x)
            a[j+1] = a[j], --j;
        
        a[j+1] = x;
    }
}

//-------------------------------------------------------|
// Rotate an Array by k Positions
void rotate(vector<int> &a, int k)
{
    int elements_displaced{};
    size_t n = a.size();

    for (size_t i = 0; elements_displaced < n; ++i)
    {
        int j = (i + k) % n, start = j, temp = a[i], next;

        do
        {
            next = temp,
            temp = a[j],
            a[j] = next,

            j = (j + k) % n,
            ++elements_displaced;
        } while (j != start);
    }
}

//-----------------------------------------------------------|
// Binary Search in a Matrix
vector<int> search_matrix(vector<vector<int>>& a, int target)
{
    int n = a[0].size();
    int low_row = 0, low_col = 0, high_row = a.size() - 1, high_col = n-1;

    while (low_row <= high_row && low_col <= high_col)
    {
        int mid_row = low_row + (high_row - low_row) / 2,
            mid_col = low_col + (high_col - low_col) / 2;

        if (target == a[mid_row][mid_col])
            return {mid_row, mid_col};

        else if (target < a[mid_row][mid_col])
        {
            if (mid_col == 0)
                high_row = mid_row - 1, high_col = n - 1;
            else
                high_col = mid_col - 1;
        }

        else {
            if (mid_col < n-1)
                low_col = mid_col + 1;
            else
                low_row = mid_row + 1, low_col = 0;
        }
    }    
    
    return {-1, -1};
}

//--------------------------------------------|
//Reverse Words in a String
void reverse_word(string& s, int i, int j)
{
    while (i < j)
        swap(s[i++], s[j--]);
}

void remove_leading_spaces(string& s)
{
    int i = 0;

    while (s[i] == ' ')
        ++i;

    s.erase(0, i);
}

void remove_trailing_spaces(string& s)
{
    int j = s.length() - 1;

    if (j < 0)
        return;

    int spaces = 0;

    while (s[j] == ' ')
        ++spaces, --j;

    s.erase(j+1, spaces);
}

string reverseWords(string s)
{
    //remove all leading spaces
    remove_leading_spaces(s);

    //remove all trailing spaces
    remove_trailing_spaces(s);

    int i = 0;

    while (s[i] != 0)
    {
        int j = i;

        if (s[i] != ' ')
        {
            int k = j+1;

            while (s[k] != ' ' && s[k] != 0)
                ++j, ++k;
            
            reverse_word(s, i, j);

            i = j+1;
        }

        else {
            int spaces = 0;

            while (s[j] == ' ')
                ++spaces, ++j;

            s.erase(i++, spaces - 1);
        }
    }

    reverse_word(s, 0, s.length() - 1);
    return s;
}