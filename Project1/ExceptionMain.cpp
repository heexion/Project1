#include <iostream>
using namespace std;


int main()
{
	int a, b;
	cout << "두 개의 정수를 순서대로 입력하세요 ";
	cin >> a >> b;

	//(Best) if문을 활용해 그 상황 자체가 발생하지 않도록 설계합니다.
	/*if (b == 0)
	{
		cout << "0으로는 나눌 수 없습니다." << endl;
	}
	else
	{
		cout << a << "를 " << b << "로 나눈 몫은 " << a / b << "입니다." << endl;
	}
	*/
	try
	{
		if (b == 0) throw b;
		cout << a << "를 " << b << "로 나눈 몫은 " << a / b << "입니다." << endl;
	}
	catch (int exception)
	{
		cout << "0으로는 나눌 수 없습니다." << endl;
	}

	//예외 처리 문 try - catch는 try { }로 예외가 발생할 수 있는 문법을 감싸주고
	//오류가 발생할 경우 그 값을 throw를 통해 던집니다.
	//throw를 통해 던지면 그 다음 명령들은 전부 처리되지 않고 catch 영역의 작업이 실행됩니다.
	//실질적인 해결이 아닌 그 상황에 대한 수습 정도로 사용되는 기능으로 if문 처럼 아예 그 상황이 생기지 않도록 
	//설계해주는 것이 더 바람직하나 외부 코드 등 코드로 해결하기 어려운 부분이나 직관적으로 이 상황이 잘못됐음을
	//표현하고자 할 때는 매우 효과적입니다.

	return 0;
}