#include <iostream>
#include <stdlib.h>

#include <time.h>
using namespace std;
class numberA {
private:
	float *numberArr;
	int number;
	int hight;
	int  low;
public:
	numberA(double A,int n , int x);
	numberA();
	double highest(int n)const { int hight = n; };
	double lowest(int n )const { int low = n; };
	int gethight() { return n; };
	int getlow() { return x; };
};
numberA::numberA(double A, int n, int x)
{
	n = hight;
	x = low;
}


int main()
{
	int n;
	int n2;
	int n3;
	
	cout << "size of your array" << endl;
	cin >> n ;
	new double A[n];
	cout << "the number " << endl;
	cout << "the number big" << endl;
	cin >> n2;
	cout << "the number small" << endl;
	cin >> n3;
	numberA(A , n2,n3)
	
	for (int i = 0; i < n; i++) {

	}
}