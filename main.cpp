#define _CRTDBG_MAP_ALLOC  
#include <stdlib.h>  
#include <crtdbg.h>
#include "CaroApp.h"

int main() {
	CaroApp* Game = new CaroApp();
	Game->init();
	Game->start();
	delete Game;
	_CrtDumpMemoryLeaks();
}