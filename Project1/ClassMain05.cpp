//#include <iostream>
//using namespace std;
//
//class Base
//{
//private: //�ڽ��� Ŭ���������� ������ �����մϴ�. (�ܺ� ���� ����)
//	int A;
//protected : //�Ļ� Ŭ���� ������ ������ ����մϴ�.
//	int B;
//public:   //��� ������ ������ ����մϴ�.(���� ������)
//	int C;
//};
//class Derived : public Base
//{
//public :
//	void MemberInit(int a, int b, int c);
//};
//class DerivedProtected : protected Base
//{
//public:
//	void MemberInit(int a, int b, int c);
//};
//class DerivedPrivated : private Base
//{
//public:
//	void MemberInit(int a, int b, int c);
//};
//
//int main()
//{
//	Derived d1;
//	DerivedProtected d2;
//	DerivedPrivated d3;
//
//	d1.C = 5;
//	//protected ���, private ������� ������ Ŭ�������� public �ʵ� ���̾��� C�� ������ �ȵǴ� �� Ȯ���� �� �ֽ��ϴ�.
//	
//	//protected ��� : protected���� ���� ������ ���� ����� protected�� �����Ͽ� ����մϴ�.
//	//public -> protected
//
//	//���� ���� ���� private < protected < public
//
//	//private ��� : private���� ���� ������ ���� ����� private�� �����Ͽ� ����մϴ�.
//	// -> ��� ���� private ó��
//	// ��� ���� ���� ������ ���� ���(�ǹ� ���� ���)
//
//	//public ��� : public���� ���� ������ ���� ����� public���� �����Ͽ� ����մϴ�.
//	//public���� ������ ���� �� ���� ������ ��ǻ� �״�� �������� �Ͱ� ����(���� ���� �ϴ� ���)
//
//	//d2.C = 6;
//	//d3.C = 7;
//
//
//
//	return 0;
//}
//void Derived::MemberInit(int a, int b, int c)
//{
//	//A = a; error!
//	B = b;
//	C = c;
//}
//
//void DerivedProtected::MemberInit(int a, int b, int c)
//{
////	A = a; error!
//	B = b;
//	C = c;
//}
//
//void DerivedPrivated::MemberInit(int a, int b, int c)
//{
////	A = a; error!
//	B = b;
//	C = c;
//}