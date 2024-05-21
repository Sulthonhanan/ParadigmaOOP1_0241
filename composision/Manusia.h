
#ifndef Manusia_H
#define Manusia_H


class manusia {
public:
	string name;
	jantung varjantung;

	manusia(string pName):name(pName) {
		cout << name << " hidup\n";
	}

	manusia() {
		cout << name << " mati\n";
	}
};
#endif 

