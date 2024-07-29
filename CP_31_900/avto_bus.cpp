#include <bits/stdc++.h>

int main()
{
    int t{};
    std::cin>>t;

    while(t--)
    {
        long long n{};
        std::cin>>n;

        long long max{};
        long long min{};
        if(n%2==0 && n!=2)
        {
            if(n%6==0 && n%4==0)
            {
                min=n/6;
                max=n/4;

                std::cout<<min<<" "<<max<<"\n";
            }
            else if(n%6==0)
            {
                min=n/6;
                max=(n-6)/4;
                std::cout<<min<<" "<<max+1<<"\n";
            }
            else if(n%4==0)
            {
                max=n/4;
                long long i{};
                long long temp{n};
                while(temp%6!=0 && temp>0)
                {
                    temp-=4;
                    i++;
                }

                min=(temp/6)+i;
                std::cout<<min<<" "<<max<<"\n";
            }
            else if(n%6==4)
            {
                max=((n-6)/4)+1;
                min=((n-4)/6)+1;

                std::cout<<min<<" "<<max<<"\n";
            }
            else
            {
                max=((n-6)/4)+1;
                min=((n-8)/6)+2;

                std::cout<<min<<" "<<max<<"\n";
            }
        }
        else
        {
            max=-1;
            std::cout<<max<<"\n";
        }
    }
}