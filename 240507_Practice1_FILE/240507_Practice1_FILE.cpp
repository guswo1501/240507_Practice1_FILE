// �Ųٷ� �б�

#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
	vector<string> lines;
	ifstream file;

	// ���� ����
	file.open("hello.txt");

	// ������ ���������� ��������
	if (file.is_open())
	{
		// "hello.txt"������ ���� �б�
		//std::ifstream readFile("hello.txt");

		// ���͸� �����ؼ� �� �ȿ� ���� ����
		string line;

		while (std::getline(file, line)) //�� �پ� ����
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