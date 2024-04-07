//#include <iostream>
//using namespace std;
//
////C++의 클래스(class)
////C++에서는 C언어에서 사용하던 구조체를 확장해 만든 클래스를 사용합니다.
////키워드 class를 통해 클래스를 설계하고, 클래스 내부에는 변수와 함수를 같이 보관해 사용할 수 있습니다.
//
////C언어의 구조체(struct)
////키워드 struct를 통해 변수를 만들면, 구조체 안에 변수를 만들어 관리하는 사용자 정의 타입
////C++에서는 C언어와의 호환성을 위해 남겨놓은 기능
//
//class Student_cls
//{
//public : 
//	string name;
//	int age;
//
//	//클래스 내부에는 함수를 만들 수 있습니다.
//	void Action()
//	{
//
//	}
//private : 
//	string address;
//};
//struct Student_str
//{
//	string name;
//	int age;
//};
//
//int main()
//{
//	Student_cls S_cls; //클래스 선언
//	Student_str S_str; //구조체 선언
//
//	//구조체 안에 있는 변수(멤버 변수) 사용
//	S_str.name = "이윤학";
//
//	//클래스 안에 있는 변수 사용
//	S_cls.name = "김기동";
//	//현재 오류가 나고 있다면 클래스에 만들어 놓은 변수가 비공개 상태이기 때문입니다.
//	//해결책 : 보여주고 싶은 부분을 public으로 감싸줍니다.
//
//	Student_cls S_cls2;
//	Student_str S_str2;
//	S_cls2.name = "임철균";
//	S_str2.name = "김한솔";
//	//클래스/구조체가 가지고 있는 변수들은 주로 프로그램을 설계할 때 자주 사용되는 이름들로 구성되어 있는 경우가 많습니다.
//	//일반적인 프로그래밍에서 변수의 이름은 1번만 설계가 가능하나, 클래스/구조체를 이용해 
//	//해당 클래스의 변수, 해당 구조체의 변수로 인식해 같은 이름의 변수를 사용할 수 있습니다.
//
//	/*객체/ 절차/ 함수형 -> 프로그래밍 설계 기법
//	객체 지향 프로그래밍(OOP : Object Oriented Programming)
//	절차 지향 프로그래밍(PP : Procedural Programming)
//	함수형 프로그래밍(FP : Functional Programming)
//	동적 프로그래밍(DP : Dynamic Programming) (알고리즘 설계 기법) */
//
//	return 0;
//}