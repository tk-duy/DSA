// VECTOR
// #include <bits/stdc++.h>

// int main() 
// {
//     int n; std::cin >> n;
//     std::vector<int> v;
//     for (int i = 0; i < n; i++)
//     {
//         int x; std::cin >> x;
//         v.push_back(x);
//     }
//     // std::vector<int>::iterator it ~ auto -- v.begin() -- v.end()
//     for (int x : v)
//     {
//         std::cout << x << "\n";
//     }
    
//     return 0;
// }

// SET

// #include <bits/stdc++.h>

// // set.insert();
// // set.size();
// // set.find();
// // set.count();
// // set.erase();
// // multiset
// //unoderset: O(1) or O(N)
// // complexity = O(log n)

// int main() 
// {
//     std::multiset<int> ms;
//     for (int i = 0; i < 5; i++) 
//     {
//         int x; std::cin >> x;
//         ms.insert(x);
//     }

//     for (int x : ms) 
//     {
//         std::cout << x << " ";
//     }


//     std::cout << std::endl;
//     return 0;
// }

#include <bits/stdc++.h>


int main() 
{
    int n; std::cin >> n;
    std::map<int, std::string> mp;
    while (n--)
    {
        int ID; 
        std::string ht; 
        

        int x; std::cin >> x;
        if(x == 1)
        {
            std::cin >> ID;
            std::cin.ignore();
            std::getline(std::cin, ht);
            mp[ID] = ht;
        }
        if(x == 2) 
        {
            std::cin >> ID;
            mp.erase(ID);
        }
        if ( x == 3)
        {
            std::cin >> ID;
            if (mp[ID] ==  "")  std::cout << "n/a";
            else std::cout << mp[ID];
        }

    }

    system("pause");
    return 0;
}