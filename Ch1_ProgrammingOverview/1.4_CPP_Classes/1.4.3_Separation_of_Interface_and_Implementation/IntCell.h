/*	A class for simulating an integer memory cell.	*/

#ifndef IntCell_H
#define IntCell_H

class IntCell {
	public:
		explicit IntCell(int inititalValue = 0);
		int read() const;
		void write(int x);
	private:
		int storedValue;
};

#endif
