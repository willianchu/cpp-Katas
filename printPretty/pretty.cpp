#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int T; cin >> T; // number of test cases
	cout << setiosflags(ios::uppercase); // uppercase
	cout << setw(0xf) << internal; // set width to 16
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;


        cout << hex << left << showbase << nouppercase; // formatting
        cout << (long long) A << endl; // actual printed part

        // LINE 2
        cout << dec << right << setw(15) << setfill('_') << showpos << fixed << setprecision(2); // formatting
        cout << B << endl; // actual printed part

        // LINE 3
        cout << scientific << uppercase << noshowpos << setprecision(9); // formatting
        cout << C << endl; // actual printed part


	}
	return 0;

}

// printf("%#lx\n",(long int)A);
// printf("%.*s%+.2f\n",15 - to_string((int)B).length() - 4,"_______________",B);
// printf("%.9E\n",C);

// ios_base::fmtflags flags = cout.flags();
// cout << setw(0) << "0x" << hex << nouppercase << left << (long long)A << endl;
// cout.flags(flags);
// cout << fixed << setw(15) << setprecision(2) << setfill('_') << right << showpos << B << endl;
// cout.flags(flags);
// cout << scientific << setw(15) << setprecision(9) << noshowbase << right << C << endl;
// cout.flags(flags);

// LINE 1
        cout << hex << left << showbase << nouppercase; // formatting
        cout << (long long) A << endl; // actual printed part

        // LINE 2
        cout << dec << right << setw(15) << setfill('_') << showpos << fixed << setprecision(2); // formatting
        cout << B << endl; // actual printed part

        // LINE 3
        cout << scientific << uppercase << noshowpos << setprecision(9); // formatting
        cout << C << endl; // actual printed part
