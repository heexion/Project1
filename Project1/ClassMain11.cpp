//#include <iostream>
//using namespace std;
//
////다음과 같은 결과가 나올 수 있도록 클래스 Student를 설계하시오.
//
//class Student
//{
//	string name;
//	int age;
//public:
//	//밑 주석은 내가 안쓴 코드들, 써야지 컴파일 됨...
//	Student(string name, int age) : name(name), age(age) {}
//	Student operator=(const Student& other)
//	{
//		return Student(name, age);
//	}
//
//	 void StudentInfo() {
//		cout << "이름 : " << name << " 나이 : " << age << endl;
//	}
//};
//int main()
//{
//	Student s1("이세영", 17);
//	Student s2("김익현", 18);
//
//	s1 = s2;
//	s1.StudentInfo();
//	s2.StudentInfo();
//
//	//실행 결과
//	//이름 : 김익현 나이 : 17
//	//이름 : 김익현 나이 : 18
//
//	
//	return 0;
//}