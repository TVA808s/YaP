#include <iostream>
#include <bitset>

using std::cout;
using std::cin;
using std::bitset;
using std::endl;

int main() {
	setlocale(LC_ALL, "Russian");
	//1
	cout << "\t	1 task" << endl;

	std::cout << "Trubitsyn Vyacheslav Aleksandrovich from group 231 3213" << std::endl;
	//4
	cout << "\t4 task" << endl;

	int a, b;

	std::cout << "input two k's of a*x = b: " << std::endl;
	std::cin >> a;
	std::cin >> b;
	std::cout << a << " * x = " << b << std::endl;
	std::cout << "x = " << b << " / " << a << std::endl;
	float x;
	x = double(b) / a;
	std::cout << "x = " << x << std::endl;

	//5
	cout << "\t5 task" << endl;

	std::cout << "input coordinats of a straight line ";
	int f, s;
	std::cin >> f;
	std::cin >> s;
	std::cout << f << " " << s << std::endl;
	float ans;
	ans = double(f + s) / 2;
	std::cout << "the middle of the line is " << ans << std::endl;

	//3
	cout << "\t3 task" << endl;

	cout << "input number ";
	int num;
	cin >> num;
	cout << num << endl;
	cout << "binery type " << bitset<8 * sizeof(num)>(num) << endl;
	cout << "16 type " << std::hex << num << endl;
	cout << "char " << char(num) << endl;
	cout << "double " << std::dec << num << endl;
	cout << "bool " << (num > 0) << endl;


	//2
	
	cout << "\t2 task" << endl;
	cout << "int byte size :\t" << sizeof(int) << endl;
	cout << "max int:\t" << int(0b01111111111111111111111111111111) << endl;
	cout << "min int:\t" << int(0b10000000000000000000000000000000) << endl;

	cout << "long byte size :\t" << sizeof(long) << endl;
	cout << "max long:\t" << long(0b01111111111111111111111111111111) << endl;
	cout << "min long:\t" << long(0b10000000000000000000000000000000) << endl;

	cout << "char byte size :\t" << sizeof(char) << endl;
	cout << "max char:\t" << char(0b11111111) << endl;
	cout << "min char:\t" << char(0b00000000) << endl;

	cout << "short byte size:\t" << sizeof(short) << endl;
	cout << "max short:\t" << short(0b0111111111111111) << endl;
	cout << "min short:\t" << short(0b1000000000000000) << endl;

	cout << "long long byte size:\t" << sizeof(long long) << endl;
	cout << "max long long :\t" << (long long)(0b0111111111111111111111111111111111111111111111111111111111111111) << endl;
	cout << "min long long :\t" << (long long)(0b1000000000000000000000000000000000000000000000000000000000000000) << endl;

	cout << "double byte size:\t" << sizeof(double) << endl;
	cout << "max double :\t" << double(DBL_MIN) << endl;
	cout << "min double:\t" << double(DBL_MAX) << endl;

	cout << "float byte size:\t" << sizeof(float) << endl;
	cout << "max float :\t" << float(FLT_MIN) << endl;
	cout << "min float:\t" << float(FLT_MAX) << endl;

	cout << "unsign int:\t" << sizeof(unsigned int) << endl;
	cout << "min unsigned int:\t" << unsigned int(0b00000000000000000000000000000000) << endl;
	cout << "max unsigned int:\t" << unsigned int(0b11111111111111111111111111111111) << endl;

	cout << "unsign short:\t" << sizeof(unsigned short) << endl;
	cout << "min unsigned short:\t" << unsigned short(0b0000000000000000) << endl;
	cout << "max unsigned short:\t" << unsigned short(0b1111111111111111) << endl;

	cout << "unsign long:\t"<<sizeof(unsigned long) << endl;
	cout << "min unsigned long:\t" << unsigned long(0b00000000000000000000000000000000) << endl;
	cout << "max unsigned long:\t" << unsigned long(0b11111111111111111111111111111111) << endl;
	cout << "unsign long long:\t" << sizeof(unsigned long long) << endl;
	cout << "min unsigned long long:\t" << unsigned long long(0b0000000000000000000000000000000000000000000000000000000000000000) << endl;
	cout << "max unsigned long long:\t" << unsigned long long(0b1111111111111111111111111111111111111111111111111111111111111111) << endl;



}
