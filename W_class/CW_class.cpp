#include<iostream>
#include<string.h>
#include"Student.h"
#include"counter.h"
#include<ctime>
using namespace std;
unsigned short int z;

int main() {
	setlocale(LC_ALL, "ru");
	srand(time(0));
	
	//int n;
	//string name;
	//int age;
	//Student *ss;
	//cout << "Enter number of students:" << endl;
	//cin >> n;
	//ss = new Student[n];
	//cin.ignore();
	//for (int i = 0;i < n;i++)
	//{
	//	cout << "Enter name" << endl;
	//	getline(cin, name, '\n');
	//	age = 17 + rand() % 50;
	//	ss[i].setName(name);
	//	ss[i].setAge(age);
	//}

	//for (int i = 0;i < n; i++)
	//{
	//	cout << ss[i].getName() << "\t" << ss[i].getAge() << endl;
	//	//ss[i].print();
	//}
	counter c;
	c.setValue(30);
	while (true)
	{
		c.Increment();
		cout << c.getValue() << endl;
	}
	

	
	system("pause");
	return 0;

}
	