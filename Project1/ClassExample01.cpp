//#include <iostream>
//using namespace std;
//
////���� ����Ʈ�� �� ��Ȳ�� �����غ����� �մϴ�.
////�ʿ��� ������ Ŭ������ �����ϼ���.
////�� �߿� ����Ʈ���� Ŭ������ ����ڽ��ϴ�.
////����Ʈ���� ������ �̸�, ȭ�� ũ��, ��� �԰�(��������), ���� �޸�, �ü��, �귣���� ������ ������ �ֽ��ϴ�.
////�̹� ���������� ���� ���α׷����� �̸��� �Է��ϸ� �� ����Ʈ���� ������ ����ϴ� ����� �ʿ��մϴ�.
////����Ʈ���� ��ü������ ������ ����� ���� �������� �ʽ��ϴ�.(���� Ű��, ������ ��� ...)
//
////���� �ó�����
////����Ʈ�� ���� ���α׷��Դϴ�.
////����� �������ּ��� 1. ���� �˻� 2. ���� Ȯ�� 3. ���α׷� ����
////���� �˻��� ���� ��� �̸��� �Է¹޵��� �ϸ�, �� �̸��� ����Ʈ���� �ִٸ� ������ �ȳ��մϴ�.
////���� Ȯ���� ���� ��� ȭ�鿡 �����ϰ� �ִ� ����Ʈ���� ��ü ����մϴ�.
////���α׷� ���Ḧ ���� ��� ����˴ϴ�.
//
//class Phone
//{
//private:
//	string name, protocol, system, brand, memory;
//	float size;
//public:
//	Phone(string name, float size, string protocol, string memory, string system, string brand)
//	{
//		this->name = name;
//		this->size = size;
//		this->protocol = protocol;
//		this->memory = memory;
//		this->system = system;
//		this->brand = brand;
//
//
//	}
//	void DeviceInfo(Phone s);
//};
////class S24 
////{
////public:
////	string name = "������ S24 ��Ʈ��";
////	string protocol = "5G+LTE";
////	string system = "�ȵ���̵�14";
////	string brand = "�Ｚ";
////	string memory = "512GB";
////	float size = 17.2;
////	
////
////	void print()
////	{
////		cout << "�̸� : " << name << endl;
////		cout << "ȭ�� ũ��(cm) : " << size << endl;
////		cout << "��� �԰� : " << protocol << endl;
////		cout << "���� �޸� : " << memory << endl;
////		cout << "�ü�� : " << system << endl;
////		cout << "�귣�� : " << brand << endl;
////	}
////
////
////};
////class Iphone15Pro
////{
////public:
////	string name = "������ 15 ����";
////	string protocol = "5G+LTE";
////	string system = "iOS 13";
////	string brand = "����";
////	string memory = "256GB";
////	float size = 15.5;
////
////
////	void print()
////	{
////		cout << "�̸� : " << name << endl;
////		cout << "ȭ�� ũ��(cm) : " << size << endl;
////		cout << "��� �԰� : " << protocol << endl;
////		cout << "���� �޸� : " << memory << endl;
////		cout << "�ü�� : " << system << endl;
////		cout << "�귣�� : " << brand << endl;
////	}
////
////
////};
////void print()
////{
////	string name, protocol, system, brand, memory;
////	float size;
////	cout << "�̸� : " << name << endl;
////	cout << "ȭ�� ũ��(cm) : " << size << endl;
////	cout << "��� �԰� : " << protocol << endl;
////	cout << "���� �޸� : " << memory << endl;
////	cout << "�ü�� : " << system << endl;
////	cout << "�귣�� : " << brand << endl;
////}
//
//int main()
//{
//	int select;
//	string search_name;
//
//	Phone S24("������ S24 ��Ʈ��", 17.2, "5G+LTE", "512GB" "�ȵ���̵�14", "�Ｚ");
//
//	while (true)
//	{
//		cout << "����Ʈ�� ���� ���α׷��Դϴ�." << endl;
//		cout << "����� �������ּ��� 1. ���� �˻� 2. ���� Ȯ�� 3. ���α׷� ����";
//		cin >> select;
//		switch (select)
//		{
//		case 1:
//			cout << "�˻��� ������ �̸��� �Է����ּ��� >> ";
//			cin >> search_name;
//			if (search_name == "S24")
//			{
//			
//			}
//
//			break;
//		case 2:
//		case 3:
//			cout << "���α׷��� �����մϴ�." << endl;
//			exit(0);
//		default :
//			cout << "�ٽ� �Է����ּ���" << endl;
//		}
//	}
//
//
//	return 0;
//}