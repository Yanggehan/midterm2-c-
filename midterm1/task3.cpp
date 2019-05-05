#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
class floatarray
{
private:
	float *array;
	int length =0;
public:
	floatarray(int p)
	{
		array = new float[p];
		length = p;
	}
	~floatarray()
	{
		delete[] array;
	}
	void store(int k, float val)
	{
		
			array[k] = val;
	}
	float getvalue(int k)
	{
	
			return array[k];
	}
	float getmax()
	{
		float max = array[0];
		for (int i = 1; i < length; i++)
		{
			if (array[i] > max)
				max = array[i];
		}
		return max;
	}
	float getmin()
	{
		float min = array[0];
		for (int i = 1; i < length; i++)
		{
			if (array[i] < min)
				min = array[i];
		}
		return min;
	}
	float get_average()
	{
		float sum = 0;
		for (int i = 0; i < length; i++)
			sum = sum + array[i];
		return sum / length;
	}
	void printArr() {
		for (int i = 0; i < length; i++) {
			cout << array[i] << ",";
		}
	}
};
int main()
{
	floatarray my_array(10);
	for (int i = 0; i < 10; i++)
		my_array.store(i, rand() % 100);
	cout << "number is " << endl;
	my_array.printArr();
	cout << " " << endl;
	cout << "max value in array is " << my_array.getmax() << endl;
	cout << "min value in array is " << my_array.getmin() << endl;
	cout << "average value of elements in array is " << my_array.get_average() << endl;
	system("pause");
	return 0;
}