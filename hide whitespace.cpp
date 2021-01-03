#include <iostream>
#include <fstream>
#include <regex>
using namespace std;
int main() {
	fstream my_file;
	my_file.open("C://Users//AkashDas//OneDrive//Desktop//All Reading file//courseshareBD.txt", ios::in);
	if (!my_file) {
		cout << "No such file";
	}
	else {
		char ch;

		while (1) {
            std::regex newlines_re("\n+");

            auto result = std::regex_replace(my_file >> ch, newlines_re, "");

            std::cout << "After:\n" << result << "\n";

			if (my_file.eof())
				break;

			cout << ch;
		}

	}
	my_file.close();
	return 0;

}
