#include <bits/stdc++.h>
using namespace std;

// PRATA - Roti Prata
/*int prata(int p, int ranks[], int l)
{
    //2D array to store no of pratas cooked by cook of rank[i] in time t
    //and total time elapsed after having cooked the next prata
    int prata_status[l][2];

    for (size_t i = 0; i < l; ++i)
        prata_status[i][0] = 0, prata_status[i][1] = ranks[i];

    int t = 1; //min time required to make p pratas

    while (t)
    {
        for (size_t i = 0; i < l; ++i)
        {
            if (t == prata_status[i][1])
            {
                if (--p == 0)
                    return t;

                ++prata_status[i][0];

                prata_status[i][1] += ranks[i] * (prata_status[i][0] + 1);
            }
        }

        ++t;
    }
    
    return t;
}

int main(){
    int t;
    cin >> t;

    int results[t];

    for (size_t i = 0; i < t; ++i)
    {
        int p; //no of prata ordered
        cin >> p;

        int l; //no of cooks
        cin >> l;

        int ranks[l]; //ranks of l cooks

        for (size_t j = 0; j < l; ++j)
        {
            int x;
            cin >> x;

            ranks[j] = x;
        }

        results[i] = prata(p, ranks, l);
    }

    for (size_t i = 0; i < t; ++i)
        cout << results[i] << endl;
    
    return 0;
}//*/