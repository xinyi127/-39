#include<math.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;
const int N=1e5+5;
#define scnaf scanf
int main()
{
    long long i,j,k,f,n,ans=0;
    scnaf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        scnaf("%lld",&k);
        j=1;
        long long a[50]={0};
        while(k>0)
        {
            if(k&1)
                a[j++]=1;
            else a[j++]=0;
            k/=2;
        }
        for(f=j-1,k=1;f>0;f--,k*=2)
            if(a[f])
                ans+=k;
    }
    printf("%lld",ans);
    return 0;
}
