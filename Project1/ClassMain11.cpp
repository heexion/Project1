//#include <iostream>
//using namespace std;
//
////������ ���� ����� ���� �� �ֵ��� Ŭ���� Student�� �����Ͻÿ�.
//
//class Student
//{
//	string name;
//	int age;
//public:
//	//�� �ּ��� ���� �Ⱦ� �ڵ��, ����� ������ ��...
//	Student(string name, int age) : name(name), age(age) {}
//	Student operator=(const Student& other)
//	{
//		return Student(name, age);
//	}
//
//	 void StudentInfo() {
//		cout << "�̸� : " << name << " ���� : " << age << endl;
//	}
//};
//int main()
//{
//	Student s1("�̼���", 17);
//	Student s2("������", 18);
//
//	s1 = s2;
//	s1.StudentInfo();
//	s2.StudentInfo();
//
//	//���� ���
//	//�̸� : ������ ���� : 17
//	//�̸� : ������ ���� : 18
//
//	
//	return 0;
//}