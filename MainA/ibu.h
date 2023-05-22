#pragma once
#ifndef IBU_H
#define IBU_H

class ibu {
public:
	string nama;
	vector<anak*> daftar_anak;

	ibu(string pNama) :nama(pNama) {
		cout << "Ibu \"" << nama << "\" ada\n";
	}
	~ibu() {
		cout << "Ibu \"" << nama << "\"tidak ada\n";
	}
	void tambahkanAnak(anak*);
	void cetakAnak();
};
void ibu::tambahkanAnak(anak* pAnak) {
	daftar_anak.push_back(pAnak);
}
#endif // !IBU_H
