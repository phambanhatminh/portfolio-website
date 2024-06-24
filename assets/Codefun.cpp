#include<bits/stdc++.h>

using namespace std;

int main()
{
    char x,y;
    int n,m;
    cin >> x >> y;
    n = x-y-1;
    m = y-x-1;
    if (x>y) cout << n;
    else cout << m;
    return 0;
}