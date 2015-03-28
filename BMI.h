#ifndef BMI_H
#define BMI_H

#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
using namespace std;

class BMI
{
  public:
    BMI();
    void set_height(float n);		//set
    void set_mass(float n);
    
    float get_height();		//get
    float get_mass();	
    
    float value();		//return the BMI value
    string category(float n);	//return the category
 
  private:
    float height;			
    float mass;			
};

#endif
