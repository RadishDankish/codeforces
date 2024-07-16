#include <bits/stdc++.h>

int main()
{
    std::string a;
    std::cin>>a;

    std::map <char,int> mpp;

    int it{};
    while(it<a.size())
    {
        mpp[a[it]]++;
        it++;
    }

    if(mpp.size()%2==0)
    {
        std::cout<<"CHAT WITH HER!";
    }
    else
    {
        std::cout<<"IGNORE HIM!";
    }

}