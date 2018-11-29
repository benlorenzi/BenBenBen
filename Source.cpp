
#include <iostream>
#include <Windows.h> 
#include<ctime>

using namespace std;

int main()
{
	HWND window_1;   //create window hq holder 
	RECT rect;
	int num = 0;
	int h, w;
	HWND window_2;
	HWND window_3;
	window_1 = FindWindow(L"QQSGWinClass", NULL);
	window_2 = FindWindow(L"QQSGWinClass", NULL);
	window_3 = FindWindow(L"QQSGWinClass", NULL);
	while (1)
	{
		if (window_1 == window_2)
		{

			window_2 = FindWindow(L"QQSGWinClass", NULL);
			if (window_1 == window_3 | window_2 == window_3)
			window_3 = FindWindow(L"QQSGWinClass", NULL);
		}


		int waittime1 = rand() % 200 + 100;
		Sleep(waittime1);
		cout << waittime1 << endl;
		cout << "this is window 1" << window_1 << endl;
		cout << "this is window 2" << window_2 << endl;
		cout << "this is window 3" << window_3 << endl;

		::SendMessage(window_1, WM_KEYDOWN, 0x52, 0);
		::SendMessage(window_2, WM_KEYDOWN, 0x52, 0);
		::SendMessage(window_3, WM_KEYDOWN, 0x52, 0);
		::SendMessage(window_1, WM_KEYUP, 0x52, 0);
		::SendMessage(window_2, WM_KEYUP, 0x52, 0);
		::SendMessage(window_3, WM_KEYUP, 0x52, 0);
		system("cls");
	}

	return 0;
}