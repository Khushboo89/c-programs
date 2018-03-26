#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
	char ch[50];
	ofstream fout;
	fout.open("poi.txt");
	cout<<"enter the data from the user:";
	cin.getline(ch,50);
	fout<<ch;
	fout.close();
	ifstream fin;
	fin.open("poi.txt");
	while(!fin.eof())
    {
     	fin>>ch;
		cout<<ch<<"";	
	}
	return 0;	
}
