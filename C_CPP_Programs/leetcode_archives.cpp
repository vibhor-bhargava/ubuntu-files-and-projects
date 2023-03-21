#include <bits/stdc++.h>
using namespace std;

//-----------------------------|
// Rotate an Array
/*void rotate(vector<int>& a, int k)
{
    size_t i = 0, place_at, n = a.size();
    int temp, elements_displaced, next;

    while (k)
    {
        temp = a[0], elements_displaced = 0;

        while (elements_displaced < n)
        {
            place_at = (i+1) % n;

            next = temp;
            temp = a[place_at];
            a[place_at] = next;
            i = place_at;
            ++elements_displaced;
        }

        --k;
    }
}

int main(){
    vector <int> a {-1,-100,3,99};

    int k;
    cin >> k;

    rotate(a,k);

    for (size_t i = 0; i < a.size(); ++i)
    {
        cout << a[i] << " ";
    }
    
    cout << endl;
    return 0;
}//*/