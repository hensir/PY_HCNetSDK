#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main()
{
    typedef struct tagNET_DVR_SOCKS_PROXY_PARA
    {
        BYTE byIP[129];
        BYTE byAuthType;
        WORD wPort;
        BYTE byRes2[64];
    } NET_DVR_SOCKS_PROXY_PARA, * LPNET_DVR_SOCKS_PROXY_PARA;


    int arr[] = { 1, 2, 3, 4, 5 };
    const int n = sizeof(arr) / sizeof(arr[0]);

    std::array<int, n> first;
    std::array<int, n > arr1[5];


    std::copy(std::begin(arr), std::end(arr), first.begin());


    for (int a = 0; a < 5; a++)
    {
        std::cout << first[a] << ' ';
        arr1[a] = first[a];
    }

    cout << arr[0] << endl;
    cout << arr1[0] << endl;

    cout << typeid(arr).name() << "\n";
    cout << typeid(arr1).name() << "\n";


    std::cout << std::endl;


    return 0;
}
// c风格数组转std::array 用std::copy
// std::array转c风格数组用for赋值

// 两个函数，传c风格数组返回std::array
// 反之

// 一定要可以自动判断类型
auto trans(auto i) {


}