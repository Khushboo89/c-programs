#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{

	char ch,och;
	ofstream fout;
	fout.open("k.txt");
	fout<<"writing in a file";
	fout.close();
	ifstream fin;
	fin.open("k.txt");
	
	fout.open("y.txt");
	while(!fin.eof())
	{
		fin>>ch;
		fout<<ch;
	}
	fin.close();
	fout.close();
	fin.open("y.txt");
	while(fin.eof()==0)
	{
		fin>>ch;
		cout<<ch<<"";
	}
	return 0;
}

