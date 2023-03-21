#include <bits/stdc++.h>

using namespace std;

// Section 7
/*int main(){
    vector <int> v1, v2;
    v1.push_back(10), v1.push_back(20);

    // cout << v1.at(0) << " " << v1.at(1) << endl;
    // cout << "Size of v1: " << v1.size() << endl;

    v2.push_back(100), v2.push_back(200);

    // cout << v2.at(0) << " " << v2.at(1) << endl;
    // cout << "Size of v2: " << v2.size() << endl;

    vector <vector<int>> v12;
    v12.push_back(v1), v12.push_back(v2);

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         cout << v12.at(i).at(j) << endl;
    //     }
    // }
    
    v1.at(0) = 1000;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << v12.at(i).at(j) << endl;
        }
    }

    endl(cout);
    cout << v1[0] << " " << v1[1] << endl;

    return 0;
}//*/

//---------------------------|
// Section 8: Suitable Change
/*int main(){
    int no_of_cents;

    cout << "Enter no. of cents: ";
    cin >> no_of_cents;

    int dollars = no_of_cents / 100;
    no_of_cents %= 100;

    int quarters = no_of_cents / 25;
    no_of_cents %= 25;

    int dimes = no_of_cents / 10;
    no_of_cents %= 10;

    int nickels = no_of_cents / 5;
    no_of_cents %= 5;

    cout << "\nChange is as follows:\n";
    cout << "Dollars: " << dollars << "\nQuarters: " << quarters << "\nDimes: " << dimes << "\nNickels: " << nickels << "\nPennies: " << no_of_cents << endl;
    
    return 0;
}//*/

//----------------------------|
// Section 9 & 11: Vector Menu
/*void display_menu();
char user_input();
void print_list(vector <int> &v);
void append_no(vector <int> &v);
void display_mean(vector <int> &v);
void smallest_no(vector <int> &v);
void largest_no(vector <int> &v);
void clear_list(vector <int> &v);
void find_no(vector <int> &v);

void find_no(vector <int> &v)
{
    if (v.size() > 0)
    {
        cout << "\nEnter a no. you want to search: ";
        int n;
        cin >> n;

        int frequency {};
        bool is_present {};

        for (auto i : v)
        {
            if (i == n) {
                if (!is_present)
                    is_present = true;
                ++frequency;
            }
        }

        if (is_present)
            cout << "\n" << n << " is present in the list\nIt occurs " << frequency << " times in the list.";
        else
            cout << n << " is NOT present in the list";
    }
    else
        cout << "No. not found - empty list";
}

void clear_list(vector <int> &v)
{
    if (v.size() > 0)
    {
        v.clear();
        cout << "List cleared";
    }
    else
        cout << "List is already empty";
}

void largest_no(vector <int> &v)
{
    if (v.size() > 0)
        {
            int largest = v[0], n = v.size();

            for (int i = 1; i < n; i++)
            {
                if (v[i] > largest)
                    largest = v[i];
            }
            
            cout << "Largest no.: " << largest;
        }
        else
            cout << "Empty list - unable to determine the largest no.";
}

void smallest_no(vector <int> &v)
{
    if (v.size() > 0)
    {
        int smallest = v[0], n = v.size();

        for (int i = 1; i < n; i++)
        {
            if (v[i] < smallest)
                smallest = v[i];
        }
        
        cout << "Smallest no.: " << smallest;
    }
    else
        cout << "Empty list - unable to determine the smallest no.";
}

void display_mean(vector <int> &v)
{
    if (v.size() > 0)
    {
        double mean = 0;

        for (auto i : v)
            mean += i;
        mean /= v.size();

        cout << fixed << setprecision(2);
        cout <<"Mean: " << mean;
    }
    else
        cout << "No data available - unable to compute the mean.";
}

void append_no(vector <int> &v)
{
    cout << "\nEnter an integer: ";
    
    int n;
    cin >> n;

    v.push_back(n);
    cout << n << " added";
}

void print_list(vector <int> &v)
{
    if (v.size() > 0)
    {
        cout << "[ ";

        for (auto i : v)
            cout << i << " ";
        cout << "]";
    }
    else
        cout << "[] - the list is empty.";
}

char user_input()
{
    cout << "Enter an action: ";

    char c;
    cin >> c;

    if (c >= 'a' && c <= 'z')
        return c - 32;

    return c;
}

void display_menu()
{
    cout << "------------------------|\n";
    cout << "P: Print list\n";
    cout << "A: Add a no. to the list\n";
    cout << "M: Display mean\n";
    cout << "S: Smallest no.\n";
    cout << "L: Largest no.\n";
    cout << "E: Clear list\n";
    cout << "F: Look for a no.\n";
    cout << "C: Clear Screen\n";
    cout << "Q: Quit menu\n\n";
}

int main(){
    system("clear");
    
    char action;
    bool screen_cleared;
    vector <int> v;

    do {
        screen_cleared = 0;
        display_menu();

        action = user_input();

        switch (action)
        {
        case 'P':
            print_list(v);
            break;

        case 'A':
            append_no(v);
            break;

        case 'M':
            display_mean(v);
            break;

        case 'S':
            smallest_no(v);
            break;

        case 'L':
            largest_no(v);
            break;

        case 'E':
            clear_list(v);
            break;

        case 'F':
            find_no(v);
            break;

        case 'C':
            system("clear");
            screen_cleared = 1;
            break;

        case 'Q':
            cout << "Goodbye!\n";
            screen_cleared = true;
            break;
        
        default:
            cout << "Unknown action, please try again.";
        }

        if (!screen_cleared)
            cout << "\n\n";

    } while (action != 'Q');
    
    return 0;
}//*/

//--------------------------|
// Section 10: Encode/Decode
/*int main(){
    cout << "Enter a secret message:\n";

    string secret_msg;
    getline(cin, secret_msg);

    //encrypt secret msg
    string encoded_msg;

    for (auto c : secret_msg)
    {
        encoded_msg.push_back(c + 26);
    }
    
    
    cout << "\nEncoding: " << encoded_msg << endl;

    //DEBUG STATEMENT
    // cout << secret_msg.length() << " " << encoded_msg.length() << endl;

    //decode encoded msg
    string decoded_msg;

    for (auto e : encoded_msg)
    {
        decoded_msg.push_back(e - 26);
    }

    cout << "Decoding: " << decoded_msg << endl;
    return 0;
}//*/

//-------------------------------------------|
// Section 12: Array Multiplier
/*int *apply_all(int *a, size_t n, int *b, size_t m);
void print(int *a, size_t n);

int *apply_all(int *a, size_t n, int *b, size_t m)
{
    int *c = new int[n * m], k = 0;

    for (size_t i = 0; i < m; ++i)
    {
        for (size_t j = 0; j < n; ++j)
            c[k++] = b[i] * a[j];
    }

    return c;
}

void print(int *a, size_t n)
{
    for (size_t i = 0; i < n; ++i)
        cout << a[i] << " ";

    cout << endl;
}

int main()
{
    size_t n, m;
    cin >> n >> m;

    int a[n];

    for (size_t i = 0; i < n; ++i)
        cin >> a[i];

    int b[m];

    for (size_t i = 0; i < m; ++i)
        cin >> b[i];

    int *c = apply_all(a, n, b, m);

    print(c, n*m);
    delete[] c;

    return 0;
}//*/