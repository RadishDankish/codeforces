#include <bits/stdc++.h>

int main()
{
    int t{};
    std::cin>>t;

    while(t--)
    {
        int n{};
        std::cin>>n;

        std::vector<int> arr(n);

        int it{};
        while(it<n)
        {
            std::cin>>arr[it];
            it++;
        }

        
        std::sort(arr.begin(),arr.end());

        int longest_seq{};
        int ans{};

        it=0;
        int temp{1};

        while(it<n-1)
        {
            if(arr[it]!=arr[it+1])
            {
                if(temp>longest_seq)
                {
                    longest_seq=temp;
                }
                temp=1;
            }
            else
            {
                temp++;
            }
            it++;
        }

        if(temp>longest_seq)
        {
            longest_seq=temp;
        }
        
        int tempx{longest_seq};
        while(2*tempx<n)
        {
            ans++;
            ans+=tempx;  
            tempx*=2;
        }

        if(n-tempx!=0)
        {
            ans+=n-tempx+1;
        }

        if(longest_seq==n)
        {
            std::cout<<0<<"\n";
        }
        else
        {
            std::cout<<ans<<"\n";
        }
        


    }
}