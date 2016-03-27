#include<string>
#include<cstdlib>
using namespace std;
class BMI{
	public:
		float getBMIvalue();
		string getCategory();
		void setMass(int m);
		void setHeight(float h);
		float getBMI();
	private:
		int mass;
		float height;
	};
