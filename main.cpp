#include<iostream>
#include<cstdlib>
#include<fstream>
#include"BMI.h"
using namespace std;
int main(){
	int mas;
	float hei;
	BMI bmi;
	ifstream inFile("file.in",ios::in);
	if(!inFile){
		cerr<<"Failed opening"<<endl;
		exit(1);
		}
	ofstream outFile("file.out",ios::out);
	if(!outFile){
		cerr<<"Failed opening"<<endl;
		exit(1);
		}
	while(inFile>>hei>>mas){
		hei=hei/100;
		bmi.setMass(mas);
		bmi.setHeight(hei);
		outFile<<bmi.getBMIvalue()<<"\t"<<bmi.getCategory()<<endl;
		}
	return 0;
	}

