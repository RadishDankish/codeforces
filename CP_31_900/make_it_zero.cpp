#include <bits/stdc++.h>

int main()
{
    int t{};
    std::cin>>t;

    while(t--)
    {
        int n{};
        std::cin>>n;

        int i{};

        std::vector<int> arr(n);

        while(i<n)
        {
            std::cin>>arr[i];
            i++;
        }

        if(n%2==0)
        {
            std::cout<<2<<"\n";
            std::cout<<1<<" "<<n<<"\n";
            std::cout<<1<<" "<<n<<"\n";
        }
        else
        {
            std::cout<<4<<"\n";
            std::cout<<1<<" "<<2<<"\n";
            std::cout<<1<<" "<<2<<"\n";
            std::cout<<2<<" "<<n<<"\n";
            std::cout<<2<<" "<<n<<"\n";
        }
    }
}