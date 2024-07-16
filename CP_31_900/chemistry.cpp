#include <bits/stdc++.h>

int main()
{
    int t{};
    std::cin>>t;
    
    for(int i{};i<t;i++)
    {
        int n{};
        std::cin>>n;

        int p{};
        std::cin>>p;

        std::string s;
        std::cin>>s;

        std::vector<int> hash(26);

        int k{};
        while(k<n)
        {
            hash[int(s[k])-97]++;
            k++;
        }

        int other_odd{};
        int even{};

        k=0;
        while(k<26)
        {
            if(hash[k]%2!=0)
            {
                other_odd++;
            }
            else
            {
                even+=hash[k];
            }
            k++;
        }

        int temp{other_odd-p};
        
        if(n-p==1 || other_odd==0)
        {
            std::cout<<"YES\n";
        }
        else if(temp==1 || temp==0)
        {
            std::cout<<"YES\n";
        }
        else if(temp<0)
        {
            std::cout<<"YES\n";  
        }
        else
        {
            std::cout<<"NO\n";
        }



    }
}