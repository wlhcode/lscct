//C0801 BMI Status

#include <iostream>

using namespace std;

int main()
{
	double weight = 0.0;
	double height = 0.0;
	double BMI = 0.0;
	
	cin >> weight;
	cin >> height;
	
	BMI = (weight)/(height*height);
	
	if (BMI > 25)
	  printf("Overweight\n");
	else if (BMI < 18.5)
	  printf("Underweight\n");
	else
	  printf("Normal weight\n");
	return 0;
}
