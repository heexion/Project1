//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	//벡터 만들기
//	//vector<데이터 타입> 변수명;
//
//	vector<int> v1; //비어있는 벡터 생성
//	vector<int> v2(10); //{0,0,0,0,0,0,0,0,0,0}
//	vector<int> v3(10, 1); //{1,1,1,1,1,1,1,1,1,1}
//	vector<int> v4(v3); //{1,1,1,1,1,1,1,1,1,1}
//
//	//vector 접근 방법
//	cout << v2[0] << endl; //배열의 인덱스와 동일하게 사용
//	cout << v3.at(1) << endl; //벡터의 1번째 값 참조(범위를 넘을 경우에 대한 방지가 되어있음. 위 방식보단 느림)
//	cout << v4.front() << endl; //벡터의 첫번째 데이터를 참조합니다.
//	cout << v4.back() << endl; //벡터의 마지막 데이터를 참조합니다.
//
//	//vector에 대한 데이터 추가/삭제 하는 방법
//	for (int i = 0;i < 10;i++)
//	{
//		v1.push_back(i);
//	}
//
//	//iterator를 이용한 출력
//	vector<int>::iterator iter; //반복자 선언
//	iter = v1.begin(); //반복자는 v1의 시작 위치로 설정됩니다.
//
//	iter = v1.insert(iter+5, 17);
//	//해당 반복자를 통해 v1의 5번째 위치(인덱스 5번)에 17의 값을 추가합니다.
//
//	iter = v1.insert(iter,5,4);
//	//지정한 반복자 위치를 기준으로 4가 5번 순차적으로 들어갑니다.
//
//	int arr[] = { 5,50,500,5000 };
//	iter = v1.insert(v1.begin(), arr, arr + 4);
//	//v1의 시작 지점에서 배열의 이름(첫번째 값이 있는 위치)에서 4칸까지 작업합니다.
//
//	v1.erase(v1.begin() + 1, v1.begin() + 4); //인덱스 1~3까지 삭제
//	
//	//반복자는 v1의 시작 위치로 설정되며(1회)
//	//반복자가 v1의 마지막 부분이 아닐때까지 반복을 진행합니다.
//	//반복자가 가리키고 있는 값을 출력합니다. (포인터 참조연산자(*))
//	//반복자의 값을 1 증가합니다. (포인터에서 1을 더할 경우, 그 다음 칸을 가리키게 됩니다(포인터와 배열))
//	for (iter = v1.begin(); iter != v1.end(); iter++)
//		cout << *iter << " ";
//
//	//자료구조에서 쓰는	for문
//	vector<string> item_list;
//	item_list.push_back("어묵");
//	item_list.push_back("떡볶이");
//	item_list.push_back("순대");
//	item_list.push_back("라면");
//
//	//for(auto 변수명 : 배열 / 자료구조)로 적을 경우 순차적으로 데이터를 반복해 표현합니다.
//	for (auto item : item_list)
//	{
//		cout << item << endl;
//	}
//
//
//	return 0;
//}