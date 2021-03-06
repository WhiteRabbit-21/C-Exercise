#include "pch.h"
#include <iostream>
using namespace std;

//#define cheat
//#define N 3

struct Test {
	char Question[100];
	char Ans1[100];
	char Ans2[100];
	char Ans3[100];
	char Ans4[100];
	int CorrAns;

	void Set(const char Quest[], const char Answer1[], const char Answer2[], const char Answer3[], const char Answer4[], int CA) {
		strcpy_s(Question, Quest);
		strcpy_s(Ans1, Answer1);
		strcpy_s(Ans2, Answer2);
		strcpy_s(Ans3, Answer3);
		strcpy_s(Ans4, Answer4);
		CorrAns = CA;
	}

	void CorrectAnswer(int Z, int &cnt) {

#ifdef cheat
		Z = CorrAns;
#endif
		if (Z == CorrAns) {
			cout << "Answer is correct" << endl;
			cnt++;
		}
		else {
			cout << "You`re anwer is wrong" << endl;
		}
	}

	void AskQue() {
		cout << Question << endl;
		cout << Ans1 << endl;
		cout << Ans2 << endl;
		cout << Ans3 << endl;
		cout << Ans4 << endl;
	}
};

int Check(int NumBut) {
	int chk = 0;
	switch (NumBut) {
	case 1: chk = 1; break;
	case 2: chk = 2; break;
	case 3: chk = 3; break;
	case 4: chk = 4; break;
	}
	return chk;
}

void PrintStruct(Test Array[]) {
	for (int i = 0; i < 7; i++) {
		cout << Array[i].Question;
		cout << Array[i].Ans1;
		cout << Array[i].Ans2;
		cout << Array[i].Ans3;
		cout << Array[i].Ans4;
	}
}


int main()
{
	cout << "Geografic Test: " << endl << endl;
	int cnt = 0;
	int const k = 7;

	Test Array[k];

	Array[0].Set("First quetion. The smallest country in the world is: \n", "1. Vatican\n", "2. Monaco\n", "3. Malta\n", "4. Luxemburg\n", 1);

	Array[1].Set("Second quetion. Biggest country in Europe is: \n", "1. Germany\n", "2. United Kingdom\n", "3. Ukraine\n", "4. Greece\n", 3);

	Array[2].Set("Third quetion. The highest mountain in the world: \n", "1. Hoverla\n", "2. Homolungma\n", "3. Triglav\n", "4. Chogori\n", 2);

	Array[3].Set("Fourth quetion. The biggest (not highest) waterfall in the world: \n", "1. Angels Fall\n", "2. Victoria Fall\n", "3. Hawasu Fall\n", "4. Niagara Fall\n", 4);

	Array[4].Set("Fifth quetion. In which country located the Stonehenge: \n", "1. United Kingdom\n", "2. Austria\n", "3. Norway\n", "4. Finland\n", 1);

	Array[5].Set("Sixth quetion. Quantity countries in Europe Union: \n", "1. 26\n", "2. 28\n", "3. 24\n", "4. 22\n", 2);

	Array[6].Set("Seventh quetion. The longest river in Europe: \n", "1. Rhine\n", "2. Dnipro\n", "3. Nile\n", "4. Danube\n", 4);

	//PrintStruct(Array);

	int i = 0;
	int CheckInLoop;
#ifdef N
	i += N;
	cnt += N;
#endif

	int NumChar;
	for (i; i < k; i++) {

		Array[i].AskQue();
		cin >> NumChar;
		Array[i].CorrectAnswer(Check(NumChar), cnt);
		system("pause");
		system("cls");

		//CheckInLoop = Check(NumChar);
		//Array[i].CorrectAnswer(CheckInLoop, cnt);

	}
	cout << "Quantity of correct answers is: " << cnt << endl;

}
