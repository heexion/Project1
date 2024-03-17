//#include <iostream>
//using namespace std;
////std 네임스페이스를 사용하고 있습니다.
//
////네임스페이스는 별도의 이름을 저장할 수 있는 공간
////사용 목적 : 프로그램을 개발하다 보면 코드를 특정 그룹으로 분리하고 싶은 경우
////            프로그램에서 자주 쓰이는 변수의 이름이 충돌 되지 않게 하기 위함
//
//namespace Item
//{
//	namespace Cloth
//	{
//		string brand = "Nike";
//	}
//}
//namespace A
//{
//	int a = 1;//정수형 변수 a
//}
//namespace B
//{
//	int a = 2;
//}
//int main()
//{
//	cout << "안녕하세요." << endl; //위에 네임스페이스 사용하므로 std 생략 가능
//	int a = 5;
//	cout << a << endl;
//	cout << A::a << endl;
//	cout << B::a << endl;
//	cout << Item::Cloth::brand << endl;
//
//
//	return 0;
//}