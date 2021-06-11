#include<iostream>
using namespace std;
class Person{
private:
	string name;
	string address;
	int id;
	int age;
public:
	int getId() {
		return id;
	}
	void setID(int id) {
		this->id = id;
	}
	int getAge() {
		return age;
	}
	void setAge(int age) {
		this->age = age;
	}
	string getName() {
		return name;
	}
	void setName(string name) {
		this->name = name;
	}
	void setAddress(string address) {
		this->address = address;
	}
	string getAddress() {
		return address;
	}
};
int main() {
	Person p1;
	p1.setName("Chuong");
	p1.setID(1998);
	p1.setAge(23);
	p1.setAddress("Ho Chi Minh");
	cout <<"Name : "<< p1.getName()<<endl;
	cout << "Age : "<<p1.getAge()<<endl;
	cout << "ID : "<<p1.getId()<<endl;
	cout << "Adress : " << p1.getAddress() << endl;
	return 0;
}