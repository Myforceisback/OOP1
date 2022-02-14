#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>


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
	int agePosition() {
		return m_age;
	}
	int salary() {
		return m_salary;
	}
	string position() {
		return m_position;
	}
	string nameEmployee() {
		return m_name;
	}
	/*~Worker() {
		cout << "Destuct";
	}*/
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

	// Çàäàíèå À
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

	// Çàäàíèå Á
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

	// Çàäàíèå Â
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
	delete[] arr;
}
