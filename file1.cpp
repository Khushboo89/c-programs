#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string>
using namespace std;
int main()
{    ofstream fout;
	char s[50];
	char c[50];
	int size=50;
	int data ;
	cout<<"enter the file name";
	cin>>s;
    fout.open(s);
    cout<<"\n enter the name:";
    cin.getline(c, 50);
    fout<<c;
    cout<<"\n enter the 2data";
    cin>>data;
    fout<<data;
    
  //  fout<<"writing this into file";
    fout.close();
	ifstream fin;
	cout<<"enter the file name";
	cin>>s;
	fin.open(s);
	if(!fin)
	{
		cout<<"\n error in opening";
		exit(0);
	}
	while(fin.eof()==0)
	{
		fin>>c;
		cout<<c<<" ";
		
	}
	cout<<"\n";
	fin.close();
	
}
