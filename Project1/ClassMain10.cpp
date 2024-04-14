//#include <iostream>
//using namespace std;
//
//class Person_A
//{
//private: 
//	string name;
//	int age;
//	friend class Person_B; //friend 클래스 PersonB 선언
//};
//
//class Person_B
//{
//public: 
//	void info(Person_A a)
//	{
//		cout << "이름 : " << a.name << endl;
//		cout << "나이 : " << a.age << endl;
//	}
//};
//
//class Shape
//{
//private:
//	string name;
//	string length;
//public:
//	friend class Color;
//	Shape()
//	{
//		name = "사각형";
//	}
//	void setName(string name)
//	{
//		this->name = name;
//	}
//};
//
//class Color
//{
//private:
//	string color;
//public:
//	Color()
//	{
//		color = "초록색";
//	}
//	void setColor(string color)
//	{
//		this->color = color;
//	}
//	void ColorInfo(Shape s)
//	{
//		cout << color << " 색깔의 " << s.name << endl;
//	}
//};
//int main()
//{
//	Shape s;
//	Color c;
//	c.ColorInfo(s);
//
//	s.setName("삼각형");
//	c.setColor("파란색");
//	c.ColorInfo(s);
//
//
//	return 0;
//}