#include <iostream>
using namespace std;

//���� ����, ����, �����ʿ� ���� Ŭ������ ���ǵǾ� �ֽ��ϴ�.
//�ߺ����� �κ��� �ϳ��� Ŭ������ ���� ��, ����� ���� �ڵ带 ����ȭ�Ͻÿ�.

class Write
{
protected:
	int amount;
public:
	int getAmount() { return amount; }
	void setAmount(int amount) { this->amount = amount; }
};

class Sharp : public Write //����
{

private:
	int width; //, amount;
//public:
//	int getAmount() { return amount; }
//	void setAmount(int amount) { this->amount = amount; }
};
class BallPoint : public Write //����
{
private:
//	int amount;
	string color;
public:
	/*int getAmount() { return amount; }
	void setAmount(int amount) { this->amount = amount; }*/
	string getColor() { return color; }
	void setColor(string color) { this->color = color; }
};
class Fountain : public BallPoint //������
{
//private:
//    int amount;
//	string color;
public:
	/*int getAmount() { return amount; }
	void setAmount(int amount) { this->amount = amount; }*/
	/*string getColor() { return color; }
	void setColor(string color) { this->color = color; }*/
	void refill(int point) { setAmount(point); }
};
