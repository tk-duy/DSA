#include <bits/stdc++.h>

int lru(int page[], int frame[], int m, int index, 
std::stack<std::unordered_map<int, int>> p, std::unordered_map<int, int> lru) 
{
    
    for (int i = index - 1; i >= 0; i--)
    {
        for (int j = 0; j < m; j++)
        {
            if (frame[j] == page[i]) 
            {
                // lru.first = page[i];
                // lru.second++;
                // if (lru.second == 1)
                p.push(lru);
            }
        }
    }
    std::map<int, int>::iterator pp;
    pp = p.top().end();
    return (*pp).second;
}

bool check(int frame[], int a, int m) 
{
    for (int i = 0; i < m; i++) 
    {
        if (frame[i] == a) return false;
    }
    return true;
}

int main() 
{
    
    int n; 
    std::cout << "Enter number of page: ";
    std::cin >> n;
    int page[n];
    std::cout << "Enter pages: ";
    for (int i = 0; i < n; i++)
    {
        std::cin >> page[i];
    }

    int m;
    std::cout << "Enter number of frame: ";
    std::cin >> m;
    int frame[m];
    for (int i = 0; i < m; i++)
    {
        frame[i] = INT32_MIN;
    }
    
    int pageFaults = 0;
    for (int i = 0; i < n; i++)
    {
        if (check(frame, page[i], m))
        {
            frame[lru(page, frame, m, i)] = page[i];
            pageFaults++;
        }
    }
    std::cout << "\nNumber of page fault: " << pageFaults << "\n";

    system("pause");
    return 0;
}