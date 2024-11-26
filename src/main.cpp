#define _CRTDBG_MAP_ALLOC  
#include <stdlib.h>  
//#include <crtdbg.h>
#include "CaroApp.h"

int main() {
	std::cout << "Welcome to Caro game\n";
	std::cout << "Designed by Nguyen The - TheN2\n";
	std::cout << "Press any key to continue...";
	getchar();
	system("clear");
	CaroApp* Game = new CaroApp();
	Game->init();
	Game->start();
	delete Game;
//	_CrtDumpMemoryLeaks();
}