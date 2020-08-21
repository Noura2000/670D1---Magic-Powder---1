#include <iostream>

using namespace std;

int main()
{
    int n,k,a[1000],b[1000],cnt=0;;
    cin>>n>>k;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    while(true)
    {
        for(int i=0;i<n;i++)
        {
            if(b[i]>=a[i]) b[i]-=a[i];
            else {k-=(a[i]-b[i]); b[i]=0;}
        }
        if(k>=0) cnt++;
        else break;
    }
    cout<<cnt<<endl;
    return 0;
}
