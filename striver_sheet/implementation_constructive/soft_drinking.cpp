#include <bits/stdc++.h>

int main()
{
    int n{};
    int k{};
    int l{};
    int c{};
    int d{};
    int p{};
    int nl{};
    int np{};

    std::cin>>n;
    std::cin>>k;
    std::cin>>l;
    std::cin>>c;
    std::cin>>d;
    std::cin>>p;
    std::cin>>nl;
    std::cin>>np;

    int tot_vol{k*l};

    int tot_lime{c*d};
    int tot_toast{tot_vol/nl};
    int each_salt{p/np};
    
    int min{};
    if(tot_lime<=tot_toast && tot_lime<=each_salt)
    {
        min=tot_lime;
    }
    else if(tot_lime>=tot_toast && tot_toast<=each_salt)
    {
        min=tot_toast;
    }
    else
    {
        min=each_salt;
    }

    std::cout<<(min-(min%n))/n;
}