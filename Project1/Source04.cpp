//#include <iostream>
//#include <cstdlib>
//#include <random>
//using namespace std;
//
////C++의 기본 문법
////C언어에서 사용되던 문법은 거의 그대로 사용합니다.
////bool 타입이 추가되었습니다.(true/false)
////C언어의 기능을 그대로 가지고 있는 헤더 파일이 존재하며, 앞에 c가 붙습니다. ex) #include <cstdlib>
////포인터의 경우도 그대로 사용하나 포인터를 대체할 문법이 추가되었습니다
////클래스라는 새로운 사용자 정의 타입이 추가되었습니다.
//
//int main()
//{
//	// 1. 조건문 if 
//	int number = 19;
//	if (number % 2 == 0)
//	{
//		cout << "짝수입니다." << endl;
//	}
//	else
//	{
//		cout << "홀수입니다." << endl;
//	}
//
//	//조건이 2개 이상 요구되는 경우
//	//'키는 150 이하, 나이는 9세 미만은 기구를 이용할 수 없습니다.'
//	
//	//구현방법 1. if문 안에 if문 작성
//
//	float height = 149.6f;
//	int age = 8;
//
//	if (height <= 150.0f)
//	{
//		if (age < 9)
//		{
//			cout << "기구를 이용하실 수 없습니다." << endl;
//		}
//	}
//
//	//구현방법 2. if문 안에 조건 2개를 연결해서 사용합니다.
//	if (height <= 150.0f && age < 9)
//	{
//		cout << "기구를 이용하실 수 없습니다." << endl;
//	}
//
//	return 0;
//}