#include <bits/stdc++.h>

int main()
{
    int t{};
    std::cin>>t;

    for(int i{};i<t;i++)
    {
        int x{};
        std::cin>>x;

        int temp_x{x};

        int digits{};

        while(temp_x>0)
        {
            digits++;
            temp_x/=10;
        }

        int last_dig{x%10};

        std::cout<<((last_dig-1)*10)+(((digits*(digits+1))/2))<<"\n";
    }
}