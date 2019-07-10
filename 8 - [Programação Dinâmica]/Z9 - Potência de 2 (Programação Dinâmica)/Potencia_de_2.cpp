#include <bits/stdc++.h>
using namespace std;


signed main()
{
    int n, max_soma = 0;
    cin >> n;
    
    vector<int> caras(n);
    for(int i = 0; i < n; ++i)
    {
        cin >> caras[i];
        max_soma += caras[i];
    }
    
    vector<int> somas(max_soma+2, -1);
    somas[0] = 0;
    for(int i = 0; i < n; ++i)
    {
        const int elem = caras[i];
        for(int j = max_soma; j >= 0; --j)
        {
            if(j + elem <= max_soma && somas[j] != -1)
            {
                somas[j + elem] = max(somas[j + elem], somas[j] + 1);
            }
        }
    }
    
    for(int i = 16; i >= 0; --i)
    {
        if((1 << i) <= max_soma && somas[1 << i] != -1)
        {
            cout << i << endl;
            cout << somas[1 << i] << endl;
            return 0;
        }
    }
    
    cout << "0" << endl;
}