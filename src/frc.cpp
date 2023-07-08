// frc.cpp : 애플리케이션의 진입점을 정의합니다.
//

#include "frc.hpp"
#include <filesystem>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
	cout << argc << endl;
	for (int i = 0; i < argc; i++) cout << argv[i] << endl;

	filesystem::path a("");
	

	return 0;
}
