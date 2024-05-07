// 거꾸로 읽기

#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
	vector<string> lines;
	ifstream file;

	// 파일 열기
	file.open("hello.txt");

	// 파일이 정상적으로 열렸으면
	if (file.is_open())
	{
		// "hello.txt"파일의 내용 읽기
		//std::ifstream readFile("hello.txt");

		// 벡터를 생성해서 그 안에 내용 저장
		string line;

		while (std::getline(file, line)) //한 줄씩 저장
		{
			lines.push_back(line);
			cout << line << endl;
		}		
	}

	ofstream out_file("output.txt");

	//out_file << lines[2] << endl << lines[1] << endl << lines[0] << endl;

	for (int i = 2; i >= 0; i--)
	{
		out_file << lines[i] << endl;
	}

	out_file.close();

	file.close();

}