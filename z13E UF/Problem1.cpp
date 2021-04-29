#include <iostream>
#include <cstring>   // strlen, strcpy, strcat, strcmp
#include <cctype>    // tolower, toupper
using namespace std;

class String {
	char* s_;
public:
	String() {
		s_ = new char[1];
		s_[0] = '\0';
	}

	String(const char* s) {
		s_ = new char(strlen(s) + 1);
		strcpy_s(s_ , strlen(s) +1, s);
	}

	String(const String& s) {
		s_ = new char(strlen(s.s_) + 1);
		strcpy_s(s_, strlen(s.s_) +1, s.s_);
	}

	String  operator+ (const char* n) const {
		size_t lenght = char(strlen(s_) + 1);
		return strcat_s(s_, n);
	}
//	String  operator+ (const String& s) const {
//		size_t lenght = char(strlen(s_) + 1);
//		return strcat_s(s_, n);
//	}
	String& operator= (const char* n) {

		size_t lenght = strlen(n);
		delete[] s_;
		s_ = new char[lenght +1];
		for (int i = 0; i <= lenght; i++)
		{
			s_[i] = n[i];
		}
		return *this;

	}
	String& operator= (const String& s) {
		if (s == s_) return *this;
	
		size_t lenght = strlen(strcpy_s(s_, strlen(s.s_), s.s_));
		delete[] s_;
		s_ = new char[lenght + 1];
		for (int i = 0; i <= lenght; i++)
		{
			s_[i] = s[i];
		}
		return *this;


	}
	bool    operator==(const char* n) const;
	bool    operator==(const String& s) const;
	bool    operator!=(const char* n) const;
	bool    operator!=(const String& s) const;
	String& toLower();
	String& toUpper();
	
	size_t length() const {
		return strlen(s_);
	}

	~String() {
		delete[] s_;
	}

	friend String operator+ (const char*, const String&);
	friend bool   operator==(const char*, const String&);
	friend bool   operator!=(const char*, const String&);
	friend std::ostream& operator<<(std::ostream&,
		const String&);
};

// ...

int main() {

	String s = "sth";
//	String s = "To " + String("be ") + "or not to be";
	cout << s << endl;
//	s = s.toUpper().toLower().toUpper() + "!";
//	cout << s << endl;

//	String a("a"), A = "A";
//	cout << boolalpha
//		<< ("a" == a && "a" != A && a != A &&
//			a == "a" &&  A != "a" && a == A.toLower() &&
//			s.length() == 19) << endl;
}