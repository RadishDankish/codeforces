#include <bits/stdc++.h>

void swap(int &a,int &b)
{
    a=a^b;
    b=a^b;
    a=a^b;
}

int main()
{
    int t{};
    std::cin>>t;

    while(t--)
    {
        int n{};
        std::cin>>n;

        std::vector<int> arr(n);

        for(int i{};i<n;i++)
        {
            std::cin>>arr[i];
        }

        int even{};
        int odd{1};

        int count{};
        int flag{};

        while(even<n && odd<n)
        {
            while(even<n && arr[even]%2==0)
            {
                even+=2;
            }
            
            while(odd<n && arr[odd]%2!=0)
            {
                odd+=2;
            }

            if(even<n && odd<n)
            {
                count++;
                std::swap(arr[even],arr[odd]);
            }
        }

        if(n==1)
        {
            if(arr[0]%2==0)
            {
                std::cout<<count<<"\n";
            }
            else
            {
                std::cout<<-1<<"\n";
            }
        }
        else if(even>=n && odd>=n)
        {
            std::cout<<count<<"\n";
        }
        else
        {
            std::cout<<-1<<"\n";
        }
    }
}