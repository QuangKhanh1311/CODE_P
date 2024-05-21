#include<iostream>
using namespace std;

int main()
{
    int n,m,x,y;
    cin >> n>>m >> x>> y;
    int *a = new int[n+1],*b = new int[m+1];

    for(int i = 1; i <= n;i++)
    {
        cin >> a[i];
    }
    for(int i = 1; i <= m;i++)
    {
        cin >> b[i];
    }
   
    int i =1,j = 1,d = 1;
    while(i <= n && j <= m)
    {
      
        if(a[i] - x <= b[j] && a[i] + y >= b[j] )
        {
            a[d] = i;
            b[d] = j;
            d++;   
            i++;
            j++;
        }
        else if(b[j] > a[i]+y)
        {
            i++;
        }
        else if(b[j] < a[i]-x)
        {
            j++;
        }
         
    }
    d--;
    cout<<d<<endl;
    for(int i = 1;i <= d;i++)
    {
        cout << a[i] <<" "<<b[i]<<endl;
    }
    delete[]a,b;    
    return 0;
}
