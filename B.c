#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;
const int N=1e6+5;
#define scnaf scanf
char a[N];
int main()
{
    int i,j,k;
    scnaf("%s",a);
    for(i=0;i<strlen(a)-2;i++)
    {
        if(a[i]=='Q')
        {
            if(a[i+1]=='A'&&a[i+2]==a[i])
            {
                printf("%d",i+1);
                return 0;
            }
        }
    }
    return 0;
}