//#include <iostream>
//using namespace std;
//
//class Base
//{
//public:
////virtual Ű����� �Լ��� ���� �Լ��� ����� Ű�����Դϴ�.
////���� �Լ��� ��� ���迡�� �ڽ� Ŭ������ �θ� Ŭ������ �޼ҵ带 ������ �� ������ ����Ǵ� �Լ��� ������ 
////�Լ� ȣ�� �� �ڽ��� ��ġ�� ����ǵ��� ó���ϴ� �Լ��� �ǹ��մϴ�.
//	 virtual void Method()
//	{
//		cout << "I'am Base Class Object" << endl;
//	}
//};
//
//class Derived : public Base
//{
//public:
//	void Method()
//	{
//		cout << "I'am a Derived Class Object by Base Class" << endl;
//	}
//};
//
//class Derived2 : public Base
//{
//public:
//	void Method()
//	{
//		cout << "I'am a Derived Class Object 2 by Base Class" << endl;
//	}
//};
//
////Base Ŭ���� ������ �����͸� ���� �޾� �� �Լ��� �����ϴ� �ڵ�
//void MethodTest(Base* base_object)
//{
//	base_object->Method();
//}
//
//int main()
//{
//	Base b;
//	Derived d;
//	b.Method();
//	d.Method();
//	//Ŭ������ Ÿ�Կ� ���� �׿� �´� ���(������ �Լ�)�� ȣ���ϰ� �˴ϴ�.
//	//�̸� ���� ���ε��̶�� �θ��ڽ��ϴ�.
//
//	Base* b1 = new Base();
//	Derived* d1 = new Derived();
//	//���α׷� ���� �ÿ� ���� � �Լ��� ������ ���� ���ϰ� �˴ϴ�.
//	//�̸� ���� ���ε��̶�� �θ��ڽ��ϴ�.
//	b1->Method();
//	d1->Method();
//
//	Base* b2 = new Derived();
//	//�θ� Ŭ������ �ڽ� Ŭ������ ���·� �����ϴ� ���� �����մϴ�.
//	//����� �� ����� �̿��� �ϳ��� Ŭ������ ���� ������ ���� Ŭ������ ���·� ����� ����� �� �ֽ��ϴ�.
//	//�̴� ���� ���� Ŭ������ ���� �ʿ並 ���� �� ������, �Լ��� Ȱ�뿡�� ������ �� �� �ֽ��ϴ�.
//
//	//�Ű������� �θ� ������, �ڽĿ��� �۾��� ����Ǹ� ���ʿ��ϰ� ���� �Լ��� ���� �ʿ䰡 �������� �����Դϴ�.
//
//	MethodTest(b2);
//	//b2->Method();
//	b2 = new Derived2();
//	//b2->Method();
//	MethodTest(b2);
//
//	//Base�� ���� Derived�� Derived2�� ������� ���
//	//Ŭ���� Ÿ�Կ� ���� ������ �Լ�(Base�� Method)�� �����ϰ� �˴ϴ�.
//
//	return 0;
//
//}