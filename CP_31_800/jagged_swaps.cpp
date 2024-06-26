#include <bits/stdc++.h>

void swap(int &a,int &b)
{
    int temp{b};

    b=a;
    a=temp;
}

int main()
{
    int t{};
    std::cin>>t;

    for(int i{};i<t;i++)
    {
        int n{};
        std::cin>>n;

        std::vector<int> arr(n);

        for(int j{};j<n;j++)
        {
            std::cin>>arr[j];
        }

        int k{1};

        while(k<n-1)
        {
            if(arr[k]>arr[k+1] && arr[k]>arr[k-1])
            {
                swap(arr[k],arr[k+1]);
                k=1;
            }
            else
            {
                k++;
            }
        }

        int flag{};
        k=0;
        while(k<n-1)
        {
            if(arr[k]>arr[k+1])
            {
                flag=1;
                std::cout<<"NO\n";
                break;
            }
            k++;
        }

        if(flag==0)
        {
            std::cout<<"YES\n";
        }

        
    }
}