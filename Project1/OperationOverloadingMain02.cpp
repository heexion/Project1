//#include <iostream>
//using namespace std;
//
////2�� �����ڿ� ���� �����ε�
//
////��ǥ�� ǥ���ϴ� Pos Ŭ����
////A(1,2) B(2,3) �̶� �� �� C�� A+B��� C�� ��ǥ�� ����ϱ��? C(3,5)
//class Pos
//{
//private:
//	int x, y;
//public:
//	Pos(int x, int y) : x(x), y(y) {}
//	Pos operator+(Pos& other)
//	{
//		return Pos(x + other.x, y + other.y);
//	}
//	//�۾��ϰ� �ִ� ������ -> +
//	//�Ű������� �ǹ��ϴ� �� -> ����ϴ� ���(Ŭ����)
//	//Ŭ���� = Ŭ���� + Ŭ����
//	//�Ű������� �������� ������ ��� �� �� ��ü�� �ǹ��մϴ�.
//
//	//���࿡ Ŭ���� = Ŭ���� + ���ڷ� ����� ���� ���?
//	Pos operator+(int& value)
//	{
//		//������ �����غ���
//	}
//
//	//���� �Լ� �����ε�
//	//��const�� �Ű������� ���� ���, �� ���� �о�⸸ �ϰ� ������ ���� ������ �ǹ��մϴ�.
//	friend Pos operator-(const Pos& p1, const Pos& p2)
//	{
//		/*Pos pos = Pos(p1.x - p2.x, p1.y - p2.y);
//		return Pos;*/
//
//		return Pos(p1.x - p2.x, p1.y - p2.y);
//	}
//	
//	friend Pos operator-(int number, Pos p1)
//	{
//		return Pos(number - p1.x, number - p1.y);
//	}
//};
//int main()
//{
//	Pos A(1, 2);
//	Pos B(2, 3);
//	Pos C = A + B;
//
//	return 0;
//}