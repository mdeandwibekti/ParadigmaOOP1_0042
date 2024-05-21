#ifndef MANUSIA_H
#define MANUSIA_H
using namespace std;

class manusia{
public:
	string nama;
	jantung varJantung;


	manusia(string pName)
		:nama(pName) {
		cout << name << " hidup\n";
	}

	~manusia() {
		cout << name << "mati\n";
	}
};
#endif
