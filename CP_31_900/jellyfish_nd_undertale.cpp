#include <bits/stdc++.h>

int main()
{
    int t{};
    std::cin>>t;

    for(int i{};i<t;i++)
    {
        unsigned long long a{};
        unsigned long long b{};
        unsigned long long n{};

        std::cin>>a;
        std::cin>>b;
        std::cin>>n;

        std::vector<int> arr(n);

        for(int j{};j<n;j++)
        {
            std::cin>>arr[j];
        }

        std::sort(arr.begin(),arr.end());

        unsigned long long count{};

        int j{};
        while(j<n)
        {
            if(b==1)
            {
                b+=arr[j];

                if(b>a)
                {
                    b=a;
                }

                b--;
                count++;
                j++;
            }
            else
            {
                count+=(b-1);
                b=1;
            }
        }
        std::cout<<count+b<<"\n";
    }
}