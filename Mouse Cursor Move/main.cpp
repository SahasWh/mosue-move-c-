#include <iostream>
#include <Windows.h>
#include <conio.h>

// Set default state to false
bool bState{ false };

void menu(bool bState)
{
	// Clears and prints to the console
	system("cls");

	std::cout << "AutoMouse move v1.00\n";

	if (bState)
	{
		std::cout << "Status: ON\n";
	}
	else
	{
		std::cout << "Status: OFF\n";
	}
}



int main()
{
	menu(bState);
	while (true)
	{

		// Press K to start mouse movement
		if (GetAsyncKeyState(0x4B) & 1)
		{
			// Switch bMove value
			bState = !bState;
			// Print menu to console
			menu(bState);
		}

		if (bState)
		{
			//Edit Coordinates on SetCursorPos for a specific location x, y sleep = time in mm
			SetCursorPos(600, 600);
			Sleep(5000);

			SetCursorPos(1200, 600);
			Sleep(5000);
		}
	}
}