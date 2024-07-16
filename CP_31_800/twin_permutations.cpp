#include <bits/stdc++.h>

int main()
{
    int t{};
    std::cin>>t;

    for(int i{};i<t;i++)
    {
        int n{};
        std::cin>>n;

        std::vector<int> a(n);
        std::vector<int> b(n);

        for(int j{};j<n;j++)
        {
            std::cin>>a[j];
        }

        int k{};

        while(k<n-1)
        {
            if(a[k]<a[k+1])
            {
                b[k]=a[k];
            }
            else
            {
                b[k]=a[k+1];
                
            }
            k++;
        }

        for(int j{};j<n;j++)
        {
            std::cout<<b[j]<<" ";
        }

        std::cout<<std::endl;
    }
}