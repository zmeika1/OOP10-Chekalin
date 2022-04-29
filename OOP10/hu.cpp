#include "hu.h"

Human::Human() {
	surname = "unknown";
	name = "unknown";
	midname = "unknown";
	age = 0;
}

Human::Human(string sur, string nam, string mid, int ag) {
	surname = sur;
	name = nam;
	midname = mid;
	age = ag;
}

Human::~Human() {

}

Student::Student() : Human() {
	on_lesson = false;
}

Student::Student(string sur, string name, string mid, int age, bool on) : Human(sur, name, mid, age) {
	on_lesson = on;
}

void Student::print() {
	cout << "Surname: " << surname << endl
		<< "Name: " << name << endl
		<< "Midname: " << midname << endl
		<< "Age: " << age << endl
		<< "Is on lesson? ";
	if (on_lesson)
		cout << "Yes";
	else
		cout << "No";
	cout << endl;
}

Student::~Student() {

}

Boss::Boss() : Human() {
	number_of_workers = 0;
}

Boss::Boss(string sur, string name, string mid, int age, int num) : Human(sur, name, mid, age) {
	number_of_workers = num;
}

void Boss::print() {
	cout << "Surname: " << surname << endl << "Name: " << name
		<< endl << "Midname: " << midname << endl << "Age: "
		<< age << endl << "Number of workers: " << number_of_workers << endl;
}

Boss::~Boss() {

}