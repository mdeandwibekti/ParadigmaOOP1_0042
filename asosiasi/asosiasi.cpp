#include <iostream>
#include <vector>
using namespace std;

class dokter;
class pasien {
public:
	string nama;
	vector<dokter*> daftar_dokter;
	pasien(string pNama) :nama(pNama) {
		cout << "pasien \"" << nama << "\" ada\n";
	}
	~pasien() {
		cout << "pasien \"" << nama << "\" tidak ada\n";
	}
	void tambahdokter(dokter*);
	void cetakdokter();
};

class dokter {
public:
	string nama;
	vector<pasien*> daftar_pasien;

	dokter(string pNama) :nama(pNama) {
		cout << "dokter \"" << nama << "\" ada\n";
	}
	~dokter() {
		cout << "dokter \"" << nama << "\" tidak ada\n";
	}

	void tambahpasien(pasien*);
	void cetakpasien();

};

void pasien::tambahdokter(dokter* pDokter) {
	daftar_dokter.push_back(pDokter);
}
void pasien::cetakdokter() {
	cout << "Daftar Dokter yang menangani pasien \"" << this->nama << "\":\n";
	for (auto& a : daftar_dokter) {
		cout << a->nama << "\n";
	}
	cout << endl;
}

int main() {
	dokter* varDokter1 = new dokter("dr.Budi");
	dokter* varDokter2 = new dokter("dr.Tono");
	pasien* varPasien1 = new pasien("Andi");
	pasien* varPasien2 = new pasien("lia");

	varDokter1->tambahpasien(varPasien1);
	varDokter1->tambahpasien(varPasien2);
	varDokter2->tambahpasien(varPasien1);

	varDokter1->cetakpasien();
	varDokter2->cetakpasien();
	varPasien1->cetakdokter();
	varPasien2->cetakdokter();

	delete varPasien1;
	delete varPasien2;
	delete varDokter1;
	delete varDokter2;

	return 0;
}