
#include <iostream>
#include <string>
using namespace std;

int main()
{

int a[5][5],s[2];

for(int i=0;i<5;i++)

{

for(int j=0;j<5;j++)

{
	cin>>a[i][j];
	if (a[i][j]==1)

	{
		s[0]=i;
		s[1]=j;
	}
	
}



}
cout<<abs(2-s[0])+abs(2-s[1])<<endl;


}

