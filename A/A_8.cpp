#include <iostream>

using namespace std;
void combination(int k,int n, bool member[]) {

    if (k<1)
    {
        for(int i=1; i<=n; i++)
        {
            if(member[i]) cout << i << ' ';
        }
        cout << endl;
        return;
    }

    member[k] = true;

    combination(k-1,n,member);

    member[k] = false;

    combination(k-1,n,member);

}
int main()
{
    int N;
    cin >> N;
    bool member[1000];
    combination(N,N,member);
    return 0;
}
