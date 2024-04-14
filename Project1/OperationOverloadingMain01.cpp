//#include <iostream>
//using namespace std;
//
////예시를 통해 알아보는 연산자 오버로딩
//
//class Count
//{
//	int value; //클래스에서 접근 제한자를 따로 적지 않을 경우에는 private 취급합니다.
//			   //구조체의 경우는 접근 제한자를 따로 적지 않으면 public 취급합니다. (C++)
//public:
//	//생성할 경우 value의 값이 10으로 생성됩니다.
//	Count() : value(10) {}
//
//	//수정하고자 하는 연산자에 대해 작성합니다.
//	//--의 원래 기능은 값을 대상으로 1 감소시키는 기능
//	//void operator --() //전위 연산(값에 대해서 먼저 1을 감소하고, 연산을 진행하는 방식)
//	//{
//	//	value--; //value=value-1;
//	//}
//	//void operator --(int) //후위 연산(연산을 먼저하고 값에 대해서 1을 감소하는 방식)
//	//{
//	//	--value;
//	//}
//	int GetValue() { return value; }
//
//	Count operator --()
//	{
//		//1.연산에 대한 작업을 진행합니다.
//		value--;
//		//2.현재의 값을 내보냅니다. (*this->Count)
//		return *this;
//		//value를 1 빼고 난 다음, 그 수치만큼의 Count 객체를 return 합니다.
//		
//		//this는 클래스 자기 자신을 의미합니다. (클래스는 참조 타입입니다. (주소))
//		//*는 주소에 대한 값을 반환하는 연산자입니다.
//	}
//	Count operator --(int)
//	{
//		//1.연산을 진행하기 전 자신의 값을 따로 임시로 저장합니다. (temp)
//		Count temp = *this;
//		//2.연산에 대한 작업을 진행합니다.
//		value--; 
//		//3.값만 이전 값으로 내보냅니다.
//		return temp;
//	}
//};
//
//int main()
//{
//	Count c;
//	cout << c.GetValue() << endl;
//	c--;
//	cout << c.GetValue() << endl;
//	--c;
//	cout << c.GetValue() << endl;
//
//	Count c2;
//	c2 = c--; 
//	cout << c2.GetValue() << endl;
//	cout << c.GetValue() << endl;
//	//c에 대해서 계산은 할 수 있으나, 객체로 대입하는 작업은 불가능(void operator --)
//	//따라서 이렇게 작업하고 싶을 경우에는 다른 형태로 작업을 진행해야 합니다.
//
//	return 0;
//}