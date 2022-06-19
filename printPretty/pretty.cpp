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


    cout << "0x" << hex << (int)A << endl;
    //B: Print it to a scale of  decimal places, preceded by a  or  sign (indicating if it's positive or negative), right justified, and left-padded with underscores so that the printed result is exactly  characters wide.
    string space_signal = (B < 0) ? "-" : "+";
    cout << space_signal << setprecision(2) << fixed << B << endl;


    cout << scientific << setprecision(9) << C << endl;


	}
	return 0;

}
