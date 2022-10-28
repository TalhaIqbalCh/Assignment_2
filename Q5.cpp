#include<iostream>
using namespace std;

int main() {
	//alphabets
	int count = 1;
	char a, b, c, d, e, f, g;

	cout << "Input 7 characters: \n";
	cin >> a >> b >> c >> d >> e >> f >> g;

	if (a == b) {
		count++;
	}
	if (a == c) {
		count++;
	}
	if (a == c) {
		count++;
	}
	if (a == d) {
		count++;
	}
	if (a == e) {
		count++;
	}
	if (a == f) {
		count++;
	}
	if (a == g) {
		count++;
	}

	if (count == 1) {
		cout << "One " << a << " ";
	}
	else if (count == 2) {
		cout << "Two " << a << " ";
	}
	else if (count == 3) {
		cout << "Three " << a << " ";
	}
	else if (count == 4) {
		cout << "Four " << a << " ";
	}
	else if (count == 5) {
		cout << "Five " << a << " ";
	}
	else if (count == 6) {
		cout << "Six " << a << " ";
	}
	else if (count == 7) {
		cout << "Seven " << a << " ";
	}


	count = 1;

	if (b != a) {
		if (b == c) {
			count++;
		}
		if (b == d) {
			count++;
		}
		if (b == e) {
			count++;
		}
		if (b == f) {
			count++;
		}
		if (b == g) {
			count++;
		}
		if (count == 1) {
			cout << "One " << b << " ";
		}
		else if (count == 2) {
			cout << "Two " << b << " ";
		}
		else if (count == 3) {
			cout << "Three " << b << " ";
		}
		else if (count == 4) {
			cout << "Four " << b << " ";
		}
		else if (count == 5) {
			cout << "Five " << b << " ";
		}
		else if (count == 6) {
			cout << "Six " << b << " ";
		}
		else if (count == 7) {
			cout << "Seven " << b << " ";
		}
	}

	count = 1;

	if (c != a && c != b) {
		if (c == d) {
			count++;
		}
		if (c == e) {
			count++;
		}
		if (c == f) {
			count++;
		}
		if (c == g) {
			count++;
		}
		if (count == 1) {
			cout << "One " << c << " ";
		}
		else if (count == 2) {
			cout << "Two " << c << " ";
		}
		else if (count == 3) {
			cout << "Three " << c << " ";
		}
		else if (count == 4) {
			cout << "Four " << c << " ";
		}
		else if (count == 5) {
			cout << "Five " << c << " ";
		}
		else if (count == 6) {
			cout << "Six " << c << " ";
		}
		else if (count == 7) {
			cout << "Seven " << c << " ";
		}
	}

	count = 1;

	if (d != a && d != b && d != c) {
		if (d == e) {
			count++;
		}
		if (d == f) {
			count++;
		}
		if (d == g) {
			count++;
		}
		if (count == 1) {
			cout << "One " << d << " ";
		}
		else if (count == 2) {
			cout << "Two " << d << " ";
		}
		else if (count == 3) {
			cout << "Three " << d << " ";
		}
		else if (count == 4) {
			cout << "Four " << d << " ";
		}
		else if (count == 5) {
			cout << "Five " << d << " ";
		}
		else if (count == 6) {
			cout << "Six " << d << " ";
		}
		else if (count == 7) {
			cout << "Seven " << d << " ";
		}
	}

	count = 1;

	if (e != a && e != b && e != c && e != d) {
		if (e == f) {
			count++;
		}
		if (e == g) {
			count++;
		}
		if (count == 1) {
			cout << "One " << e << " ";
		}
		else if (count == 2) {
			cout << "Two " << e << " ";
		}
		else if (count == 3) {
			cout << "Three " << e << " ";
		}
		else if (count == 4) {
			cout << "Four " << e << " ";
		}
		else if (count == 5) {
			cout << "Five " << e << " ";
		}
		else if (count == 6) {
			cout << "Six " << e << " ";
		}
		else if (count == 7) {
			cout << "Seven " << e << " ";
		}
	}

	count = 1;

	if (f != a && f != b && f != c && f != d && f != e) {
		if (f == g) {
			count++;
		}
		if (count == 1) {
			cout << "One " << f << " ";
		}
		else if (count == 2) {
			cout << "Two " << f << " ";
		}
		else if (count == 3) {
			cout << "Three " << f << " ";
		}
		else if (count == 4) {
			cout << "Four " << f << " ";
		}
		else if (count == 5) {
			cout << "Five " << f << " ";
		}
		else if (count == 6) {
			cout << "Six " << f << " ";
		}
		else if (count == 7) {
			cout << "Seven " << f << " ";
		}
	}

	count = 1;

	if (g != a && g != b && g != c && g != d && g != e && g != f) {
		if (count == 1) {
			cout << "One " << g << " ";
		}
		else if (count == 2) {
			cout << "Two " << g << " ";
		}
		else if (count == 3) {
			cout << "Three " << g << " ";
		}
		else if (count == 4) {
			cout << "Four " << g << " ";
		}
		else if (count == 5) {
			cout << "Five " << g << " ";
		}
		else if (count == 6) {
			cout << "Six " << g << " ";
		}
		else if (count == 7) {
			cout << "Seven " << g << " ";
		}
	}

	return 0;
}
