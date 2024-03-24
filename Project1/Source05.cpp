//#include <iostream>
//#include <cstdlib> //c언어의 stdlib.h 파일
//#include <ctime> //c언어의 time.h 파일
//using namespace std;
//
////이번에 구현하고자 하는 프로그램은 '숫자 야구' 게임 구현
////규칙 : 1부터 9까지의 숫자 중 3개를 선택할 수 있습니다.
////사용자는 숫자 3개를 순서대로 입력하겠습니다.
////입력란 숫자에 따라 스트라이크와 볼을 판단
////
////스트라이크 : 입력한 숫자가 상대의 숫자와 값도 같고, 위치도 같은 것
////
////볼 : 입력한 숫자가 상대의 숫자와 값이 일치합니다. 단 위치는 다릅니다.
//
//int main() {
//
//	srand(time(NULL)); //랜덤에 대한 설정
//
//	int result[3];
//	int user[3];
//
////[게임 시작 시 사용할 상대의 값 설정]
//	for (int start = 0; start < 3; start++)
//	{
//		result[start] = (rand() % 9) + 1;
//
//		//현재의 start 값만큼 반복을 진행하는 코드
//		for (int check = 0;check < start;check++)
//		{
//			//start 위치의 result와 check 위치의 result가 같으면서, start와 check의 값이 서로 다른 경우
//			if (result[start] == result[check] && start != check)
//			{
//				start--;
//				//의도 : 이 코드로 인해 start의 값이 1 감소하게 되면
//				//밖에 있는 for문에 의해 다시 start가 1 증가하면서 다음 값이 아닌
//				//동일한 위치에서 다시 반복을 진행하게 될 것입니다.
//			}
//		}
//		// cout << result[start] << " ";
//	}
//
//	int count = 1; //진행 회차를 표현할 변수
//	int strike;
//	int ball;
//
////[게임 시작]
//	//계속 반복하는 무한 루프문 (프로그램 실행용)
//	while (true)
//	{
//		cout << "[" << count++ << "회차 숫자야구]" << endl;
//		//숫자에 대한 입력을 진행하겠습니다.
//		//조건) 이 숫자는 반드시 1부터 9 사이의 숫자
//		//잘못된 숫자를 입력했을 경우에는 다시 입력하도록 연출
//		
//		while (true)
//		{
//			cout << "1부터 9까지의 숫자를 입력하세요 >> ";
//			cin >> user[0] >> user[1] >> user[2] ; //user의 0 1 2 순으로 입력 가능 (띄어쓰기로 구분)
//
//			//범위 조건
//			bool check1 = user[0] < 1 || user[0] > 9;
//			bool check2 = user[1] < 1 || user[1] > 9;
//			bool check3 = user[2] < 1 || user[2] > 9;
//			//중복 조건
//			bool dup1 = user[0]  == user[1] ;
//			bool dup2 = user[0]  == user[2] ;
//			bool dup3 = user[1]  == user[2] ;
//
//			if (check1 || check2 || check3)
//			{
//				cout << "범위 외의 숫자를 입력할 수 없습니다." << endl;
//				continue; //작업을 건너 뛰겠습니다. (반복문의 맨 처음 위치로 이동)
//			}
//			
//			//[사용자가 중복된 값을 입력하지 못하도록 설정]
//			else if (dup1 || dup2 || dup3)
//			{
//				cout << "중복된 값이 존재해서는 안됩니다." << endl;
//				continue;
//			}
//
//			break;
//		}
//	}
//
//	return 0;
//}