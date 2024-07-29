#include <bits/stdc++.h>

int main()
{
    int n{};
    std::cin>>n;

    std::string t{};
    std::cin>>t;

    int sum_it{1};
    int i{1};

    std::string temp="";

    while(sum_it<=n)
    {
        temp+=t[sum_it-1];
        sum_it+=i;
        i++;
    } 

    std::cout<<temp;
}