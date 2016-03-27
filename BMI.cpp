#include"BMI.h"
float BMI::getBMIvalue(){
	return getBMI();
	}
string BMI::getCategory(){
	if(getBMI()<15){return"Very severely underweight";}
	if(15<=getBMI()&&getBMI()<16){return"Severely underweught";}
	if(16<=getBMI()&&getBMI()<18.5){return"Under weight";}
	if(18.5<=getBMI()&&getBMI()<25){return"Normal";}
	if(25<=getBMI()&&getBMI()<30){return"Overweight";}
	if(30<=getBMI()&&getBMI()<35){return"Obese Class I(Moderately)";}
	if(35<=getBMI()&&getBMI()<40){return"Obses Class II(Severly obese)";}
	if(getBMI()>=40){return"Obese Class III(Very severely obese)";}
	}
void BMI::setMass(int m){
	mass=m;
	}
void BMI::setHeight(float h){
	height=h;
	}
float BMI::getBMI(){
	if(height==0)exit(1);
	return mass/(height*height);
	}
