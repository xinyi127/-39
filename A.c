#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;
const int N=1e4+5;
#define scnaf scanf
struct ss
{
    int x1,x2;
    int y1,y2;
}s[N];
int main()
{
    int i,j,k,n;
    scnaf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d%d%d%d",&s[i].x1,&s[i].y1,&s[i].x2,&s[i].y2);
    int x1,x2,y1,y2;
    scnaf("%d%d%d%d",&x1,&y1,&x2,&y2);
    int w=y2-y1,e=x2-x1;
    int x3,y3;
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            x3=s[j].x2-s[j].x1;
            y3=s[j].y2-s[j].y1;
            x3+=s[i].x2;
            y3+=s[i].y2;
            if((y3-s[i].y1)*e==(x3-s[i].x1)*w)
            {
                printf("YES");
      //          printf("\n%d,%d,%d,%d\n",s[i].x1,s[i].y1,s[i].x2,s[i].y2);
        //        printf("%d,%d,%d,%d\n",s[j].x1,s[j].y1,s[j].x2,s[j].y2);
          //      printf("%d,%d,%d,%d\n",(y3-s[i].y1),e,(x3-s[i].x1),w);
                return 0;
            }
        }
    }
    printf("NO");
    return 0;
}