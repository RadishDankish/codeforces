#include <bits/stdc++.h>

int main()
{
    int t{};
    std::cin>>t;

    while(t--)
    {
        int n{};
        int q{};
        int sum{};
            
        std::cin>>n;
        std::cin>>q;

        std::vector<int> arr(n);
        std::vector<int> pre_arr(n);

        for(int i{};i<n;i++)
        {
            std::cin>>arr[i];
            pre_arr[i]=arr[i];
            sum+=arr[i];
        }

        for(int i{1};i<n;i++)
        {
            pre_arr[i]+=pre_arr[i-1];  
            // std::cout<<pre_arr[i]<<"\n"; 
        }

        int arr_q[q][3];

        for(int i{};i<q;i++)
        {
            for(int j{};j<3;j++)
            {
                std::cin>>arr_q[i][j];
            }
        }

        
        for(int i{};i<q;i++)
        {
            int l{arr_q[i][0]};
            int r{arr_q[i][1]};
            int k{arr_q[i][2]};
            int lr{};

            if(l==1)
            {
                lr = pre_arr[r-1];
            }
            else
            {
                lr = pre_arr[r-1]-pre_arr[l-2];
            }
            
            
            int t{r-l+1};

            if(((sum-lr)+k*t)%2!=0)
            {
                std::cout<<"YES\n";
            }
            else
            {
                std::cout<<"NO\n";
            }
        }


    }
}