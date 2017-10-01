//Omar Sanchez
//COSC 2030 
//Lab 3

#include <iostream>
using namespace std;

void sum(short val) {
	short total = 0;
	for (int i = 0; i <= val; i++) {
		total = i + total;
	}
	cout << "The number you selected is " << val << " and the cosectuive total is " << total << endl;

}

void sumlong(long val) {
	long total = 0;
	for (int i = 0; i <= val; i++) {
		total = i + total;
	}
	cout << "The number you selected is " << val << " and the cosectuive total is " << total << endl;

}

void factorial(long val) {
	float total =1;
	for (long i = 1; i <= val; i++) {
		total = total * i;
	}
	cout << "The number you selected is " << val << " and the factorial is " << total << endl;

}

void factorialDouble(long val) {
	double total = 1;
	for (long i = 1; i <= val; i++) {
		total = total * i;
	}
	cout << "The number you selected is " << val << " and the factorial is " << total << endl;

}

void oneOverNdouble(double val) {
	double total = 0;
	for (int i = 1; i <= val; i++) {
		total = total + (1 / val);
	}
	total = total - 1.0;
	cout << "The number you selected is " << val << " and the total is " << total << endl;
}

void oneOverNfloat(float val) {
	float total = 0;
	for (float i = 1; i <= val; i++) {
		total = total + (1 / val);
	}
	total = total - 1.0;
	cout << "The number you selected is " << val << " and the total is " << total << endl;
}




int main(){
	
	sum(5);
	sum(256);
	sum(254);
	sum(255);
	//At 256 we receive a negative 32640

	sumlong(1500);
	sumlong(25000);
	sumlong(1000000);
	sumlong(960000);
	sumlong(50000);
	sumlong(90000);
	sumlong(80000);
	sumlong(70000);
	sumlong(40000);
	sumlong(35000);
	sumlong(38000);
	sumlong(39000);
	sumlong(39500);
	sumlong(39550);
	sumlong(39800);
	sumlong(39900);
	sumlong(40000);
	sumlong(50000);
	sumlong(60000);
	sumlong(65000);
	sumlong(69999);
	sumlong(69000);
	sumlong(67000);
	sumlong(66000);
	sumlong(65500);
	sumlong(65700);
	sumlong(65600);
	sumlong(65550);
	sumlong(65540);
	sumlong(65530);
	sumlong(65535);
	sumlong(65536);

	//65536 is where we get our first overflow for long, we get a negative answer.

	factorial(15);
	factorial(25);
	factorial(30);
	factorial(35);
	//35 is an overflow because our answer is just inf.

	factorialDouble(170);
	//At 171 we get the answer inf.
	
	oneOverNfloat(18); //At 18 we get an eror because it should return a 0, this works up to 17 because the precision isn't quite as accucrate so we can get away with this a couple more times.
	oneOverNdouble(6); //At 6 we get am error because it doesnt return 0, this works less amount of times because double has way more precision.
	
	for (float i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	};
	// The reason it works with double and not float is because double has better precision, so when we add .2 every time, float doesn't have that precision so then the float implementation does the loop one more time because we were not precisely at 4.4.
	



	return 0;
}
	
	

