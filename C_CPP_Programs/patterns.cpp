#include <iostream>
// #include <stdlib.h>
// #include <string>

using std::cin;
using std::cout;
using std::endl;


// Examly Looping PT: Hollow Pyramid
/*int main(){
    int n;
    cin >> n;

    int m, l;

    for (size_t i = 1; i <= n; ++i)
    {
        l = n-i;

        for (size_t j = 1; j <= l; ++j)
            cout << "b";
        

        m = 2*i - 1;
            
        for (size_t j = 1; j <= m; ++j)
        {
            if ((i > 1 && i < n) && (j > 1 && j < m))
                cout << "i";

            else
                cout << "*";
        }

        for (size_t j = 1; j <= l; ++j)
            cout << "b";

        cout << endl;
    }
    
    return 0;
}//*/

//------------------------------|
// Letter Pyramid
/*int main(){
    string s;
    getline(cin, s);

    int n = s.length();
    system("clear");

    //iterating through each row
    for (int i = 1; i <= n; ++i)
    {
        //printing all leading spaces 1st
        for (int j = 1; j <= n-i; ++j)
            cout << " ";
        
        //followed by letters from index 0 to row_no - 1 in each row
        for (int j = 0; j < i; ++j)
            cout << s[j];

        //followed by letters from index row_no - 2 to 0 in each row
        for (int j = i-2; j >= 0; --j)
            cout << s[j];

        cout << endl;
    }
    
    return 0;
}//*/

//-------------------------|
// Pattern 1
/*int main(){
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << i << " ";
        endl(cout);
    }    
    
    return 0;
}//*/

//----------------------|
// Pattern 2
/*int main(){
    int n;
    cin >> n;
    
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //         cout << j << " ";
    //     endl(cout);
    // }

    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= 1; j--)
            cout << j << " ";
        endl(cout);
    }    

    return 0;
}//*/

//----------------------|
// Pattern 3
/*int main(){
    int n;
    cin >> n;

    for (int i = 0, k = 1; i < n; i++)
    {
        for (int j = 0; j < n; j++, k++)
            cout << k << " ";
        cout << endl;
    }    
    
    return 0;
}//*/

//----------------------|
// Pattern 4
/*int main(){
    int n;
    cin >> n;
    cout << endl;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i+1; j++)
    //         cout << "* ";
    //     cout << endl;
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i+1; j++)
    //         cout << i+1 << " ";
    //     cout << endl;
    // }

    // for (int i = 0, k = 1; i < n; i++)
    // {
    //     for (int j = 0; j < i+1; j++, k++)
    //         cout << k << " ";
    //     cout << endl;
    // }

    // for (int i = 0, k = 1; i < n; k = ++i + 1) //*same
    // {
    //     for (int j = 0; j < i+1; j++, k++)
    //         cout << k << " ";
    //     cout << endl;
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0, k = i+1; j < i+1; j++, k--)
    //         cout << k << " ";
    //     cout << endl;
    // }
    

    for (int i = 0; i < n; i++) //*same
    {
        for (int j = 0; j < i+1; j++)
            cout << i+j+1 << " ";
        cout << endl;
    }

    return 0;
}//*/

//----------------------|
// Pattern 5
/*int main(){
    int n;
    cin >> n;
    cout << endl;
    
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //         cout << (char)(65 + i) << " ";
    //     cout << endl;
    // }
    
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //         cout << (char)(65 + j) << " ";
    //     cout << endl;
    // }

    // char p = 'A';
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //         cout << p++ << " ";
    //     cout << endl;
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //         cout << i+j+1 << " ";
    //     cout << endl;
    // }

    // char p = 'A';
    // for (int i = 0; i < n; i++, p -= 2)
    // {
    //     for (int j = 0; j < n; j++)
    //         cout << p++ << " ";
    //     cout << endl;
    // }

    for (int i = 0; i < n; i++)
    {
        char p = 'A' + i;

        for (int j = 0; j < n; j++)
            cout << p++ << " ";
        cout << endl;
    }
    
    return 0;
}//*/

//----------------------|
// Pattern 6
/*int main(){
    int n;
    cin >> n;
    cout << endl;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i+1; j++)
    //         cout << (char)('A' + i) << " ";
    //     cout << endl;
    // }
    
    // char p = 'A';
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i+1; j++)
    //         cout << p++ << " ";
    //     cout << endl;
    // }
    
    // for (int i = 0; i < n; i++)
    // {
    //     char p = 'A' + i;

    //     for (int j = 0; j <= i; j++)
    //         cout << p++ << " ";
    //     cout << endl;
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     char p = 'D' - i;

    //     for (int j = 0; j < i+1; j++)
    //         cout << p++ << " ";
    //     cout << endl;
    // }

    for (int i = 0; i < n; i++)
    {
        char p = 'A' + n - 1 - i;

        for (int j = 0; j < i+1; j++)
            cout << p++ << " ";
        cout << endl;
    }

    return 0;
}//*/

//----------------------|
// Pattern 7
/*int main(){
    int n;
    cin >> n;
    cout << endl;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n-1-i; j++)
    //         cout << "  ";

    //     for (int j = 0; j <= i; j++)
    //         cout << "* ";

    //     cout << endl;
    // }
    
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n-i; j++)
    //         cout << "* ";
    //     cout << endl;
    // }
    
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //         cout << "  ";

    //     for (int j = 0; j < n-i; j++)
    //         cout << "* ";

    //     cout << endl;
    // }
    
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //         cout << "  ";

    //     for (int j = 0; j < n-i; j++)
    //         cout << i+1 << " ";

    //     cout << endl;
    // }
    
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n-1-i; j++)
    //         cout << "  ";

    //     for (int j = 0; j <= i; j++)
    //         cout << i+1 << " ";

    //     cout << endl;
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //         cout << "  ";

    //     for (int j = 0, k = i+1; j < n-i; j++)
    //         cout << k++ << " ";

    //     cout << endl;
    // }

    // for (int i = 0, k = 1; i < n; i++)
    // {
    //     for (int j = 0; j < n-1-i; j++)
    //         cout << "  ";

    //     for (int j = 0; j <= i; j++)
    //         cout << k++ << " ";

    //     cout << endl;
    // }

    return 0;
}//*/

//----------------------|
// Pattern 8
/*int main(){
    int n;
    cin >> n;
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n-i; j++)
            cout << "  ";
        
        for (int j = 1, k = 1; j <= 2*i - 1; j++)
        {
            cout << k << " ";

            if (j < i)
                k++;
            else
                k--;
        }

        cout << endl;     
    }    
    
    return 0;
}//*/

//----------------------|
// Pattern 9 - DABANGG!
/*int main(){
    int n;
    cin >> n;
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n+1-i; j++)
            cout << j << " ";

        for (int j = 0; j < 2*i - 2; j++)
            cout << "* ";

        for (int j = n+1-i; j >= 1; j--)
            cout << j << " ";
        
        cout << endl;
    }
    
    return 0;
}//*/