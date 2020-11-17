#include<iostream>
#include<string>
#include<ctime>

using namespace std;

string commonChars(const string& s1, const string& s2) {
//	用来测试的代码
//	cout << s1 << endl;
//	cout << s2 << endl;

	string commons;

	for (int i = 0; i < s1.length(); i++) {
		if (commons.length() > 0 && commons.find(s1[i]) != string::npos) {
//			调试的时候用的
/*			cout << s1[i] << endl;
			cout << commons.find(s1[i]) << endl;*/
			continue;
		}
		for (int j = 0; j < s2.length(); j++) {
			if (commons.length() > 0 && commons.find(s2[j]) != string::npos) {
				continue;
			}
			if (s1[i] == s2[j]) {
				commons = commons + s1[i];
			}
		}
	}
	return commons;
}

int main(int argc, char* argv[]) {

	double startTime = time(0);
	string s1, s2;

	cout << "Please enter first string(s1):";
	getline(cin, s1);
	cout << "Please enter second string(s2):";
	getline(cin, s2);

	string s = commonChars(s1, s2);
	cout << "The common is " << s << endl;
	double endTime = time(0);
	cout << "The total time is " << (endTime - startTime) / 1000 << "s" << endl;
	return 1;
}