operator overloading
overload (+)

#include<iostream>
using namespace std;
   
class Complex {
private:
    int real, imag;
public:
    Complex(int r = 0, int i =0)  {real = r;   imag = i;}
       
    
    Complex operator + (Complex const &obj) {
         Complex temp;
         temp.real = real + obj.real;
         temp.imag = imag + obj.imag;
         return temp;
    }
    void print() { cout << real << " + i" << imag << endl; }
};
   
int main()
{
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2; // An example call to "operator+"
    c3.print();
}


**************************************************************************


overload (-)

#include <iostream>

using namespace std;

class Distance {
    private: 
        int km;
        int meter;
    
    public:
        Distance(int k=0, int m=0){
            km=k;
            meter=m;
        }
    
        Distance operator -(Distance &d) {
            Distance temp;
            
                temp.km=this->km-d.km;
                temp.meter=this->meter-d.meter;
            
            return temp;
        }
        
        void print(){
            cout<<"Kilometers ="<<km<<"\t meters = "<<meter<<endl;
        }
};


int main()
{
    Distance d1(10,500);
    Distance d2(12,700);
    Distance d3=d2-d1;
    d3.print();
    return 0;
}


**************************************************************************************

overload (*)

#include <iostream>

using namespace std;

class Fraction {
    private: 
        int n;
        int d;
    
    public:
        Fraction(int num=0, int den=1){
            n=num;
            d=den;
        }
    
        Fraction operator *(const Fraction &s) {
            Fraction temp;
                temp.n=this->n * s.n;
                temp.d=this->d * s.d;
                
            return temp;
            
        }
        
        void print(){
            cout<<n<<"/"<<d<<endl;
        }
};


int main()
{
    Fraction f1{2, 5};
    f1.print();

    Fraction f2{3, 8};
    f2.print();
    Fraction f3{ f1 * f2 };
    f3.print();
    
    Fraction f4{ f1 * 2 };
    f4.print();
    
    // Fraction f5{ 4 * f2 };    // error --why? 
    // f5.print();
    return 0;
}



********************************************************************************************


overload (++) post increment
 
#include <iostream>
using namespace std;

class Integer {
private:
	int i;

public:
	
	Integer(int i = 0)
	{
		this->i = i;
	}

	
	Integer operator++()
	{
		Integer temp;
		temp.i = ++i;
		return temp;
	}

	
	void display()
	{
		cout << "i = " << i << endl;
	}
};


int main()
{
	Integer i1(10);

	cout << "Before increment: ";
	i1.display();

	
	Integer i2 = ++i1;

	cout << "After pre increment: ";
	i2.display();
}

***********************************************************************


overload (--) prefix decrement

#include <iostream>
using namespace std;
 
class Integer {
private:
    int i;
 
public:
    
    Integer(int i = 0)
    {
        this->i = i;
    }
 
    
    Integer operator--()
    {
        Integer temp;
        temp.i = --i;
        return temp;
    }
 
    
    void display()
    {
        cout << "i = " << i << endl;
    }
};
 
int main()
{
    Integer i1(20);
 
    cout << "Before decrement: ";
    i1.display();
 
    
    Integer i2 = --i1;
 
    cout << "After pre decrement: ";
    i2.display();
}

**************************************************************************************************


getting error in post increment and post decrement














