#include <iostream>
#include "student.cpp"
using namespace std;
int main() {
	Student s1;
	s1.display();
	Student s2("Chuong",'m');
	s2.display();
	Student s3("Thao", 'f');
	s3.display();

}
