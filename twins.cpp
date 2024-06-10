#include <bits/stdc++.h>

int main()
{
    int n{};
    std::cin>>n;

    std::vector<int> v(n);

    int sum{};


    for(int i{};i<n;i++)
    {
        std::cin>>v[i];
        sum+=v[i];
    }

    sort(v.begin(),v.end(), std::greater<int>());

    int minimum_coin_sum{};

    int p{};

    while(minimum_coin_sum<=(sum/2))
    {
        minimum_coin_sum+=v[p];
        p++;
    }

    std::cout<<p;




}