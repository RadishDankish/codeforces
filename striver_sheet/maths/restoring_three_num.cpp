#include <bits/stdc++.h>

int main()
{
    int x1{};
    int x2{};
    int x3{};
    int x4{};

    std::cin>>x1;
    std::cin>>x2;
    std::cin>>x3;
    std::cin>>x4;

    std::vector<int> arr{x1,x2,x3,x4};

    std::sort(arr.begin(),arr.end());

    std::cout<<arr[3]-arr[0]<<" "<<arr[3]-arr[1]<<" "<<arr[3]-arr[2];

}