#include "STUDENT.h"
#include <iostream>
#include <sstream>

using namespace std;

static void spilit (const string& line, char d, string* res){
	int dem = 0;
	stringstream ss(line);
	string data; 
	while (getline(ss, data, d)) 
		res[dem++] = data;
}

//constructor
Student::Student() {}
Student::Student( string mssv, string hoten, string ngaysinh, string gioitinh, string tenlop, string khoa, string sdt)
      : mssv(mssv), hoten(hoten), ngaysinh(ngaysinh), gioitinh(gioitinh), tenlop(tenlop), khoa(khoa), sdt(sdt){}	
      
//getter
string Student::getMssv() const{
    return mssv;
}
string Student::getHoten() const{
    return hoten;
}
string Student::getGioitinh() const{
    return gioitinh;
}
string Student::getNgaysinh() const{
    return ngaysinh;
}
string Student::getTenlop() const{
    return tenlop;
}
string Student::getKhoa() const{//
	return khoa;
}
string Student::getSdt() const{
	return sdt;
}

//setter
void Student::setMssv(const string mssv) {
    this->mssv = mssv;
}
void Student::setHoten(const string hoten) {
    this->hoten = hoten;
}
void Student::setNgaysinh(const string ngaysinh) {
    this->ngaysinh = ngaysinh;
}
void Student::setGioitinh(const string gioitinh) {
    this->gioitinh = gioitinh;
}
void Student::setTenlop(const string tenlop) {
    this->tenlop = tenlop;
}
void Student::setKhoa(const string khoa) {
    this->khoa = khoa;
}
void Student::setSdt (const string sdt) {
	this->sdt = sdt;
}

//IO
void Student::input() {
	cout << "Nhap ma sinh vien: "; getline (cin, mssv);
	cout << "Nhap ho va ten: "; getline (cin, hoten);
	cout << "Nhap ngay sinh: "; getline (cin, ngaysinh);
	cout << "Nhap gioi tinh: "; getline (cin, gioitinh);
	cout << "Nhap ten lop: "; getline(cin, tenlop);
	cout << "Nhap khoa: "; getline (cin, khoa);
	cout << "Nhap so dien thoai: "; getline (cin, sdt);
}

void SinhVien::xuat() const {
    cout << left
         << setw(10) << mssv
         << setw(22) << hoten
         << setw(12) << ngaysinh
         << setw(6)  << gioitinh
         << setw(10) << lop
         << setw(15) << khoa
         << setw(13) << sdt
         << "\n";
}

string Student::toLine() const {
	return mssv + "|" + hoten + "|" + ngaysinh + "|" + gioitinh + "|" + lop + "|" + khoa  + "|" + sdt;
}

Student Student::fromLine(const string &line) {
	string datas[7];
	spilit(line, '|', datas);
	Student sv;
	sv.setMssv(datas[0]);
	sv.setHoten(datas[1]);
	sv.setNgaysinh(datas[2]);
	sv.setGioitinh(datas[3]);
	sv.setTenlop(datas[4]);
	sv.setKhoa(datas[5]);
	sv.setSdt(datas[6]);
	return sv;
} 


