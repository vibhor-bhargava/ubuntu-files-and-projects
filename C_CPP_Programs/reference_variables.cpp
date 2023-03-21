#include <bits/stdc++.h>
using namespace std;

// Working of const ref parameter
const int a = 3;

void DoWork(const int &n)
{
    const_cast<int&>(n) = 22;
}

int main()
{
    DoWork(a);
    cout << a << endl;
}