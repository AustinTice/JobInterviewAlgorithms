#include "stdafx.h"
#include <iostream>
#include <string>

std::string reverseString(std::string);

int main() {

    return 0;
}

std::string reverseString(std::string s) {
	int size = s.length();
	char temp;

	for (int i = 0; i < size / 2; i++) {
		temp = s[i];
		s[i] = s[size-i-1];
		s[size-i-1] = temp;
	}

	return s;
}