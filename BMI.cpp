#include"BMI.h"
#include<string>
#include<iostream>
#include<cstdlib>
using namespace std;

void BMI_calculating::set_height(float h)
{
	height = 0.01*h;
}
void BMI_calculating::set_weight(float w)
{
	weight = w;
}
float BMI_calculating::get_height()
{
	if( height == 0 )
		exit(1);
	return height;
}
float BMI_calculating::get_weight()
{
	return weight;
}   

float BMI_calculating::BMI_function()
{
	float BMI;
	BMI = get_weight()/( get_height()*get_height() );
	return BMI;
}
string BMI_calculating::BMI_category()
{
	float BMI;
	string str;
	BMI = get_weight()/( get_height()*get_height() );
	
	if(BMI<15.0)
	{
		str = "Very severely underweight";
	}
	if(BMI<16.0 && BMI>=15.0)
	{   
		str =  "Severely underweight";
	}
	if(BMI>=16.0 && BMI<18.5)
	{
		str =  "Underweight";
	}
    if(BMI>=18.5 && BMI<25.0)
	{
		str =  "Normal";
	}	
    if(BMI>=25.0 && BMI<30.0)
	{
		str =  "Overweight";
	}
    if(BMI>=30.0 && BMI<35.0)
	{
		str =  "Obese Class I (Moderately obese)";
	}
    if(BMI>=35.0 && BMI<40.0)
	{
		str =  "Obese Class II (Severely obese)";
	}
    if(BMI>=40.0)
	{
		str = "Obese Class III (Very severely obese)";
	}
	return str;
}
									   
