#include <iostream>
using namespace std;
int main() {
	//If1. ???? ????? ?????. ???? ??? ???????? ?????????????, ?? ????????? ?
	//???? 1; ? ????????? ?????? ?? ???????? ???.??????? ?????????? ?????.
	/*int a;
	cin >> a;
	if (a > 0) {
		a += 1;
	}
	cout << a << endl;*/
	//If2. ???? ????? ?????. ???? ??? ???????? ?????????????, ?? ????????? ?
	//???? 1; ? ????????? ?????? ??????? ?? ???? 2. ??????? ?????????? ?????.
	/*int a;
	cin >> a;
	if (a > 0) {
		a += 1;
	}
	else {
		a -= 2;
	}
	cout << a << endl;*/
	//If4.???? ??? ????? ?????.????? ?????????? ????????????? ????? ? ???????? ??????.
	/*int a, b, c;
	int k = 0;
	if (a > 0) {
		k++
	}
	if (b > 0) {
		k++;
	}
	if (c > 0) {
		k++;
	}
	cout << k << endl;*/
	//If6.???? ??? ?????.??????? ??????? ?? ???.
	/*int a, b;
	cin >> a >> b;
	if (a > b) {
		cout << a << endl;
	}
	else if (b > a) {
		cout << b << endl;
	}
	else if (a == b) {
		cout << "=" << endl;
	}*/
	//If7.???? ??? ?????. ??????? ?????????? ????? ???????? ?? ???.
	/*int a, b;
	cin >> a >> b;
	if (a > b) {
		cout << b << endl;
	}
	else if (b > a) {
		cout << a << endl;
	}*/
	//If8.???? ??? ?????.??????? ??????? ???????, ? ????? ??????? ?? ???.
	/*int a, b;
	cin >> a >> b;
	if (b > a) {
		cout << b << " " << a;
	}
	else if (b > a) {
		cout << a << " " << b;
	}*/
	//If9. ???? ??? ?????????? ????????????? ????:
	//A, B. ???????????????? ???????? ?????? ?????????? ???,
	//????? ? A ????????? ??????? ?? ????????,
	//? ? B ? ???????.??????? ????? ???????? ?????????? A ? B.
	double a, b, t;
	cin >> a >> b;
	if (a > b) {
		t = a;
		a = b;
		b = t;
		cout << b << a << " " << endl;
	}
	else if (b > a) {
		cout << b << a << " " << endl;
	}
	else if (b == a) {
		cout << b << a << " " << endl;
	}

}