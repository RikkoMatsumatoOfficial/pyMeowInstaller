#include <filesystem>
#include <Windows.h>
#include <iostream>
using namespace std;
namespace f = std::filesystem;

void PyMeowInst() {
	f::path p("pyMeow-1.73.42.zip");
	if (f::exists(p)) {
		system("pip install pyMeow-1.73.42.zip");
		std::remove("pyMeow-1.73.42.zip");
		cout << "This Program is Created By RikkoMatsumatoOfficial" << endl;
		Sleep(4000);
		exit(432);
	}
	else {
		MessageBoxA(0, "Not Founded pyMeow Zip File!!!", "pyMeowInstaller", MB_OK | MB_ICONERROR);
		exit(443);
	}
		
}

int main() {
	PyMeowInst();
	return 0;
}
