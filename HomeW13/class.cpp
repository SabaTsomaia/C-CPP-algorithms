#include <iostream>
#include <string>
using namespace std;

class Shape {
	public:
		int firstP;
		int secondP;
		int thirdP;
		int fourthP;
		
	private:
		// Can't access that
		int perimetriVar; 
		int fartobiVar;
		
	public:
		void perimetri() {
			perimetriVar = firstP + secondP + thirdP + fourthP;
			cout << "Perimetri--" << perimetriVar << "\n";
			perimetriVar;
		}
		
		void fartobiOtx() {
			fartobiVar = firstP * secondP;
			cout << "Fartobi--" << fartobiVar << "\n";
		}
		
		void fartobiOtx() {
			
			cout << "Fartobi--" << fartobiVar << "\n";
		}
};

int main() {
	Shape otxkut;
	otxkut.firstP = 10;
	otxkut.secondP = 20;
	otxkut.thirdP = 30;
	otxkut.fourthP = 40;
	
	otxkut.perimetri();
	otxkut.fartobi();
	
	Shape samkut;
	samkut.firstP = 10;
	samkut.secondP = 20;
	samkut.thirdP = 30;
	
	cout << "SAMKUTXEDI \n";
	samkut.fartobi();
	samkut.perimetri();
	
	return 0;
}
