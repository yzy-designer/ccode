#include <iostream>
#include <ctime>
using namespace std;
void main()
{
	cout<<"ʮ����ת�˽��ƣ�"<<endl��
	int a=100,r,s=0,w=1,n;
	while(a!=0)
	{

		r=a%8;
		s=s+r*w;w=w*10;
		a=a/8;
		
	}	
	cout<<s;


	cout<<"8����ת10���ƣ�"<<endl;
	 a=144,r,s=0,w=1;
	while(a!=0)
	{

		r=a%10;
		s=s+r*w;w=w*8;
		a=a/10;
		
	}	
	cout<<  s;
}