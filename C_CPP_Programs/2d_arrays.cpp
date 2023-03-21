#include <bits/stdc++.h>
using namespace std;

// Sort a 2D Array
/*int main(){
    int n = 3, a[][n] {{12,11,3}, {5,10,7}, {2,4,9}, {3, 1, 6}};

    sort(*a, *a + 12);

    for (size_t i = 0; i < 12; ++i)
    {
        cout << (*a)[i] << " "; //*(*a + i), where *a is ptr to the 1st int of 1st 1D array

        if ((i+1) % n == 0)
            cout << endl;
    }
    
    return 0;
}//*/


// Row/Col-Wise Sum
/*int main(){
    int m, n;
    cin >> m >> n;

    int a[m][n];

    for (size_t i = 0; i < m*n; ++i)
        cin >> *(*a + i);

    //row-wise
    for (size_t i = 0; i < m; ++i)
    {
        int s = 0;

        for (size_t j = 0; j < n; ++j)
            s += a[i][j];

        cout << s << endl;
    }

    //col-wise
    for (size_t j = 0; j < n; ++j)
    {
        int s = 0;

        for (size_t i = 0; i < m; ++i)
            s += a[i][j];

        cout << s << endl;
    }
    
    return 0;
}//*/


// Largest Row Sum
/*int largest_row_sum(int *p, int m, int n)
{
    int (*a)[n] = (int (*)[n]) p, largest_sum = INT_MIN;

    for (size_t i = 0; i < m; ++i)
    {
        int s = 0;

        for (size_t j = 0; j < n; ++j)
            s += a[i][j];

        if (largest_sum < s)
            largest_sum = s;
    }

    return largest_sum;
}

int main(){
    int m, n;
    cin >> m >> n;

    int a[m][n];

    for (size_t i = 0; i < m*n; ++i)
        cin >> *(*a + i);
    
    cout << largest_row_sum(*a, m, n) << endl;
    return 0;
}//*/


// Dynamically Allocated 2D Array
/*void print(int **a, int m, int n)
{
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

int main(){
    int m, n;
    cin >> m >> n;

    int **a = new int*[m];

    for (int i = 0; i < m; ++i)
        a[i] = new int[n];

    //input
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
            cin >> a[i][j];
    }
    
    print(a, m, n); //print elements of 2d-arr

    //free allocated memory
    for (int i = 0; i < m; ++i)
        delete[] a[i];

    delete[] a;

    return 0;
}//*/