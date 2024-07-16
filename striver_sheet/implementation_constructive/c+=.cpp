#include <bits/stdc++.h>

int main()
{
    int t{};
    std::cin>>t;


    for(int i{};i<t;i++)
    {
        long long a{};
        long long b{};
        long long n{};

        std::cin>>a;
        std::cin>>b;
        std::cin>>n;

        long long temp_a{a};
        long long temp_b{b};

        int count{};


        while(a<=n && b<=n)
        {
            if(a<b)
            {
                a+=b;
                count++;
            }
            else
            {
                b+=a;
                count++;
            }

        }
        std::cout<<count<<"\n";
      

    }
}