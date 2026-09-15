#ifndef STUDENT_h
#define STUDENT_h
#include <string>
#include <iostream>
using namespace std;
 
class Student {
	private:
		string mssv;
	    string hoten;
	    string ngaysinh;
	    string gioitinh;
	    string tenlop;
	    string khoa;    
	    string sdt;
    public:
    	//constructor
	    Student();
		Student(string mssv, string hoten, string ngaysinh, string gioitinh, string tenlop, string khoa, string sdt);	
	
		//getter
		string getMssv() const;
		string getHoten() const;
		string getNgaysinh() const;
		string getGioitinh() const;
		string getTenlop() const; 
		string getKhoa() const;
		string getSdt () const;
		
		//setter
		void setMssv(const string& mssv);
		void setHoten(const string& hoten);
		void setNgaysinh(const string& ngaysinh);
		void setGioitinh(const string& gioitinh);
		void setTenlop(const string& tenlop);
		void setKhoa(const string& khoa);
		void setSdt(const string& sdt);
		
		//IO
		void input();
		void output() const;
		string toLine () const;
		static Student fromLine(const string& line);
};  
#endif 
 
