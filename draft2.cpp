// Day ngoac hop le "([{}])"
#include <bits/stdc++.h>

bool isOpen(char ch)
{
    return (ch == '(' || ch == '{' || ch == '[' || ch == '<');
}

bool isClose(char ch)
{
    return (ch == ')' || ch == '}' || ch == ']' || ch == '>');
}

bool dongCap (char mo, char dong)
{
    return ((mo == '(' && dong == ')') ||
            (mo == '{' && dong == '}') ||
            (mo == '[' && dong == ']') ||
            (mo == '<' && dong == '>') );
}
std::string check (std::string s)
{
    int n = (int) s.length();
    std::stack <char> st;

    for (int i = 0; i < n; i++)
    {
        if (isOpen(s[i])) st.push(s[i]);
        else if (!isClose(s[i])) continue;
        else
        {
            if (st.empty()) return "no";
            if (!dongCap((st.top()), s[i])) return "no";
            st.pop();
        }
    }
    if (!st.empty()) return "no";
    return "yes";
}

int main() {
    int n; std::cin >> n;
    std::string s[n];
    for (int i = 0; i < n; i++) {
        std::cin >> s[i];
        std::cin.ignore();
        std::cout << check(s[i]) << "\n";
    }

    system("pause");
    return 0;
}
