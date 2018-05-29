

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
	if (feet < 0&&objf.feet>0)
	{
		t = inches + objf.inches;
	}
	else if (feet < 0 && objf.feet < 0)
	{
	    if (inches > objf.inches)
	    {
		    t = inches - objf.inches;
	    }
	     else 
	    {
		    t = objf.inches - inches;
	    }

	}
	else if (feet > 0 && objf.feet > 0)
	{
		if (inches > objf.inches)
		{
			t = inches - objf.inches;
		}
		else
		{
			t = objf.inches - inches;
		}
	}
	else if (feet >0 && objf.feet < 0)
	{
		t = inches + objf.inches;
	}
	else if (feet == 0 && objf.feet != 0)
	{
		if (objf.feet > 0)
		{
			if (inches > objf.inches)
			{
				t = inches - objf.inches;
			}
			else
			{
				t = objf.inches - inches;
			}
		}
		else
		{
			t = inches + objf.inches;
		}
	}
	else if (feet != 0 && objf.feet == 0)
	{
		/*if (feet > 0)
		{*/
			if (inches > objf.inches)
			{
				t = inches - objf.inches;
			}
			else
			{
				t = inches+12 - objf.inches;
			}
		/*}
		else
		{

		}*/
	}
	/*else if (inches > objf.inches)
	{
		t = inches - objf.inches;
	}
	else if(inches<objf.inches)
	{
		t = objf.inches - inches;
	}*/
	
	temp.setvalue(feet - objf.feet, t);
	return temp;
}


int main()
{
	CFeet A, B, C;
	A.setvalue(1,1);
	B.setvalue(0,3);
	C = A - B; 
	C.display();
	return 0;
}

