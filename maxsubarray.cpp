#include<bits/stdc++.h>

int max(int a, int b)
{
    if (a>b)
        return a;
    else
        return b;
}
int main()
{

    int best=0,sum=0,arr[10];
    for (int i=0;i<10;i++)
        scanf("%d",&arr[i]);//scanning the array
    for (int i=0;i<10;i++)
    {
        sum = max(arr[i],arr[i] + sum);
        best = max(best, sum);
    }
    printf("Sum is %d",best);
    return 0;

}
