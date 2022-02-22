#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>

//Добавить get и set, использовать все конструкторы, добавить возможность менять параметры объекта
using namespace std;

class Worker {
private:
	string m_name;
	string m_position;
	int m_age;
	int m_salary;
public:
	Worker() {
		m_name = "null";
		m_position = "null";
		m_age = 0;
		m_salary = 0;
	}
	Worker(string name, string position, int age, int salary) {
		this->m_name = name;
		this->m_position = position;
		this->m_age = age;
		this->m_salary = salary;
	}
	Worker(const Worker &obj){
		m_name = obj.m_name;
		m_position = obj.m_position;
		m_age = obj.m_age;
		m_salary = obj.m_salary;
	}

	int getAge() {
		return m_age;
	}
	int getSalary() {
		return m_salary;
	}
	string getPosition() {
		return m_position;
	}
	string getName() {
		return m_name;
	}
	~Worker() {
		m_name;
		m_position;
		m_age;
		m_salary;
	}
	
};

int main() {
	
	int lenght;
	string name;
	string position;
	int age;
	int salary;
	cout << "How match person" << endl;
	cin >> lenght;
	cout << endl;

	Worker* arr = new Worker[lenght];

	for (int i = 0; i < lenght; i++) { // çàïèñü

		cout << "Enter first and last name -> " << " ";
		cin >> name;
		cout << "Enter position -> " << " "; 
		cin >> position;
		cout << "Enter age of the position -> " << " ";
		cin >> age;
		cout << "Enter salary -> " << " ";
		cin >> salary;
		arr[i] = Worker(name, position, age, salary);
		cout << endl;
	}

	// Task A
	cout << endl;
	cout << "Task A" << endl;
	int ag;
	cout << "Enter age of the position for sort -> " << " ";
	cin >> ag;

	for (int i = 0; i < lenght; i++) {
		if (arr[i].agePosition() > ag){
			cout << arr[i].nameEmployee() << endl;
		}
	}

	// Task B
	cout << endl;
	cout << "Task B" << endl;
	int sal;
	cout << "Enter salary for sort -> " << " ";
	cin >> sal;

	for (int i = 0; i < lenght; i++) {
		if (arr[i].salary() > sal) {
			cout << arr[i].nameEmployee() << endl;
		}
	}

	// Task C
	cout << endl;
	cout << "Task C" << endl;
	string pos;
	cout << "Enter position for sort -> " << " ";
	cin >> pos;

	for (int i = 0; i < lenght; i++) {
		if (arr[i].position() == pos) {
			cout << arr[i].nameEmployee() << endl;
		}
	}
	system("pause");
	delete[] arr;
}
