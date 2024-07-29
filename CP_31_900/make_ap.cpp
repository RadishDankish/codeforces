#include <bits/stdc++.h>


int main()
{
    int t{};
    std::cin>>t;

    while(t--)
    {
        int a{};
        int b{};
        int c{};

        std::cin>>a;
        std::cin>>b;
        std::cin>>c;

        int flag{};
        int d1{b-a};
        int d2{c-b};
        int d3{c-a};
        int temp{(a+c)/2};
        int temp2{a+c};
        
        if(d1==d2)
        {
            flag=1;
        }
        else
        {
            if((b+abs(d2))%a==0)
            {
                flag=1;
            }
            else if(abs(d3)%2==0 && abs(d3)%b==0)
            {
                flag=1;
            }
            else if((b+abs(d1))%c==0)
            {
                flag=1;
            }
        }

        if(flag==1)
        {
            std::cout<<"YES\n";
        }
        else
        {
            std::cout<<"NO\n";
        }
    
    }
}