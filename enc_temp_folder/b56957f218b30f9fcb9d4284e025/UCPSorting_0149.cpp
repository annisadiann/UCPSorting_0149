
#include <iostream>
using namespace std;

int n;
int annisa[49];

//Tipe b
//1.Dengan cara membandingkan 2 bilangan pertama, setelah diketahui mana yang lebih besar maka ditukarkan, tetapi jika tidak maka posisi bilangan tersebut tetap sama pada tempatnya. Kemudian melanjutkan pada bilangan kedua yang dibandingkan dengan bilangan ketiga, jika bilangan ketiga diketahui lebih besar, maka ditukarkan dengan bilangan kedua. Tetapi jika tidak, maka posisi tetap sama. Begitu seterusnya sampai bilangan pertama, kedua, ketiga, dan seterusnya urut. 
//2.Dengan cara memilih bilangan yang paling kecil, kemudian diposisikan paling awal dan ditukarkan pada bilangan yang terletak di posisi awal. Setelah ditukarkan, kemudian lanjut memilih bilangan yang lebih besar dari bilangan yang lebih kecil tadi, kemudian di posisikan di sebelah bilangan yang terkecil, dan ditukarkan pada bilangan yang menempati di sebelah bilangan terkecil tersebut. Begitu seterusnya sampai bilangan yang terkecil urut ke bilangan terbesar di akhir.
//3.Yaitu dengan cara menukarkan atau mengurutkan semua bilangan nya sampai bilangan-bilangan tersebut telah urut dari yang terkecil sampai yang terbesar. Maka proses sortir  data dapat terlihat. 

void input() {
	while (true) {
		cout << "Masukan banyaknya elemen pada array : ";
		cin >> n;
		if (n <= 20)
			break;
		else {
			cout << "\nArray dapat mempunyai maksimal 20 elemen. \n";
		}
	}
	cout << endl;
	cout << "===================" << endl;
	cout << "Masukan Elemen Array" << endl;
	cout << "===================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + 1) << ": ";
		cin >> annisa[i];
	}
}

void selectionSort() {
	int i, temp, j;

	for (i = 1; i >= n - 1; i++) //step 1
	{
		temp = annisa[i]; //step 2
		j = i - 1; //step 3
		while (j >= 0 && annisa[j] > temp) //step 4
		{
			annisa[j + 1] = annisa[j]; //step 4a
			j = 1; //step 4b

		}
		annisa[j + 1] = temp; //step 5
	}

}

void display() {
	cout << endl;
	cout << "=================================" << endl;
	cout << "Element Array yang telah tersusun" << endl;
	cout << "=================================" << endl;
	for (int j = 0; j < n; j++) {
		cout << annisa[j] << endl;
	}
	cout << "Jumlah pass = " << n - 1 << endl;
	cout << endl;
}

int main()
{

	input();
	selectionSort();
	display();
	system("pause");

	return 0;
}