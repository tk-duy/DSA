#include <bits/stdc++.h>

bool bs(int a[], int x, int lo, int hi) {
    if(hi >= lo) {
        int mid = (hi+lo)/2;
        if(a[mid] == x) return true;
        else if(a[mid] < x) return bs(a, x, mid+1, hi);
        else return bs(a, x, lo, mid-1);
    }
    else return false;
}

int main() {
    int n, q; std::cin >> n >> q;
    int a[n];
    for(int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    
    while(q--) {
        int x; std::cin >> x;
        if(bs(a,x,0,n-1)) std::cout << "YES\n";
        else std::cout << "NO\n";
    }
    return 0;
}