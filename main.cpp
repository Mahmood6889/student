#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	string name;
	int codemeli;
	
		ofstream file;
		file.open("student.txt",ios::app);
		
	for(int i=0;i<=10;i++)
	{
		cout<<"please enter name"<<endl;
		cin>> name;
		cout<<"please enter code meli"<<endl;
		cin>>codemeli;
		file<<"student"<<i<<endl<<"name"<<endl<<name<<endl<<"code meli"<<endl<<codemeli<<endl;
				
    }
			
	return 0;
	
}
