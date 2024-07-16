#include <bits/stdc++.h>

int main()
{
    int t{};
    std::cin>>t;

    for(int i{};i<t;i++)
    {
        long long a{};
        long long b{};
        long long c{};
        long long d{};

        std::cin>>a;
        std::cin>>b;
        std::cin>>c;
        std::cin>>d;

        int temp{};

        
        if(d-b<0 || d-b<c-a)
        {
            std::cout<<-1<<'\n';
        }
        else
        {

            temp+=abs(d-b);
            a+=abs(d-b);

            temp+=a-c;
            std::cout<<temp<<"\n";
        }
    }
    
}