#include <bits/stdc++.h>
#include "useful_functions.cpp"

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

//--------------------------------|
// Unsigned Integer to Binary Form
/*int main(){
    int n;
    cin >> n;

    int bin {}, i {};

    while (n)
        bin += (n & 1) * pow(10, i++), n >>= 1;
    
    cout << bin << endl;
    return 0;
}//*/

//--------------------------------|
// -ve Integer to Binary Form
/*int main(){
	int n;

	do {
		cin >> n; //give -ve input
	} while (n > 0); //this condition makes sure that no +ve int goes through	

	char bin[33] {}; //char arr to store n (-ve) in binary form

	for (size_t i = 0; i < 32; i++)
		bin[i] = '0';

	int i = 31; //starting to store bits from last bit index of bin[]

	while (n)
	{
		bin[i--] = (-n) % 2 + '0',
		n /= 2;
	}

	//2's complement implementation
	for (int i = 31; i > 0; i--)
	{
		if (bin[i] == '1') //find the rightmost 1-bit in bin[]
		{
			for (int j = i-1; j >= 0; j--)
			{
				char bit = bin[j];
				bin[j] = bit == '0' ? '1' : '0'; //invert all bits preceding the rightmost 1-bit
			}

			break;
		}
	}	
    
	cout << bin << endl;
    return 0;
}//*/

//--------------------------------------------|
// Binary to Unsigned Integer
/*int main(){
	int n;
	cin >> n; //give input in binary

	int dec {}, i {};

	while (n)
	{
		if (n % 10)
			dec += pow(2, i);
		++i, n /= 10;
	}
	
	cout << dec << endl;
	return 0;
}//*/

//-------------------------------------------------|
// Swap Alternate Elements in an Array
/*void swap_alt(int *a, int n)
{
	for (int i = 0; i < n-1; i += 2)
	{
		int t = a[i];
		a[i] = a[i+1], a[i+1] = t;
	}	
}

int main(){
	cout << "How many nos.? ";
	int n;
	cin >> n;

	int a[n] {};
	
	for (size_t i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	swap_alt(a, n);
	
	for (size_t i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	
	cout << endl;
	return 0;
}//*/

//------------------------------------------------------------|
// Find Pivot Index in a Sorted & Rotated (by 2 indices) Array
/*int pivot_index(vector <int> &v)
{
    size_t l {}, h {v.size() - 1};

    while (l <= h)
    {
        int m = l + (h-l)/2;

        if (v[m-1] > v[m] && v[m] <= v[m+1])
            return m;

        else if (v[m-1] <= v[m] && v[m] > v[m+1])
            l = m+1;

        else
            h = m-1;
    }
    
    return -1;
}

int main(){
    int n;
    cin >> n;

    vector <int> v;

    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;

        v.push_back(x);
    }

    cout << pivot_index(v) << endl;
    return 0;
}//*/

//---------------------------------------------|
// Square Root of an Integer
/*inline double abs(double x)
{
    return x >= 0 ? x : -x;
}

double sqrtN(long long int N)
{
    double l = 0, h = N, e = 0.001, m = (l+h)/2, n = m * m;

    while (abs(n - N) >= e)
    {
        if (n == N)
            return m;

        else if (n > N)
            h = m - 1;

        else
            l = m + 1;

        m = (l+h)/2, n = m * m;
    }
    
    return m;
}

int main(){
    int n;
    cin >> n;
    
    cout << sqrtN(n) << endl;
    return 0;
}//*/

//--------------------------|
// Length of a String
/*int main(){
    string s;
    getline(cin, s);

    int l = 0;
    char *p = &s[0];

    while (*p++ != 0)
        ++l;

    cout << l << endl;
    return 0;
}//*/

//----------------------------------|
// Jagged Array
/*void print(int **a, int m, int *c)
{
    for (int i = 0; i < m; ++i)
    {
        int n = c[i];

        for (int j = 0; j < n; ++j)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

int main(){
    int m;
    cin >> m;

	//a: arr of ptrs, c: col lengths of m rows
    int **a = new int*[m], *c = new int[m];

    for (int i = 0; i < m; ++i)
    {
        cin >> c[i];
        a[i] = new int[c[i]];
    }

    //input
    for (int i = 0; i < m; ++i)
    {
        int n = c[i];

        for (int j = 0; j < n; ++j)
            cin >> a[i][j];
    }

    cout << endl;
    print(a, m, c);

	//free the allocated heap
	for (int i = 0; i < m; ++i)
		delete[] a[i];

	delete[] a;
	delete[] c;
    
    return 0;
}//*/

//---------------------------------------|
// Say Digits
string say_digits(int n)
{
    if (!n) //n = 0
        return "Zero";

    string num,
    s[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};    

    //n > 0
    while (n)
    {
        int digit = n % 10;

        num += s[digit] + " ";
        n /= 10;
    }

    return reverseWords(num);
}