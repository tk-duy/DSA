#include <bits/stdc++.h>

int main()
{
    // Hang doi:
    // std::queue<int> q;
    // int n; std::cin >> n;
    // int x;
    // int count = 0;
    // while(count < n) 
    // {
    //     int req; std::cin >> req;
    //     if(req == 1) 
    //     {
    //         std::cin >> x;
    //         q.push(x);
    //         count++;
    //     }
    //     else if (req == 2) 
    //     {
    //         q.pop();
    //         count++;
    //     }
    //     else if (req == 3)
    //     {
    //         std::cout << q.back() << '\n';
    //         count++;
    //     }
    // }

    //emplace and push


    // std::queue<Point_3D> multiverse;

    // First, Object of that(multiverse) class has to be created, then it's added to the stack/queue
    // Point_3D pt {32, -2452};
    // multiverse.push(pt);

    // // Here, no need to create object, emplace will do the honors
    // multiverse.emplace(32, -2452);

    // multiverse.emplace(455, -3);
    // multiverse.emplace(129, 4, -67);

    // int *st = new int[100];
    // if (st == NULL) std::cout << "true" << "\n";
    // std::cout << *st;
    std::stack<int> st;
    std::cout << st.top();

    system("pause");
    return 0;
}