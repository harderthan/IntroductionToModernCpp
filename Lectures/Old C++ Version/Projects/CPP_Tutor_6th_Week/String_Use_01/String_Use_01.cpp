#include <iostream>
#include <string>

int main() {
	// C 스타일의 문자열을 만듦
	char cstyle[] = "Are you a string, too?";

	// string 객체를 만듦
	std::string cppstyle;

	// 변환
	cppstyle = cstyle;

	// 두 문자열을 출력
	std::cout << "cstyle = " << cstyle << "\n";
	std::cout << "cppstyle = " << cppstyle << "\n";

	return 0;
}