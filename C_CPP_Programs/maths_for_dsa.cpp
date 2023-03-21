#include <bits/stdc++.h>
using namespace std;

// --------------------------------------------------|
//1. Determine if a no. is prime
bool is_prime(int n)
{
    if (n <= 1)
        return false;

    for (size_t i = 2; i*i <= n; ++i)
    {
        if (!(n % i))
            return false;
    }

    return true;
}

//--------------------------------------------|
//2. Sieve of Eratosthenes
vector<int> simple_sieve(int n)
{
    if (n < 3)
        return {};

    vector<int> ans;
    bool states[n];

    for (int i = 2; i < n; ++i)
        states[i] = 1;
    
    int i = 2;

    while (i*i < n)
    {
        if (states[i])
        {
            ans.push_back(i);

            for (int j = i*i; j < n; j += i)
                states[j] = 0;
        }

        ++i;
    }

    while (i < n)
    {
        if (states[i])
            ans.push_back(i);

        ++i;
    }

    return ans;
}

void find_prime_nos_in_segment(vector<int>& primes, int low, int high, int primes_upto_root)
{
    int segment_length = high - low + 1; 
    bool states[segment_length];

    for (int i = 0; i < segment_length; ++i)
        states[i] = true;

    for (int i = 0; i < primes_upto_root; ++i)
    {
        int p = primes[i], j;
            
        if (p*p < low)
        {
            j = low / p * p;
            
            if (j < low)
                j += p;
        }
        
        else
            j = p*p;

        while (j <= high)
            states[j - low] = false, j += p;
    }

    for (int i = 0; i < segment_length; ++i)
    {
        if (states[i])
            primes.push_back(low + i);
    }
}

vector<int> segmented_sieve(int n)
{    
    //generate all prime nos. till sqrt(n)
    int root = sqrt(n);
    vector<int> primes = simple_sieve(root + 1);

    //in every interval [l, h] of length 'root'
    //cancel all the composite nos.
    //and add all prime nos. to primes[]
    int low = root + 1, primes_upto_root = primes.size();

    while (n - low >= root)
    {
        find_prime_nos_in_segment(primes, low, low + root - 1, primes_upto_root),
        low += root;
    }

    //to find p. nos. in the very last interval of [2, n-1]
    if (low < n)
        find_prime_nos_in_segment(primes, low, n - 1, primes_upto_root);

    return primes;
}

//-------------------------------------------------|
// Square Root of an Integer
int sqrt_int(long long int N)
{
    unsigned long long l = 0, h = N;

    while (l <= h)
    {
        unsigned long long m = (l+h)/2, n = m * m;

        if (n == N)
            return m;

        else if (n > N)
            h = m - 1;

        else
            l = m + 1;
    }
    
    return h;
}

double sqrt_frac(int p, double n, double s)
{
    if (s*s == n)
        return s;

    double f = 1;

    //determining sq root upto 3 correct decimal places
    for (int i = 0; i < p; ++i)
    {
        f /= 10;

        float t = s + f; 

        while (t * t < n)
            s += f, t += f;
    }

    return s;
}

//----------------------------------------------------------|
// Square Root: Newton-Raphson Method
double sqrt(double n)
{
    double x = n, root = (x + n/x) / 2;

    while (abs(x - root) > 0.001)
        x = root, root = (x + n/x) / 2;

    return root;
}

//---------------------------------|
// GCD / HCF
int gcd(int a, int b)
{
    int r = a % b;

    while (r)
        a = b, b = r, r = a % b;

    return b;
}

//---------------------------------------------------|
// LCM
int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

//-------------------------------------------------|
// Factorial Under Modulo m
unsigned long factorial_modulo_m(int n, int m)
{
    unsigned long f = 1 % m;

    while (n)
        f = f * (n-- % m) % m;

    return f;
}