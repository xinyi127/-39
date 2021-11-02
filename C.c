#include<math.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;
const int N=3e6+5;
#define scnaf scanf
int b[N],a[N];
int main()
{
    int i,j,k,n,ans=0;
    scnaf("%d",&n);
    for(i=1;i<=n;i++)
        scnaf("%d%d",&a[i],&b[i]);
    for(i=1;i<=n;i++)
    {
        if(min(a[i],b[i])>=max(a[i-1],b[i-1]))
        {
            ans+=(min(a[i],b[i])-max(a[i-1],b[i-1]));
            if(a[i-1]!=b[i-1])
                ans++;
        }
    }
    printf("%d",ans);
    return 0;
}