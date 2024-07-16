#include <bits/stdc++.h>

int main()
{
    std::string a;
    std::cin>>a;

    std::cout<<char(toupper(a[0]))+a.substr(1,a.size()-1);
}