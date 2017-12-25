#include <iostream>
#include <windows.h>

using namespace std;

int main() {
	system("갱이옷장");
	system("mode con:cols=50 lines=30");
	char Menu[3][6] = { "Login", "Join", "Exit" };
	int pointer = 0;

	while (true) {
		system("cls");

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

		for (int i = 0; i < 3; ++i) {
			if (i == pointer) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
				cout << Menu[i] << endl;
			}
			else {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				cout << Menu[i] << endl;
			}
		} //for

		while (true) {
			if (GetAsyncKeyState(VK_UP) != 0) {
				pointer -= 1;
				if (pointer == -1) { pointer = 2; }
				break;
			}
			else if (GetAsyncKeyState(VK_DOWN) != 0) {
				pointer += 1;
				if (pointer == 3) { pointer = 0; }
				break;
			}
			else if (GetAsyncKeyState(VK_RETURN) != 0) {
				switch (pointer) {
				case 0: {
							cout << "로그인";
							Sleep(1000);
				} break;
				case 1: {
							cout << "회원가입";
							Sleep(1000);
				} break;
				case 2: {
							return 0;
				} break;
				}
				break;
			}
		}
		Sleep(150);
	}//while
	return 0;
}
