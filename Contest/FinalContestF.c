#include<stdio.h>
int max(int num1, int num2)
{
    if(num1>num2)
        return num1;
    else return num2;
}

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);

    int s[n+1];
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&s[i]);
    }
    int l=1,r=1;
    int ans=0,temp=0;
    while(r<=n)
    {
        temp+=s[r];
        r++;
        while(temp>m)
        {
            temp-=s[l];
            l++;
        }
        ans=max(ans,r-l);
    }
    printf("%d\n", ans);

}
