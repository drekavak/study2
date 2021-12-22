#include <iostream>

using namespace std;

int main()
{
	float base = 0.0f;
	float height = 0.0f;
	float area = 0.0f;

	cout << "삼각형의 밑변의 길이는?" << endl;
	cin >> base;
	cout << "삼각형의 높이의 길이는?" << endl;
	cin >> height;
	area = base * height / 2;
	cout << "삼각형의 넓이는 " << area << " 입니다." << endl;
	cout << "그렇다고" << endl;
	cout << "커밋한번더해보자" << endl;

	return 0;

}