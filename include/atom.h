#ifndef ATOM_H_
#define ATOM_H_

//extern int Atom_length(const char * str);

//extern const char * Atom_new(const char * str, int len);

//extern const char * Atom_string(const char * str);

//extern const char * Atom_int(long n);

const int ATOM_BUCKETS_SIZE = 200;

class Atom {

private:
	Atom* link; //一个链表
	int length;   //字节序列长度
	char* str;   //字节序列
	void init();
	Atom();
	static Atom** buckets;   //hash表
public:
	int getLength();
	char* getString();
	Atom(long n);
	Atom(const char* str);
};

#endif