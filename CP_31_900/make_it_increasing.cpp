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

        for(int i{};i<n;i++)
        {
            std::cin>>arr[i];
        }

        int it{n-2};
        int op{};

        int flag{};

        while(it>=0)
        {
            if(arr[it]>=arr[it+1] && arr[it]>=0 && arr[it+1]!=0)
            {
                int temp{(std::log2(static_cast<double>(arr[it]/arr[it+1])))};
                arr[it]=arr[it]/pow(2,temp+1);
                op+=temp+1;    
            }

            if((arr[it]==0 && it!=0) || arr[it+1]==0)
            {
                flag=1;
                break;
            }

            it--;
        }

        if(flag==1)
        {
            std::cout<<-1<<"\n";
        }
        else
        {
            std::cout<<op<<"\n";
        }
    }
}