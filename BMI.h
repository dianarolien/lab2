#include<string>
#include<cstdlib>
#include<iostream>
#include<fstream>

using namespace std;
class BMI_calculating
{
	float height,weight;
	public:
		void set_height(float h);
		void set_weight(float w);
		float get_height();
		float get_weight();
		float BMI_function();
		string BMI_category();
};
