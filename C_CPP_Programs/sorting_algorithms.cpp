#include <bits/stdc++.h>
using namespace std;

//----------------------------------|
// Insertion Sort
void insertion_sort(int arr[], int n)
{
    for (int i = 1; i < n; ++i)
    {
        int k = i, element1 = arr[k];

        for (int j = i-1; j >= 0; --j)
        {
            int element2 = arr[j];

            if (element1 < element2)
            {
                swap(arr[k], arr[j]);

                if (j > 0)
                    --k;
            }
        }
    }
}

//Optimised soln
void insertionSort(int n, vector<int> &a)
{
    int j, t;

    for (size_t i = 1; i < n; ++i)
    {
        j = i-1, t = a[i];

        while (j >= 0 && a[j] > t)
            a[j+1] = a[j], --j;

        a[j+1] = t;
    }
}

//----------------------------------------|
// Selection Sort
void selection_sort(vector<int>& a, int n)
{   
    for (size_t i = 0; i < n-1; ++i)
    {
        int smallest = a[i], k = i;

        for (size_t j = i+1; j < n; ++j)
        {
            if (smallest > a[j])
                smallest = a[j], k = j;
        }

        if (k > i)
            swap(a[i], a[k]);
    }
}

//------------------------------------|
//  Bubble Sort
void bubbleSort(vector<int>& a, int n)
{
    for (size_t i = n-1; i > 0; --i)
    {
        bool already_sorted = true;

        for (size_t j = 0; j < i; ++j)
        {
            int k = j+1;

            if (a[j] > a[k])
            {
                already_sorted = false;
                swap(a[j], a[k]);
            }
        }

        if (already_sorted)
            return;
    }
}

//-----------------------------------|
// Pigeonhole Sort
void pigeonhole_sort(vector<int>& a)
{
    //find min & max elements in a[]
    int l = a[0], h = a[0], n = a.size();

    for (int i = 1; i < n; ++i)
        l = min(l, a[i]), h = max(h, a[i]);

    //create pigeonhole[] array
    int m = h-l+1;
    vector<vector<int>> phole (m);

    //iterate thru input arr and copy element objects into their respective p-holes
    for (int i = 0; i < n; ++i)
        phole[ a[i] - l ].push_back(a[i]); //push a[i] into sub-array at index a[i] - min

    //iterate thru p-hole[] and copy elements back into the input array
    int k = 0;
    
    for (int i = 0; i < m; ++i)
    {
        n = phole[i].size();

        for (int j = 0; j < n; ++j)
            a[k++] = phole[i][j];
    }
}

//--------------------------------------------|
// Merge Sort
void merge(vector<int>& a, int l, int m, int h)
{
    int length_of_2nd_part = h - m;

    vector<int> b (length_of_2nd_part);

    //copy elements of 2nd part into auxillary vector b
    for (int i = m+1, j = 0; i <= h; ++i)
        b[j++] = a[i];

    //ptr to last element of 1st pt
    //ptr to last element of 2nd pt
    //independent ptr to last index of 1st array
    int p1 = m, p2 = length_of_2nd_part - 1, i = h;

    while (p2 >= 0)
    {
        if (p1 >= l && a[p1] > b[p2])
            a[i--] = a[p1--];
        else
            a[i--] = b[p2--];
    }
}

void merge_sort(vector<int>& a, int l, int h)
{
    if (l >= h)
        return;

    int m = l + (h-l) / 2;

    merge_sort(a, l, m); //sort 1st part
    merge_sort(a, m+1, h); //sort 2nd part

    merge(a, l, m, h); //sort & merge both parts
}

//------------------------------------------|
// Quick Sort
int pivot_index(vector<int> &a, int l, int h)
{
    int pivot_element = a[l], pi = l; // pi: pivot index

    // calculate the right position for PE in the index range [l,h]
    for (int i = l + 1; i <= h; ++i)
    {
        if (pivot_element > a[i])
            ++pi;
    }

    // assign PE to its correct position
    swap(a[l], a[pi]);

    // make a[i] < PE <= a[j] true
    // now we use l, h as variable indices
    while (l < pi && h > pi)
    {
        while (a[l] < pivot_element)
            ++l;

        while (a[h] >= pivot_element)
            --h;

        if (l < pi && h > pi)
            swap(a[l++], a[h--]);
        else
            break;
    }

    return pi;
}

void quick_sort(vector<int> &a, int l, int h)
{
    if (l >= h)
        return;

    int p = pivot_index(a, l, h);

    quick_sort(a, l, p - 1);
    quick_sort(a, p + 1, h);
}