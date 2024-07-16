#include <bits/stdc++.h>

int main()
{
    int t{};
    std::cin>>t;

    for(int i{};i<t;i++)
    {
        int n{};
        std::cin>>n;

        std::vector<int> arr(n);

        std::queue<int> queue;

        for(int j{};j<n;j++)
        {
            std::cin>>arr[j];
        }

        int k{};
        while(k<n-1)
        {
            if(arr[k]<=arr[k+1])
            {
                queue.push(arr[k]);
                k++;
            }
            else
            {
                queue.push(arr[k]);
                queue.push(arr[k+1]);
                k++;
            }
        }

        queue.push(arr[k]);

        int m{queue.size()};

        std::cout<<m<<"\n";

        for(int j{};j<m;j++)
        {
            std::cout<<queue.front()<<" ";
            queue.pop();
        }
    }   
}