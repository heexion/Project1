//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int number = 10;
//	int& ref_number = number; //값을 참조하는 참조자
//	int* ptr_number = &number; //주소 값을 가리키는 포인터
//
//	//변수 출력
//	cout << number << endl; //변수의 이름을 그대로 작성합니다.
//	cout << ref_number << endl; //변수와 동일하게 작업합니다.
//	cout << *ptr_number << endl; //포인터로부터 값을 얻어올 경우에는 참조 연산자(*)을 붙여줍니다.
//
//	//주소 출력
//	cout << &number << endl; //변수의 이름 앞에 주소 연산자(&)를 붙여줍니다.
//	cout << &ref_number << endl; //변수와 동일하게 작업합니다.
//	cout << ptr_number << endl; //포인터 변수 이름=주소
//
//	number += 10; //변수에 변화를 주겠습니다.
//
//	cout << number << endl;
//	cout << ref_number << endl;
//	cout << *ptr_number << endl;
//
//	cout << &number << endl;
//	cout << &ref_number << endl;
//	cout << ptr_number << endl;
//
//	ref_number += 10; //참조자에 변화를 주겠습니다.
//
//	cout << number << endl;
//	cout << ref_number << endl; 
//	cout << *ptr_number << endl;
//
//	cout << &number << endl; 
//	cout << &ref_number << endl; 
//	cout << ptr_number << endl; 
//
//	ptr_number += 10; //포인터 변수에 변화를 주겠습니다. 주소 변화
//	//*ptr_number += 10; //얘는 값 자체 변화
//
//	cout << number << endl;
//	cout << ref_number << endl;
//	cout << *ptr_number << endl;
//
//	cout << &number << endl;
//	cout << &ref_number << endl;
//	cout << ptr_number << endl;
//
//	//C++에서는 포인터 대신 참조자를 쓸 것을 권장합니다.
//	//참조자는 한번 설정하면 다른 객체를 참조할 수 없어 포인터보다 안전한 설계가 가능합니다.
//	//참조자의 사용법은 변수의 사용법과 크게 다르지 않아 쉽게 사용이 가능합니다.
//
//	//단 예외적으로 NULL 값이 요구되는 경우에는 포인터를 사용하도록 합니다. (참조자는 NULL 불가)
//
//	/*int& ref_number2 = NULL;
//	int* ptr_number2 = NULL;*/
//
//	return 0;
//}