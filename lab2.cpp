#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include"BMI.h"
using namespace std;

int main()
{
	float BMI,height,weight;
	BMI_calculating BMI_lab2;
	ifstream infile("file.in",ios::in);
	ofstream outfile("file.out",ios::out);
	if(!outfile)
	{
		cerr<<"Failed opening"<<endl;
		exit(1);
	}

	if(!infile)
	{
		cerr<<"Failed opening"<<endl;
		exit(1);
	}
	while(infile >> height >> weight)
	{
		BMI_lab2.set_height(height);
		BMI_lab2.set_weight(weight);
		outfile << BMI_lab2.BMI_function()<<" \t "<< BMI_lab2.BMI_category()<<endl;
	}
	infile.close();
	outfile.close();
	return 0;
}
