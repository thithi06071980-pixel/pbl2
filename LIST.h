#ifndef LISTSV_h
#define LISTSV_h 
#include "STUDENT.h"
#include <iostream>
#include <string>
using namespace std;

struct Node{
	Student data;
	Node* next;
	Node(const Student &sv) : data(sv), next(nullptr);
};

class ListSV{
	private:
		Node* first;
        int n;
    public:
    	ListSV();
    	~ListSV();
    	bool Add(const Student& sinhvien, int vitri);
	    bool Remove(const string& mssv);
	    bool Remove(int vitri);
	    Student* Search(const string& thongtin) const;
	    void Print() const;
	    bool Save(const string& tenfile) const;
	    bool Load(const string& tenfile);
	    void Sort(KieuSapXep kieusapxep);
};
#endif    


