#include"BMI.h"
BMI::BMI(){}

void BMI::set_height(float n)
{height=n;}

void BMI::set_mass(float n)
{mass=n;}

float BMI::get_height()
{return height;}

float BMI::get_mass()
{return mass;}

float BMI::value()
{
  float bmi;
  float a=get_height();
  float b=get_mass();
  
  bmi = b /( (a/100)*(a/100) );
  
  return bmi;
}

string BMI::category(float n)
{
  string str;
  
  if(n<15) str="Very severely underweight";
  else if(n<16.0) str="Severely underweight";
  else if(n<18.5) str="Underweight";
  else if(n<25) str="Normal";
  else if(n<30) str="Overweight";
  else if(n<35) str="Obese Class 1(Moderately obese)";
  else if(n<40) str="Obese Class 2(Severely obese)";
  else str="Obese Class 3(Very severely obese)";
  
  return str;
}
