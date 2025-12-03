//oct 5
//project ng trio///

//#include <iostream>
//using namespace std;
//
//
//
//int main() {
//	cout << "Hello, and Welcome to Permutation and Combination Calculator!" << endl;
//	cout << "Group members: Yolan Ramos, Christian Lloyd Llanes, and Jalandoni Revo " << endl;
//
//
//	char again;
//	do {
//		//declare variables 
//		cout << " Enter 1 for Permutation " << endl;
//		cout << " Enter 2 for Combination " << endl;
//		int choice;
//		cin >> choice;
//
//
//		switch (choice) {
//	
//		case 1: {
//			int n, r;
//			cout << "Welcome to Permutation Calculator!" << endl;
//			cout << "Enter the value of n: ";
//			cin >> n;
//			cout << "Enter the value of r: ";
//			cin >> r;
//			//Formula for permutation 
//			int perm = 1;
//			for (int i = 0; i < r; i++) {
//				perm *= (n - i);
//			}
//			cout << "The permutation of " << n << " and " << r << " is: " << perm << endl;
//			break;
//		}
//
//		case 2: {
//			int n, r;
//			cout << "Welcome to Combination Calculator!" << endl;
//			cout << "Enter the value of n: ";
//			cin >> n;
//			cout << "Enter the value of r: ";
//			cin >> r;
//			//Formula for combination 
//			int comb = 1;
//			for (int i = 0; i < r; i++) {
//				comb *= (n - i);
//				comb /= (i + 1);
//			}
//			cout << "The combination of " << n << " and " << r << " is: " << comb << endl;
//			break;
//		}
//		
//	default:
//	cout << "Invalid input. Please enter 1 or 2 only." << endl;
//	break;
//	
//		}
//
//		cout << "Type C / c to use again or any key to close: ";
//		cin >> again;
//	
//	if (again == 'C' || again == 'c') {
//	    system("CLS");
//	}
//	} while  (again == 'C' || again == 'c'); 
//	  
//
//	if (again != 'C' && again != 'c') {
//		cout << "Thank you for using our calculator!" << endl;
//	}
//

//}


// october 9 
//implemented cls and default break
//oct 14 
//factorial added// 
//added limits//
// Oct 19 
// added while when cin is invalid. 
//project ng trio/// 

#include <iostream>
using namespace std;


int main() {
	char again;
	cout << "***************************************************" << endl;
	cout << "*         Combinatorics & Probability             *" << endl;
	cout << "***************************************************" << endl;
	cout << "*   Hello, and Welcome to FACTORIAL,              *" << endl;
	cout << "*   PERMUTATION, & COMBINATION CALCULATOR!        *" << endl;
	cout << "*                                                 *" << endl;
	cout << "*   Group Members:                                *" << endl;
	cout << "*   Yolan Ramos                                   *" << endl;
	cout << "*   Christian Lloyd Llanes                        *" << endl;
	cout << "*   Jalandoni Revo                                *" << endl;




	do {
		//declare variables 
		cout << "***************************************************" << endl;
		cout << "*                 SELECT OPTION                   *" << endl;
		cout << "***************************************************" << endl;
		cout << "*  [1] Factorial                                  *" << endl;
		cout << "*  [2] Permutation                                *" << endl;
		cout << "*  [3] Combination                                *" << endl;
		cout << "***************************************************" << endl;

		int choice;
		while (!(cin >> choice)) {
			cout << "Invalid input. Please enter 1, 2, or 3 only." << endl;
			cin.clear();
			cin.ignore(1000, '\n');
			continue; 
			cin >> choice; 
		} 




		switch (choice) {

		case 1: {
			int n;

			cout << "Welcome to Factorial!" << endl;
			cout << "Enter the value of n: ";
	

			while (!(cin >> n)) {
				cout << "Invalid input. Please enter a number: ";
				cin.clear();
				cin.ignore(1000, '\n');
				continue;
				cin >> n;
			
			}

			unsigned long long comp = 1;
			for (int i = 1; i <= n; i++) { 
				comp = comp * i;
			}
			//limits//
			if (n < 0) {
				cout << "Error: Factorial is not defined for negative numbers." << endl;
				break;
			}
		
			cout << "\n-----------------------------------------------" << endl;
			cout << "                FACTORIAL RESULT                " << endl;
			cout << "-----------------------------------------------" << endl;
			cout << " The Factorial of " << n << " is: " << comp << endl;
			cout << "-----------------------------------------------" << endl;
			break;
		}

		case 2: {
			int n, r;
			cout << "Welcome to Permutation!" << endl;
			cout << "Enter the value of n: ";
			cin >> n;
			while (cin.fail()) {
				cout << "Invalid input. Please enter a number for n: ";
				cin.clear();
				cin.ignore(1000, '\n');

				cin >> n;
			}

			cout << "Enter the value of r: ";
			cin >> r;
			while (cin.fail()) {
				cout << "Invalid input. Please enter a number for r: ";
				cin.clear();
				cin.ignore(1000, '\n');
				cin >> r;

			}
			//Formula for permutation 
		unsigned long long perm = 1;
			for (int i = 0; i < r; i++) {
				perm *= (n - i);
			}
			//limits//
			if (n < 0 || r < 0) {
				cout << "Error: Negative numbers are not allowed." << endl;
				break;
			}
			if (r > n) {
				cout << "Error: r cannot be greater than n in permutation." << endl;
				break;
			}
			if (n > 100) {
				cout << "Error: Value too large! Please try smaller numbers ." << endl;
				break;
			}



			cout << "\n-----------------------------------------------" << endl;
			cout << "               PERMUTATION RESULT               " << endl;
			cout << "-----------------------------------------------" << endl;
			cout << " The permutation of " << n << " and " << r << " is: " << perm << endl;
			cout << "-----------------------------------------------" << endl;
			break;
		}

		case 3: {
			int n, r;
			cout << "Welcome to Combination!" << endl;
			cout << "Enter the value of n: ";
			cin >> n;
			while (cin. fail()) {
				cout << "Invalid input. Please enter a number for n: ";
				cin.clear();
				cin.ignore(1000, '\n');
				cin >> n;
			}

			cout << "Enter the value of r: ";
			cin >> r;
			while (cin.fail()) {
				cout << "Invalid input. Please enter a number for r: ";
				cin.clear();
				cin.ignore(1000, '\n');
				cin >> r;

			}
			//Formula for combination 
			unsigned long long comb = 1;
			for (int i = 0; i < r; i++) {
				comb *= (n - i);
				comb /= (i + 1);
			}

			//limits//
			if (n < 0 || r < 0) {
				cout << "Error: Negative numbers are not allowed." << endl;
				break;
			}
			if (r > n) {
				cout << "Error: r cannot be greater than n in combination." << endl;
				break;
			}
			if (n > 100) {
				cout << "Error: Value too large! Please try smaller numbers (n <= 100)." << endl;
				break;
			}

			cout << "\n-----------------------------------------------" << endl;
			cout << "               COMBINATION RESULT               " << endl;
			cout << "-----------------------------------------------" << endl;
			cout << " The combination of " << n << " and " << r << " is: " << comb << endl;
			cout << "-----------------------------------------------" << endl;
			break;
		}

			  
		default:
			cout << "Invalid input. Please enter 1, 2, and 3 only." << endl;
			break;
			  } 
	
			cout << "Type C / c to use again or any key to close: ";
			cin >> again;

			if (again == 'C' || again == 'c') {
				system("CLS");
			}
		} while (again == 'C' || again == 'c');


		if (again != 'C' && again != 'c') {
			cout << "\n+----------------------------------------------+" << endl;
			cout << "|     Thank you for using our calculator!      |" << endl;
			cout << "+----------------------------------------------+" << endl;
		}


}
