#include <bits/stdc++.h>

int main()
{
    int n{};
    std::cin>>n;

    std::vector<int> arr(n);

    for(int i{};i<n;i++)
    {
        std::cin>>arr[i];
    }



    int it{};

    int min_pos{};
    int max_pos{};
    while(it<n)
    {
        if(arr[it]>arr[max_pos])
        {
            max_pos=it;
        }
        else if(arr[max_pos]==arr[it])
        {
            if(max_pos>it)
            {
                max_pos=it;
            }
        }
        
        if(arr[it]<arr[min_pos])
        {
            min_pos=it;
        }
        else if(arr[it]==arr[min_pos])
        {
            if(min_pos<it)
            {
                min_pos=it;
            }
        }

        it++;
    }

    if(max_pos>min_pos)
    {
        std::cout<<max_pos+n-min_pos-2<<"\n";
    }
    else
    {
        std::cout<<max_pos+n-min_pos-1<<"\n";
    }
}