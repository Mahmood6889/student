#include<iostream>
#include<fstream>
using namespace std;

int main()


{
	string a,b,c,d,e,f,g,h,i,j;
	int k,l,m,n,o,p,q,r,s,t;
	cout<<"please enter name:";
	cin>>a;
	cout<<"please enter code:";
	cin>>k;
	cout<<"please enter name:";
	cin>>b;
	cout<<"please enter code:";
	cin>>l;
	cout<<"please enter name:";
	cin>>c;
	cout<<"please enter code:";
	cin>>m;
	cout<<"please enter name:";
	cin>>d;
	cout<<"please enter code:";
	cin>>n;
	cout<<"please enter name:";
	cin>>e;
	cout<<"please enter code:";
	cin>>o;
	cout<<"please enter name:";
	cin>>f;
	cout<<"please enter code:";
	cin>>p;
	cout<<"please enter name:";
	cin>>g;
	cout<<"please enter code:";
	cin>>q;
	cout<<"please enter name:";
	cin>>h;
	cout<<"please enter code:";
	cin>>r;
	cout<<"please enter name:";
	cin>>i;
	cout<<"please enter code:";
	cin>>s;
	cout<<"please enter name:";
	cin>>j;
	cout<<"please enter code:";
	cin>>t;
	
	ofstream file;
	file.open("student.txt",ios::app);
	file<<"student-1"<<endl<<"name:"<<a<<endl<<"code meli:"<<k<<endl;
	file<<"student-2"<<endl<<"name:"<<b<<endl<<"code meli:"<<l<<endl;
	file<<"student-3"<<endl<<"name:"<<c<<endl<<"code meli:"<<m<<endl;
	file<<"student-4"<<endl<<"name:"<<d<<endl<<"code meli:"<<n<<endl;
	file<<"student-5"<<endl<<"name:"<<e<<endl<<"code meli:"<<o<<endl;
	file<<"student-6"<<endl<<"name:"<<f<<endl<<"code meli:"<<p<<endl;
	file<<"student-7"<<endl<<"name:"<<g<<endl<<"code meli:"<<q<<endl;
	file<<"student-8"<<endl<<"name:"<<h<<endl<<"code meli:"<<r<<endl;
	file<<"student-9"<<endl<<"name:"<<i<<endl<<"code meli:"<<s<<endl;
   file<<"student-10"<<endl<<"name:"<<j<<endl<<"code meli:"<<t<<endl;
   file.close();
   
	ifstream x("student.txt");
	string z;
	if(x.is_open())
	{
		while(getline(x,z))
		{
			cout<<z<<endl;
		};
	}
    
	return 0;
}
