 #include <iostream>
#include <fstream>
using namespace std;
 #include <iostream>
#include <fstream>
using namespace std;
int main()
{
	fstream f;
	string n;
	float t,a,l, suml;
	int i,x;
	f.open("text.txt",ios::app);
	for(int i=1;i<=7;i++)
	{
		f<<i<<endl;
		cout<<"name istgah ra vared konid"<<endl;
		cin >>n;
		f<<n<<endl;
				cout<<"toole joghrafiayi ra vared konid"<<endl;
		cin >>t;
		f<<t<<endl;
				cout<<"arze joghrafiayi ra vared konid"<<endl;
		cin >>a;
		f<<a<<endl;
		
				cout<<"tedade larze ha ra vared konid"<<endl;
		cin >>x;
		f<<x<<endl;
		if(x<1)
		{
    	cout<<"dar in istgah hich larzeyi sabt nashode"<<endl;
		}
		else
		{
			for(int j=1;j<=x;j++)
			{
				cout<<"rishter larzeye  "<<j<<"  ra vared konid"<<endl;
				cin>>l;
				f<<l<<endl;
			}
		
	
		}
		
	}
	
	ifstream o("text.txt");
	float y=0,max=0,r,s;
	int p,k=0;
	string q;
	for(int z=1;z<=7;z++)
	{
	    o>>i;
	    o>>n;
		o>>t;
		o>>a;
		o>>x;
		if(x>=0)
		{
			for(int j=1;j<=x;j++)
			{
				y=l+y;
				o>>l;
			if(l>max)
			{
				max=l;
				p=i;
				q=n;
				r=t;
				s=a;
				
			}
			
		}
		
			k=x+k;
			cout<<"name istgah= "<<n<<"\t"<<"tedade larze ha=   "<<x<<endl;
	}
}
	cout<<"***************"<<endl<<endl;
	cout<<"bozorgtarin zelzele dar shahre  "<<q<<"   ba toole joghrafiayie      "<<r<<"    v arze    "<<s<<" be bozorgie   "<<max<<"  boode ast"<<endl;
		cout<<"***************"<<endl<<endl;
		cout<<"tedade larze ha"<<k<<endl;
			cout<<"***************"<<endl<<endl;
	cout<<"majoome rishter larze ha"<<y<<endl;
		cout<<"***************"<<endl<<endl;
	cout<<"done"<<endl;
	
	
	return 0;
}