//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int number = 10;
//	int& ref_number = number; //���� �����ϴ� ������
//	int* ptr_number = &number; //�ּ� ���� ����Ű�� ������
//
//	//���� ���
//	cout << number << endl; //������ �̸��� �״�� �ۼ��մϴ�.
//	cout << ref_number << endl; //������ �����ϰ� �۾��մϴ�.
//	cout << *ptr_number << endl; //�����ͷκ��� ���� ���� ��쿡�� ���� ������(*)�� �ٿ��ݴϴ�.
//
//	//�ּ� ���
//	cout << &number << endl; //������ �̸� �տ� �ּ� ������(&)�� �ٿ��ݴϴ�.
//	cout << &ref_number << endl; //������ �����ϰ� �۾��մϴ�.
//	cout << ptr_number << endl; //������ ���� �̸�=�ּ�
//
//	number += 10; //������ ��ȭ�� �ְڽ��ϴ�.
//
//	cout << number << endl;
//	cout << ref_number << endl;
//	cout << *ptr_number << endl;
//
//	cout << &number << endl;
//	cout << &ref_number << endl;
//	cout << ptr_number << endl;
//
//	ref_number += 10; //�����ڿ� ��ȭ�� �ְڽ��ϴ�.
//
//	cout << number << endl;
//	cout << ref_number << endl; 
//	cout << *ptr_number << endl;
//
//	cout << &number << endl; 
//	cout << &ref_number << endl; 
//	cout << ptr_number << endl; 
//
//	ptr_number += 10; //������ ������ ��ȭ�� �ְڽ��ϴ�. �ּ� ��ȭ
//	//*ptr_number += 10; //��� �� ��ü ��ȭ
//
//	cout << number << endl;
//	cout << ref_number << endl;
//	cout << *ptr_number << endl;
//
//	cout << &number << endl;
//	cout << &ref_number << endl;
//	cout << ptr_number << endl;
//
//	//C++������ ������ ��� �����ڸ� �� ���� �����մϴ�.
//	//�����ڴ� �ѹ� �����ϸ� �ٸ� ��ü�� ������ �� ���� �����ͺ��� ������ ���谡 �����մϴ�.
//	//�������� ������ ������ ������ ũ�� �ٸ��� �ʾ� ���� ����� �����մϴ�.
//
//	//�� ���������� NULL ���� �䱸�Ǵ� ��쿡�� �����͸� ����ϵ��� �մϴ�. (�����ڴ� NULL �Ұ�)
//
//	/*int& ref_number2 = NULL;
//	int* ptr_number2 = NULL;*/
//
//	return 0;
//}