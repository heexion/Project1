//#include <iostream>
//#include <cstdarg>
//using namespace std;
//
////���� �Ű������� �̿��� ���ڵ��� ��, ���ڵ� �� ���� ���� ��, ���ڵ� �� ���� ū ���� ����ϴ� ����� �����Ͻÿ�
//
//void sum(int count, ...);
//void min(int count, ...);
//void max(int count, ...);
//
//int main()
//{
//	void(*ptr)(int count, ...);
//	//�Լ� ������
//	//�Լ� ������ Ÿ��(*�������̸�) (�Ű�����);
//	//�ش� ���� ����� �Լ��� �̸��� �����ϴ� ������ �� �Լ��� ����Ű�� ���� �����մϴ�.
//	
//	//�̷� ������ ����� �����մϴ�.
//	ptr = NULL;
//	while (true) {
//
//		cout << "����� �������ּ��� 1.���� 2.�ּ� 3.�ִ�";
//		int choice;
//		cin >> choice;
//
//		//���� ����� �Է¹��� ������ �����ϴ� �ڵ�
//		while (cin.fail() == true)
//		{
//			cout << "�߸��� ���� �Է��߽��ϴ�. �ٽ� �Է��� �����ϰڽ��ϴ�!" << endl;
//			cin.clear(); //cin ��ü�� ������ ���ڽ��ϴ�.
//			cin.ignore(100, '\n'); //���Ⱑ �߰ߵǸ� �۾� ����(�Է� �� ��ȿȭ)
//			//cin.ignore(����, ����); ������ŭ�� �Է� ���� ��ȿȭ�մϴ�. �Է��� ������ ���� ��쿡�� �ߴ�
//			cout << "����� �������ּ��� 1.���� 2.�ּ� 3.�ִ�";
//			cin >> choice;
//		}
//
//		//�� �Է��� �߸����� ��� �����ϴ� �ڵ�
//		/*if (cin.fail() == true)
//		{
//			cout << "���ڰ� �ƴ� ���� �Է��ϼ̽��ϴ�.";
//			cout << "���α׷��� �����ϰڽ��ϴ�." << endl;
//			break;
//		}*/
//
//		switch (choice)
//		{
//		case 1:
//			ptr = sum; break;
//		case 2:
//			ptr = min; break;
//		case 3:
//			ptr = max; break;
//		default : 
//			cout << "�Է��� �߸��Ǿ����ϴ�." << endl;
//			ptr = NULL; //�Ʒ��� �ڵ忡 ���� ��µ��� �ʵ��� ptr�� ���ڽ��ϴ�.
//		}
//		if(ptr != NULL)
//			ptr(5, 1, 2, 3, 4, 5);
//	}
//	
//	ptr = sum;
//	ptr(5, 1, 2, 3, 4, 5);
//	ptr = min;
//	ptr(5, 1, 2, 3, 4, 5);
//	ptr = max;
//	ptr(5, 1, 2, 3, 4, 5);
//
//	return 0;
//}
//
//void sum(int count, ...)
//{
//	
//	int sum = 0;
//	va_list ap;
//	va_start(ap, count);
//	for (int i = 0; i < count;i++)
//	{
//		sum += va_arg(ap,int);
//	}
//	cout << "���� : " << sum << endl;
//	va_end(ap);
//}
//void min(int count, ...)
//{
//	
//	va_list ap;
//	va_start(ap, count);
//	int temp ;
//	int min = ap[0];
//	for (int i = 0; i < count;i++)
//	{
//		temp= va_arg(ap, int);
//
//		if (min > temp)
//		{
//			min=temp;
//		}
//	}
//	cout << "���� ���� �� : " << min << endl;
//	va_end(ap);
//}
//void max(int count, ...)
//{
//	va_list ap;
//	va_start(ap, count);
//	int temp;
//	int max = ap[0];
//	for (int i = 0; i < count;i++)
//	{
//		temp = va_arg(ap, int);
//
//		if (max < temp)
//		{
//			max = temp;
//		}
//	}
//	cout << "���� ū �� : " << max << endl;
//	va_end(ap);
//}