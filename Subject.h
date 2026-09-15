#ifndef Subject_h
#define Subject_h
#include <string>
using namespace std;

class Subject{
	private:
		string mamon;
		string tenmon;
		int sotinchi;
		double diem;
	public:
	    Suject();
		Subject(string mamon, string tenom, int sotinchi, double diem);
		string getMamon() const;
		string getTenmon() const;
		int getSotinchi() const;	
		double getDiem() const;
		void setMamon(const string& mamon);
		void setTenmon(const string& tenmon);
		void setSotinchi(int sotinchi);
		void setDiem(double diem);
		void input();
		void output() const;
		string toline() const;
		static Subject fromline(const string& line);
};
#endif
