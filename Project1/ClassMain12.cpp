//#include <iostream>
//using namespace std;
//
//
////���� 2) ������ ���� ���� ������ ���� ���α׷���  main���� �����ϰ�
//	//å�� �ش��ϴ� Ŭ���� Book�� �ʿ��ϴٸ� �����ڸ� ������ Ŭ������ �����Ͻÿ�.
//
//	//���� å ���� -> �̸� : A ���� ������ : 100 Page / 500 Page
//	//���� ��ŭ�� �������� �Է����ּ��� >> 47
//	//���� å ���� -> �̸� : A ���� ������ : 147 Page / 500 Page
//	//���� ��ŭ�� �������� �Է����ּ��� >> 400
//	//�ִ� �������� �Ѱ� ���� �� �����ϴ�!
//
//#define MAX 500
//
//class Book
//{
//private: 
//	string name;
//	int read_page;
//	int max_page;
//public:
//	Book(string name) : name(name)
//	{
//		read_page = 0;
//		max_page = MAX;
//	}
//	Book operator+(int value)
//	{
//		if (value + read_page > max_page)
//		{
//			cout << "�ִ� �������� �Ѱ� ���� �� �����ϴ�!" << endl;
//			return *this;
//		}
//
//		read_page += value;
//		return *this;
//	}
//	void Info()
//	{
//		/*if (read_page >= max_page)
//			return;*/
//		cout << "�̸� : " << name << " ���� ������ " << read_page << " Page / " << max_page << " Page" << endl;
//	}
//
//};
//
//int main()
//{
//	Book b("A");
//	int page;
//
//	while (true)
//	{
//		b.Info();
//		cout << "���� ��ŭ�� �������� �Է����ּ��� >> ";
//		cin >> page;
//		b = b + page;
//	}
//	
//
//	return 0;
//}