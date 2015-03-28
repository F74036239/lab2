#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include"BMI.h"
#include<iomanip>
using namespace std;

int main()
{
  BMI bmi;
  float hei,mass;
  float val;
  string str;
  int i;

  ifstream inFile("file.in",ios::in);
  
  if(!inFile)
  { 
    cerr<<"Failed opening"<<endl;
    exit(1);
  }
  
  while(inFile>>hei>>mass)
  {  
    if(hei==0)
      break;
    
    bmi.set_height(hei);
    bmi.set_mass(mass);
    
    hei=bmi.get_height();
    mass=bmi.get_mass();
    
    val=bmi.value();
    str=bmi.category(val);
    
    ofstream outFile("file.out",ios::app);
    
    if(!outFile)
    {
      cerr<<"Failed opening"<<endl;
      exit(2);
    }
    
    outFile<<fixed<<setprecision(2)<<val<<"\t"<<str<<endl;
  }
  cout<<"success!"<<endl;
  
  inFile.close();
  
  return 0;
}
