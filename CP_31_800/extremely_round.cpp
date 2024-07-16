#include <bits/stdc++.h>    

int main()
{
    int t{};
    std::cin>>t;

    for(int i{};i<t;i++)
    {
        int n{};
        std::cin>>n;

        int temp_n{n};

        int digits{};

        while(temp_n>0)
        {
            digits++;
            temp_n/=10;
        }

        temp_n=n;

        int x{9*(digits-1)};


        int power =  pow(10,digits-1);
        x+=(temp_n/power);


        std::cout<<x<<"\n";



    }
}