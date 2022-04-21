#include <iostream>
using namespace std;
int main()
{
int n,m,p=0;
cin>>n>>m;
if (n==m)
{
    p=n/m+n;
}
else if (n>m && n!=m)
{
    p=(n/m)+n+1;
}

else
{
    p=m;
}
cout<<p;


}
