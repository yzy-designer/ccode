#include <iostream>
#include <ctime>
using namespace std;
void main()
{
	/*cout<<"十进制转八进制："<<endl;*/
	/*int a=100,r,s=0,w=1,n;*/
	/*while(a!=0)
	{

		r=a%8;
		s=s+r*w;w=w*10;
		a=a/8;
		
	}	
	cout<<  s;
	cout<<"8进制转10进制："<<endl;
	 a=144,r,s=0,w=1;
	while(a!=0)
	{

		r=a%10;
		s=s+r*w;w=w*8;
		a=a/10;
		
	}	
	cout<<  s;*/
	/*cout<<"数位和:"<<endl;
	cin>>n;
	while(n!=0)
	{
		r=n%10;
		s=s+r;
		n=n/10;
	}
	cout<<s<<endl;*/
	/*cout<<"反序数："<<endl;
	cin>>n;
	while(n!=0)
	{
		r=n%10;
		s=s*10+r;
		n=n/10;
	}
	cout<<s<<endl;*/
	/*cout<<"有序数组插入:"<<endl;
	int b[11],i,p;
	for(i=0;i<10;i++)
		b[i]=i;
	cin>>n;
	for(p=0;n>b[p];p++)
	{             }
	for(i=11;i>p;i--)
		b[i]=b[i-1];
	b[p]=n;
	for(i=0;i<11;i++)
		cout<<b[i]<<"   ";*/
	/*cout<<"删除："<<endl;
	int a[10],i,b[10],j,k=1;
	srand(time(NULL));
	for(i=0;i<10;i++)
		a[i]=1+rand()%10;
	for(i=0;i<10;i++)
		cout<<a[i]<<"  ";
	cout<<endl;
	b[0]=a[0];
	for(i=1;i<10;i++)
	{	for(j=0;a[j]!=a[i];j++)
	{                 }
		if(j==i) {b[k]=a[j],k++;}
	}

	for(i=0;i<k;i++)
		cout<<b[i]<<"  ";*/
	cout<<"排序："<<endl;
	int a[10],i,j,t;
	srand(time(NULL));
	for(i=0;i<10;i++)
		a[i]=1+rand()%10;
	for(i=0;i<10;i++)
		cout<<a[i]<<"  ";
	cout<<endl;
	for(j=9;j>0;j--)
	for(i=j-1;i>=0;i--)
		if(a[i]>a[j])
		{t=a[i],a[i]=a[j],a[j]=t;}
	for(i=0;i<10;i++)
		cout<<a[i]<<"  ";

	
}