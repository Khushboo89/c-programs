#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{   
    ofstream fout;
	char fname[50];
	char data[50];
	int data2;

	cout<<"\n enter file name";
	cin>>fname;
	cin.ignore();
	fout.open(fname);
	cout<<"\n enter name";
    cin.getline(data, 50);
    //cin.ignore();
	cout << "You entered '"<< data << "'" << endl;  
	fout<<data;
	cout<<"\n enter age:";
	cin>>data2;
	fout<<data2;
	fout.close();
	ifstream fin;
	fin.open(fname);
	while(fin.eof()==0)
	{
		fin>>data;
		cout<<data<<" ";
	}
	fin.close();
	return 0;
}
