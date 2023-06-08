#include "library.h"

int countLetterOccurrences(const std::string &text, char letter) {
	int cost = 0;
	for (char c: text) {
		if (std::tolower(c) == std::tolower(letter)) {
			cost++;
		}
	}
	return cost;
}