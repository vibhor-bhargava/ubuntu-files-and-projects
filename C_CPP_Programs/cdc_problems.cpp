#include <bits/stdc++.h>

using namespace std;

// Chocolate Game
/*int divide_chocolate(int n)
{
    vector <int> v;

    if (n % 2 == 0)
    {
        v.push_back(n);

        bool impasse_reached = 0;

        for (int i = 0; i < v.size(); ++i)
        {
            int element = v[i] / 2;

            if (element % 2 == 0)
            {
                for (int i = 0; i < 2; ++i)
                    v.push_back(element);
            }

            else
                impasse_reached = 1;

            if (impasse_reached)
                break;
        }
    }

    return v.size();
}

int main(){
    int n, m;
    cin >> n >> m;

    int t = divide_chocolate(n);
    t += divide_chocolate(m);

    if (t % 2)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    
    return 0;
}//*/