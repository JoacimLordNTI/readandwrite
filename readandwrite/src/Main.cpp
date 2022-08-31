#include <iostream>
#include <fstream>
#include <string>


namespace Lib {

	//Template print function
	template <typename T>
	void Print(T t)
	{
		std::cout << t << "\n";
	}

	//Writes to textfile
	void WriteToFile(std::string filePath)
	{
		std::ofstream file(filePath);
		std::string fileContent;
		std::getline(std::cin, fileContent);
		file << fileContent;
		file.close();
	}

	void ReadFromFile()
	{
		std::string fileContent;
		std::ifstream openFile("minfil.txt");
		while (std::getline(openFile, fileContent))
		{
			std::cout << "St�r i fil: " << fileContent << "\n";
		}
		openFile.close();
	}
}


int main()
{
	Lib::Print("hej");
	Lib::WriteToFile("minfil.txt");
	Lib::ReadFromFile();
}