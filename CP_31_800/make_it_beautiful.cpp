#include <bits/stdc++.h>

void swap(int &a,int &b)
{
    a=a^b;
    b=b^a;
    a=a^b;
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

        int j{};

        int flag{};

        while(j<n-1)
        {
            if(arr[j]!=arr[j+1])
            {
                flag=1;
                if(arr[n-1]!=arr[1])
                {    
                    swap(arr[0],arr[n-1]);
                }
                break;
            }
            j++;
        }

        if(flag==0)
        {
            std::cout<<"NO\n";
        }
        else
        {
            std::cout<<"YES\n";
            for(int k{};k<n;k++)
            {
                std::cout<<arr[k]<<" ";
            }
            std::cout<<std::endl;
        }
    }
}