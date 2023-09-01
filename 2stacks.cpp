#include <bits/stdc++.h>

void input(std::stack<int> st, int n)
{
    int i = 0;
    while (i < n)
    {
        int x; std::cin >> x;
        st.push(x);
        ++i;
    }
    
}

void find(std::stack<int> st1, std::stack<int> st2, int l)
{
    
}

int main()
{
    std::stack<int> st1, st2;
    int n, m, l;
    std::cin >> n >> m >> l;
    input(st1, n);
    input(st2, m);

    system("pause");
    return 0;
}