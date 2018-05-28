

#include "stdafx.h"
#include <iostream>
using namespace std;
class CFeet
{
private:
	int feet;
	int inches;
public:
	void setvalue(int fe, int in);
	void display();
	CFeet operator - (CFeet &objf);
	CFeet add(CFeet &objf);
};
void CFeet::setvalue(int fe, int in)
{
	feet = fe + in / 12;
	inches = in % 12;
}
void CFeet::display()
{
	cout << "Ó¢³ß=  " << feet << "  Ó¢´ç=  " << inches << endl;
}
/*CFeet CFeet::add(CFeet &objf)
{
	CFeet temp;
	temp.setvalue(feet - objf.feet, inches - objf.inches);
	return temp;
}*/
CFeet CFeet::operator -(CFeet &objf)
{
	CFeet temp;
	int t;
	if (feet < 0)
	{
		t = inches + objf.inches;
	}
	else if (inches > objf.inches)
	{
		t = inches - objf.inches;
	}
	else if(inches<objf.inches)
	{
		t = objf.inches - inches;
	}
	
	temp.setvalue(feet - objf.feet, t);
	return temp;
}


int main()
{
	CFeet A, B, C;
	A.setvalue(1, 3);
	B.setvalue(2, 2);
	C = A - B;
	C.display();
	return 0;
}

