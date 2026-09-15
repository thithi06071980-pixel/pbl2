#include "Subject.h"
#include <iostream>
#include <sstream>
#include <iomanip>
#include "Student.h"
using namespace std;

Subject::Subject() : sotinchi(0), diem(0){}
Subject::Subject(string mamon, string tenmon, int sotinchi, double diem)
    	: mamon(mamon), tenmon(tenmon), sotinchi(sotinchi), diem(diem){}

string Subject::getMamon() const{
	return mamon;}
string Subject::getTenmon() const{
	return tenmon;}
int Subject::getSotinchi() const{
	return sotinchi;}
double Subject::getDiem() const{
	return diem;
}
 
void Subject::setMamon(const string& mamon){
	this->mamon = mamon;
}
void Subject::setTenmon(const string& tenmon){
	this->tenmon = tenmon;
}
void Subject::setSotinchi(int sotinchi){
	this->sotinchi = sotinchi;
}
void Subject::setDiem(double diem){
	this->diem = diem;
}

void Subject::input(){
	cout << "Nhap ma mon: "; getline(cin, mamon);
	cout << "Nhap ten mon: "; getline(cin, tenmon);
	cout << "Nhap so tin chi: "; cin >> sotinchi;
	cout << "Nhap diem : "; cin >> diem;
	cin.ignore(); 
}

void Subject::output() const{
	cout << left
	     << setw(10) << mamon
	     << setw(25) << tenmon
	     << setw(10) << sotinchi
	     << setw(6)  << diem
	     << "\n";
}

string Subject::toline() const{
	return mamon + "|" + tenmon + "|" + sotinchi + "|" + diem;
}

Subject Subject::fromline(const strign& line){
	string datas[4];
	spilit(line,'|',datas);
	Subject mon;
	mon.setMamon(datas[0]);
	mon.setTenmon(datas[1]);
	mon.setSotinchi(datas[2]);
	mon.setDiem(datas[3]);
	return mon;
}

