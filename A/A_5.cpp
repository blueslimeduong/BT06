#include <iostream>

using namespace std;

long F(int n) {
   if (n == 0) return 0;
   if (n == 1) return 1;
   return F(n-1) + F(n-2);
}

long Fvonglap(int n)
{
    int s0=0, s1=1;
    while(n)
    {
        int tmp = s1;
        s1+=s0;
        s0=tmp;
        n--;
    }
    return s0;
}
int main()
{
    int N;
    cin >> N;
    cout << F(N) << endl;
    cout << Fvonglap(N) << endl;
    return 0;
}
// thu voi N=1000 -> dequy chay rat lau, vong lap chay nhanh
