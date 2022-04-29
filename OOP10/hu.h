#ifndef HUMAN_H
#define HUMAN_H

#include <iostream>
#include <string>

using namespace std;

class Human {
protected:
	string surname;
	string name;
	string midname;
	int age;
public:
	Human();
	Human(string, string, string, int);
	virtual void print() = 0;
	~Human();
};

class Student : public Human {
private:
	bool on_lesson;
public:
	Student();
	Student(string, string, string, int, bool);
	void print();
	~Student();
};

class Boss : public Human {
private:
	int number_of_workers;
public:
	Boss();
	Boss(string, string, string, int, int);
	void print();
	~Boss();
};

#endif