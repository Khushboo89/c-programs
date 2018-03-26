#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
	ofstream fout1;
	ofstream fout2;
    fout1.open("e.txt");
	fout2.open("o.txt");
	int num,num1=0;
	cout<<"\n enter the number";
	cin>>num;
	if(num%2==0)
	{
		
		fout1<<num;
		
	}
	else
	{
		
		fout2<<num;
	}
 fout1.close();
 fout2.close();
 ifstream fin;
    fin.open("e.txt");
    while(!fin.eof())
    {
    	fin>>num1;
    	cout<<num1;
	}
 
 return 0;
}
