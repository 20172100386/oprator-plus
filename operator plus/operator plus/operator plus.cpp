

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
	CFeet operator + (CFeet &objf);
	CFeet add(CFeet &objf);
};
void CFeet::setvalue(int fe, int in)
{
	feet = fe + in / 12;
	inches = in % 12;
}
void CFeet::display()
{
	cout << "Ó¢³ß=  " << feet << "Ó¢´ç=  " << inches << endl;
}
CFeet CFeet::add(CFeet &objf)
{
	CFeet temp;
	temp.setvalue(feet + objf.feet, inches + objf.inches);
	return temp;
}
CFeet CFeet::operator +(CFeet &objf)
{
	CFeet temp;
	temp.setvalue(feet + objf.feet, inches + objf.inches);
	return temp;
}


int main()
{
	CFeet A, B, C;
	A.setvalue(9, 8);
	B.setvalue(10, 12);
	C = A + B;
	C.display();
	return 0;
}

