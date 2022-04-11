/*Реалізуйте клас Time, де членами класу є години, хвилини, секунди.
	- перегрузіть time++;          -перегрузіть оператор  >= ;
	- перегрузіть time--;          -перегрузіть оператор  <= ;
	- перегрузіть ++time;          -перегрузіть оператор  == ;
	- перегрузіть --time;          -перегрузіть оператор  > ;
	- перегрузіть time+=time1;     -перегрузіть оператор  < ;
	- перегрузіть time-=time1;     -перегрузіть оператор  != ;*/
#include "TIME.h"
#include <iostream>
using namespace std;
int main()
{
	Time time;
	Time time1;
	cin >> time; 
	cout << time << endl;
	cin >> time1;
	cout << time1 << endl;

	cout << "time++" << endl;
	time++; cout << time << endl; 
	cout << "++time" << endl;
	++time; cout << time << endl; 
	cout << "time--" << endl;
	time--; cout << time << endl;
	cout << "--time" << endl;
	--time; cout << time << endl;
	cout << "Time +=" << endl;
	time += time1; cout << time << endl;
	cout << "time -=" << endl;
	time -= time1; cout << time << endl;
}