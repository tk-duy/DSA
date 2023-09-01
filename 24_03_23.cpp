#include <bits/stdc++.h>

int main()
{
    int n, m; 
    std::cin >> n;
    std::vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int x; std::cin >> x;
        a.push_back(x);
    }

    std::cin >> m;
    std::vector<int> b;
    for (int i = 0; i < m; i++)
    {
        int x; std::cin >> x;
        b.push_back(x);
    }

    std::map<int, int> m1, m2;
    for (int i = 0; i < n; i++)
    {
        m1[a[i]]++;
    }

    for (int i = 0; i < m; i++)
    {
        m2[b[i]]++;
    }

    for (auto x : m1) 
    {
        for (auto y : m2)
        {
            if (y.first == x.first && x.second != y.second)
            {
                std::cout << y.first << " ";
            }
        }
    }

    system("pause");
    return 0;
}