#include <bits/stdc++.h>
using namespace std;
void towerOfHanoi(int n, char source, char dest, char auxi)
{
    if (n == 0) {
        return;
    }
    towerOfHanoi(n - 1, source, auxi, dest);
    cout << "Move disk " << n << " source " << source
         << " dest " << dest<< endl;
    towerOfHanoi(n - 1, auxi, dest, source);
}
int main()
{
    int N = 3;
    towerOfHanoi(N, 'A', 'C', 'B');
    return 0;
}
