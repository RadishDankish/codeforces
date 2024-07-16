#include <bits/stdc++.h>

int main()
{
    int n{};
    std::cin>>n;

    std::vector<std::string> arr(n);

    for(int i{};i<n;i++)
    {
        std::cin>>arr[i];
    }

    int tetra{};
    int cube{};
    int octa{};
    int dodeca{};
    int ico{};

    int j{};
    while(j<n)
    {
        if(arr[j][0]=='T')
        {
            tetra++;
        }
        else if(arr[j][0]=='C')
        {
            cube++;
        }   
        else if(arr[j][0]=='O')
        {
            octa++;
        }
        else if(arr[j][0]=='D')
        {
            dodeca++;
        }
        else
        {
            ico++;
        }
        j++;
    }

    std::cout<<(4*tetra)+(6*cube)+(8*octa)+(12*dodeca)+(20*ico)<<"\n";

}