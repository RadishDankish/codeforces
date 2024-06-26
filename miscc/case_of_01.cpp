#include <bits/stdc++.h>

int main()
{
    int n{};
    std::cin>>n;

    std::cin.ignore();

    std::string a{}; 
    std::getline(std::cin,a);



    int zero{};
    int one{};

    for(int i{};i<n;i++)
    {
        if(a[i]=='0')
        {
            zero++;
        }
        else if(a[i]=='1')
        {
            one++;
        }
    }

    int temp{zero-one};

    if(temp<0)
    {
        std::cout<<(-1*temp);

    }
    else
    {
        std::cout<<temp;
    }
}