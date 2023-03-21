#include <bits/stdc++.h>
#include "useful_functions.cpp"

using std::cin;
using std::cout;
using std::vector;
using std::string;
using std::swap;
using std::endl;

// Reverse String
void reverse_string(string &s, int i, size_t n)
{
    if (i == n/2)
        return;

    swap(s[i], s[n-1-i]);
    reverse_string(s, i+1, n);
}

//-------------------------------------|
// Euclidean Algorithm
int gcd(int a, int b)
{
    int r = a % b;

    if (!r)
        return b;

    return gcd(b, r);
}

// Extended Euclidean Algorithm
int gcd(int a, int b, int &x, int &y)
{
    if (!b)
    {
        x = 1, y = 1;
        return a;
    }

    int x1, y1, g = gcd(b, a % b, x1, y1);

    x = y1, y = x1 - y1 * (a / b);
    return g;
}

//--------------------------------------------|
// Modular Exponentiation
int modularExponentiation(int x, int n, int m)
{
	if (n == 1) //base case
        return x % m;

    //to prevent int overflow in case y = x % m is too large
    unsigned long long y = modularExponentiation(x, n/2, m);
    
    if (n % 2) //n is odd
        return y * y % m * (x % m) % m;

    else //n is even
        return y * y % m;
}

//-------------------------------------------|
// Factorial Under Modulo
unsigned int factorial_modulo_m(int n, int m)
{
    if (!n)
        return 1 % m;

    return static_cast<unsigned int> (n) % m * factorial_modulo_m(n-1, m) % m;
}

//---------------------------|
// a Raised to n
int power(int a, int n)
{
    if (!n)
        return 1;

    return a * power(a, n-1);
}

//---------------------|
// Count down to 1
/*void print_count(int n)
{
    cout << n << " ";

    if (n <= 1)
    {
        cout << endl;
        return;
    }

    print_count(n-1);
}//*/

void print_count(int n)
{
    if (n <= 0) {
        cout << endl;
        return;
    }

    cout << n << " ";

    print_count(n-1);
}

//------------------------------------|
// nth Fibonacci No.
int fib(int n)
{
    if (n < 2)
        return n;

    static vector<int> mem (n + 1);

    if (mem[n])
        return mem[n];

    mem[n] = fib(n-1) + fib(n-2);

    return mem[n];
}

//---------------------------------|
// Say Digits
string say_digits(int n, int k = 0)
{
    if (!n)
        return "Zero";
    
    static string s[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

    if (n > 0 & n < 10)
        return s[n];

    string num;
    num += s[n % 10] + " " + say_digits(n/10, k+1);

    if (k > 0)
        return num;

    return reverseWords(num);
}

//---------------------------------------------|
// Check if an Array is Sorted
bool is_array_sorted(vector<int>& a, int i = 0)
{
    static int n = a.size();

    if (i == n || i == n-1) //if n = 0 or i points to last index of a[]
        return true;

    int j = i+1;

    if (a[i] > a[j])
        return false;

    return is_array_sorted(a, j);
}

//--------------------------------|
// Sum of Array Elements
int add(vector<int>& a, int i = 0)
{
    static int n = a.size();

    if (i == n) //if len(a) = 0
        return 0;

    return a[i] + add(a, i+1);
}

//----------------------------|
// Fast Power
int power(int a, int b)
{
    if (b == 0)
        return 1;

    int ans = power(a, b / 2);

    if (b & 1) //b odd
        return ans * ans * a;

    //b even
    return ans * ans;
}