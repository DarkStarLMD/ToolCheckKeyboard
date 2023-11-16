#include <iostream>
#include <Windows.h>
#include <fstream>
#include <io.h>
#include <fcntl.h>

using namespace std;

int main() 
{
	_setmode(_fileno(stdin), _O_U16TEXT);
	_setmode(_fileno(stdout), _O_U16TEXT);	// Chỉnh console để hỗ trợ tiếng Việt

	SetConsoleTitle(L"TOOL GHI LỊCH SỬ PHÍM - BY MINH DAT -");

	wcout << L"----------------- TOOL BỞI MINH ĐẠT 2023 -----------------" << endl;

	int i = -1;

	while (1) 
	{

		if (GetAsyncKeyState(VK_BACK) & 1) 
		{
			wcout << L"Phím vừa bấm : BACKSPACE" << endl;
		}
		if (GetAsyncKeyState(VK_RETURN) & 1)
		{
			wcout << L"Phím vừa bấm : ENTER" << endl;
		}
		if (GetAsyncKeyState(VK_CAPITAL) & 1)
		{
			wcout << L"Phím vừa bấm : CAPS LOCK" << endl;
		}
		if (GetAsyncKeyState(VK_ESCAPE) & 1)
		{
			wcout << L"Phím vừa bấm : ESC" << endl;
		}
		if (GetAsyncKeyState(VK_SPACE) & 1)
		{
			wcout << L"Phím vừa bấm : SPACE" << endl;
		}
		if (GetAsyncKeyState(VK_SNAPSHOT) & 1)
		{
			wcout << L"Phím vừa bấm : PRT SC SYSRQ (CHỤP MÀN HÌNH)" << endl;
		}
		if (GetAsyncKeyState(VK_INSERT) & 1)
		{
			wcout << L"Phím vừa bấm : INSERT" << endl;
		}
		if (GetAsyncKeyState(VK_DELETE) & 1)
		{
			wcout << L"Phím vừa bấm : DEL (DELETE)" << endl;
		}
		if (GetAsyncKeyState(VK_PRIOR) & 1)
		{
			wcout << L"Phím vừa bấm : PAGE UP" << endl;
		}
		if (GetAsyncKeyState(VK_NEXT) & 1)
		{
			wcout << L"Phím vừa bấm : PAGE DOWN" << endl;
		}
		if (GetAsyncKeyState(VK_END) & 1)
		{
			wcout << L"Phím vừa bấm : END" << endl;
		}
		if (GetAsyncKeyState(VK_HOME) & 1)
		{
			wcout << L"Phím vừa bấm : HOME" << endl;
		}

		////////////////////////////////////////////////////////////////////////////////

		i++;
		if (i <= 42) // Các phím từ A - Z
		{
			if (GetAsyncKeyState(0x30 + i) & 1)
			{
				char Name = 0x30 + i;
				wcout << L"Phím vừa bấm : " << Name << endl;
			}
			else if (i <= 17) // Các phím từ F1 - F24
			{
				if (GetAsyncKeyState(0x70 + i) & 1)
				{
					wcout << L"Phím vừa bấm : " << "F" << i + 1 << endl;
				}
				else if (i <= 9) // Các phím số kiểu NumberPad
				{
					if (GetAsyncKeyState(0x60 + i) & 1)
					{
						wcout << L"Phím vừa bấm : " << i << endl;
					}
					else if (i <= 5)  // Các phím ALT SHIFT CTRL
					{
						if (GetAsyncKeyState(0xA0 + i) & 1)
						{
							if (i == 0)
							{
								wcout << L"Phím vừa bấm : SHIFT TRÁI" << endl;
							}
							else if (i == 1)
							{
								wcout << L"Phím vừa bấm : SHIFT PHẢI" << endl;
							}
							else if (i == 2)
							{
								wcout << L"Phím vừa bấm : CTRL TRÁI" << endl;
							}
							else if (i == 3)
							{
								wcout << L"Phím vừa bấm : CTRL PHẢI" << endl;
							}
							else if (i == 4)
							{
								wcout << L"Phím vừa bấm : ALT TRÁI" << endl;
							}
							else if (i == 5)
							{
								wcout << L"Phím vừa bấm : ALT PHẢI" << endl;
							}
						}
						else if (i <= 4)  // Các phím mũi tên
						{
							if (GetAsyncKeyState(0x25 + i) & 1)
							{
								if (i == 0)
								{
									wcout << L"Phím vừa bấm : <" << endl;
								}
								else if (i == 1)
								{
									wcout << L"Phím vừa bấm : ^" << endl;
								}
								else if (i == 2)
								{
									wcout << L"Phím vừa bấm : >" << endl;
								}
								else if (i == 3)
								{
									wcout << L"Phím vừa bấm : V" << endl;
								}
							}
						}
					}
				}
			}
		}
		else 
		{
			i = -1;
		}

		////////////////////////////////////////////////////////////////////////////////

	}

}