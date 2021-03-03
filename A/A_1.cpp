#include <iostream>

using namespace std;

void diachi (int arr[])
{
    cout << "dia chi bien mang(ham): " << &arr << endl;
    cout << "dia chi phan tu dau(ham): " << &arr[0] <<endl;
    return;
}
int main()
{
    int arr[10];
    cout << "dia chi bien mang: " << &arr << endl;
    cout << "dia chi phan tu dau: " << &arr[0] <<endl;
    diachi(arr);
    return 0;
}
// dia chi phan tu dau trong ham va trong main la giong nhau
// tuy nhien dia chi cua bien mang trong main giong dia chi ptu dau, con trong ham thi khac nhau
