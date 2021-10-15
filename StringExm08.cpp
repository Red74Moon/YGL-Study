// 입력 파일의 문자열을 읽어 들이고
// 오른쪽으로 정렬한 출력 파일을 만드는 프로그램

#include <iostream>
#include <cstring>
#include <fstream>
#include <cassert>
#include <string>

using namespace std;

int main()
{
	ifstream inputFile;
	ofstream outputFile;
	string line;

	inputFile.open("inFile.dat");
	assert(inputFile);
	int maxSize = 0;

	while (!inputFile.eof())
	{
		getline(inputFile, line);
		if(line.size() > maxSize)
		{ 
			maxSize = line.size();
		}
	}

	inputFile.close();

	inputFile.open("inFile.dat");
	assert(inputFile);
	outputFile.open("outFile.dat");
	assert(outputFile);
	while (!inputFile.eof())
	{
		getline(inputFile, line);
		string temp(maxSize - line.size(), ' ');
		line.insert(0, temp);
		line.append("\n");
		outputFile << line;
	}
	inputFile.close();
	outputFile.close();
	return 0;
}