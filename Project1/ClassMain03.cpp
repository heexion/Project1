//#include <iostream>
//using namespace std;
//
////ĸ��ȭ(Encapsulation)
////��ɰ� �Ӽ��� �ϳ��� ��� �����մϴ�
////1.Ŭ���� �ȿ� ���� �����Ǿ��ִ� �Ӽ��� ������ �ϳ��� ĸ��(capsule)�� ����
////�����Ϳ� ���� �ܺ� ������ ��ȣ�ϴ� ���� ���(������ ���� ����, ���� ����)
//
////�Ϲ������δ� Ŭ���� ���� �ʵ带 private�� ���, ���� �Լ��� public���� �����ϴ� ������ �۾��� �ϳ�
////�ڵ� ���迡 ���� Ư�� �ڵ� ���ο��� �ٸ� �ڵ尡 ȣ��ǰ� �ִٸ� �� �ڵ忡 ���� ������� �ϴ� ��
////��Ȳ�� �°� ������ ������� Ȱ���մϴ�.
//
////������
//class Circuit {};
//class RemoteController
//{
//public :
//	void VolumeUP() {}
//	void VolumeDown() {}
//	void ON() {}
//	void OFF() {}
//	void Channel() {}
//private:
//	void infraredRayCast() {} //���ܼ� ��ȣ �浹
//	bool _infraredRay; //���ܼ� ����
//	Circuit curcuit; //��Ŷ
//};
//
////1. ���� ũ�� ����, ���� Ű�� ����, ä�� ���� ���� ����ڰ� ����ؾ��� ����Դϴ�.
////�� �κп� ���ؼ��� ���� ó���� �����մϴ�.
////2. ���ܼ� ��ȣ �浹�� ��ư�� ������ ���ܼ��� �߻� �ǰ� ���� ����(���� ��Ŷ)�� ���� ����� ó���˴ϴ�.
//
////getter / setter (get / set)
////getter : �ʵ� ���� ���� return �Լ��� �ǹ��մϴ�.
////setter : �ʵ� ���� ���� �ʱ�ȭ�� �����ϴ� �Լ��� �ǹ��մϴ�.
//
//class Person
//{
//private:
//	int age;
//public:
//	int getAge() { return age; }
//	void setAge(int age) { this->age = age; }
//};
//
//int main()
//{
//	Person p;
//	p.setAge(16);
//	cout << p.getAge() << endl;
//
//
//	return 0;
//}