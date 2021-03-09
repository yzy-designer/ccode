#include <iostream>
#include <ctime>
using namespace std;
void main()
{
	cout<<"十进制转八进制："<<endl；
	int a=100,r,s=0,w=1,n;
	while(a!=0)
	{

		r=a%8;
		s=s+r*w;w=w*10;
		a=a/8;
		
	}	
	cout<<s;


	cout<<"8进制转10进制："<<endl;
	 a=144,r,s=0,w=1;
	while(a!=0)
	{

		r=a%10;
		s=s+r*w;w=w*8;
		a=a/10;
		
	}	
	cout<<  s;*/
}