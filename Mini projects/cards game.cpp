#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;
string cardname[] = {"","","2","3","4","5","6","7","8","9","10","j","k","q","a"};
class card {
	int rank;
public:
	card(int r = 0) {
		rank = r;
	}
	int getvalue(int rank) {
		if (rank>=2||rank<=10) //for 2 to 10
		{
			return rank;
		}
		else if (rank==11||rank==12||rank==13) //for j,k,q
		{
			return 10 ;
		}
		else
		{
			return 11;//ace
		}
	}

};
int dealer() {
	return (rand() % 13) + 2;
}
int main() {
	srand(time(0));
	card c;
	int p1 = dealer();
	int p2 = dealer();
	int total = c.getvalue(p1) + c.getvalue(p2);
	cout << "player cards: " << cardname[p1] <<"  " << cardname[p2] << endl;
	cout << "Total player score:" << total << "\n";
	return 0;
}