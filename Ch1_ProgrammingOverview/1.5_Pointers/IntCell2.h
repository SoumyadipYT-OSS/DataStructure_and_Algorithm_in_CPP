#ifndef IntCell2_H
#define IntCell2_H

class IntCell2 {
public:
	explicit IntCell2(int initVal = 0);
	int read() const;
	void write(int x);

private:
	int storedValue;
};

#endif