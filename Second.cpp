#include "Second.h"

Second::Second() :
		second(0) {
}
Second::Second(int second) {
	this->second = second % 60;
}

Second::~Second() {
}

int Second::getSecond() const {
	return this->second;
}

void Second::setSecond(int second) {
	this->second = second;
}

std::ostream& operator <<(std::ostream& stream, const Second& sec) {
	stream << sec.getSecond()<< "s";
	return stream;
}
