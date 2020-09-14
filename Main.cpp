#include "TestHarness.h"
#include <windows.h>
#include <iostream>

int main()
{
	// random number generator used in some tests
	srand(::time_t(NULL));

    TestResult tr;
    TestRegistry::runAllTests(tr);

	system("start ..\\Engine\\Binaries\\Win64\\UE4Editor.exe Kobayashi_Maru.uproject /Game/ShapeGeneratorTestMap?game=myGameMode -game");

	// force console screen to hold
	char ch;
	std::cin >> ch;

	system("start mspaint.exe ..\\Kobayashi_Maru\\Saved\\Screenshots\\Windows\\HighresScreenshot00000.png");

    return 0;
}
