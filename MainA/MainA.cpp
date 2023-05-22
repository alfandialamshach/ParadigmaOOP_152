#include <iostream>
#include <vector>
using namespace std;
#include "anak.h"
#include "ibu.h"

int main() {
	ibu* varIbu = new ibu("dini");
	ibu* varibu2 = new ibu("novi");
	anak* varAnak1 = new anak("tono");
	anak* varAnak2 = new anak("rini");
	anak* varAnak3 = new anak("Dewi");

	varIbu->tambahkanAnak(varAnak1);
	varIbu->tambahkanAnak(varAnak2);
	varibu2->tambahkanAnak(varAnak3);
	varibu2->tambahkanAnak(varAnak1);

	varIbu->cetakAnak();
	varibu2->cetakAnak();

	delete varIbu;
	delete varibu2;
	delete varAnak1;
	delete varAnak2;
	delete varAnak3;

}