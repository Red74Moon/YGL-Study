#include <iostream>
#include <string>

using namespace std;

char str[40];
int num = 0;
int list[100];
int cnt = 0, i;

int main() {
	//gets_s 로 char입력을 받아 한글자씩 처리해주자.
	gets_s(str, 40);
	for (int i = 0; cnt < 40 && str[i]; i++) {
		if (str[i] != ' ') {
			//char에서 -'0' 하면 int형이 된다.
			num = num * 10 + str[i] - '0';
		}
		else {
			if (num > 0) {
				list[cnt++] = num;
				num = 0;
			}
		}
	}

	for (int i = 0; i <= cnt; ++i)
	{
		cout << i + 1 << " 번째 :" << list[i] << endl;
	}
	return 0;
}