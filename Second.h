#ifndef SECOND_H_
#define SECOND_H_
#include <ostream>

class Second {
public:
	Second();
	Second(int second);
	virtual ~Second();
	int getSecond() const;
	void setSecond(int second);

private:
	int second;
};
std::ostream& operator<<(std::ostream& stream, const Second& sec);

#endif /* SECOND_H_ */
