#include <iostream>
#include <string>
#include <fstream>
#include <cstring>

//using the namespace std
using namespace std;

//defines the number of words to 10
#define N_WORDS 10
//puts the max number of words to 1024
const int MAX_WORDS = 1024;
//creates an array called wordArray to keep track of the ten words in inputfile1
string wordArray[10];
//creates an array to keep track of how many times each word is in the inputfile2 three paragraphs
int numberArray[10];

void main() {
	//stream the file with infile called inputfile1
	ifstream infile;
	infile.open("inputfile1.txt");
	//create/open the outputfile for the outputs to be written to
	ofstream outfile("outputfile.txt");

	//initiate the ints of i and n
	int i;
	int n;
	int numberOfTimesFound = 0;

	//take the ten words from the inputfile1 and put them in an array of strings for use latter
	//ifstream file("inputfile1.txt");
	if (infile.is_open())
	{
		for (int n = 0; n < 10; n++)
		{
			infile >> wordArray[n];
		}
	}
	infile.close();

	// read and print each of the 10 words to the screen to let the user know what they are
	string inStr[MAX_WORDS];
	ifstream infile2("inputfile1.txt");
	for (i = 0; i < MAX_WORDS; i++) {
		if (!infile2.eof()) {
			infile2 >> inStr[i];
			cout << inStr[i] << endl;
		}
	}
	infile2.close();
	system("pause");
	
	// display the three paragraphs in the second input file for the user to brows one paragraph/line at a time
	string oneLine;
	ifstream infile3("inputfile2.txt");
	while (getline(infile3, oneLine)) {
		cout << oneLine << endl;
	}
	infile3.close();
	system("pause");

	//search for file for any matching words to the ten from the previoues files
	/* read 1 string (word) each time */
	inStr[MAX_WORDS];
	ifstream infile4("inputfile2.txt");
	for (i = 0; i < MAX_WORDS; i++) {
		if (!infile4.eof()) {
			infile4 >> inStr[i];
			if (inStr[i] == wordArray[0]) {
				numberOfTimesFound++;
			}
		}
	}
	numberArray[0] = numberOfTimesFound;
	numberOfTimesFound = 0;
	infile4.close();

	inStr[MAX_WORDS];
	ifstream infile5("inputfile2.txt");
	for (i = 0; i < MAX_WORDS; i++) {
		if (!infile5.eof()) {
			infile5 >> inStr[i];
			if (inStr[i] == wordArray[1]) {
				numberOfTimesFound++;
			}
		}
	}
	numberArray[1] = numberOfTimesFound;
	numberOfTimesFound = 0;
	infile5.close();

	inStr[MAX_WORDS];
	ifstream infile6("inputfile2.txt");
	for (i = 0; i < MAX_WORDS; i++) {
		if (!infile6.eof()) {
			infile6 >> inStr[i];
			if (inStr[i] == wordArray[2]) {
				numberOfTimesFound++;
			}
		}
	}
	numberArray[2] = numberOfTimesFound;
	numberOfTimesFound = 0;
	infile6.close();

	inStr[MAX_WORDS];
	ifstream infile7("inputfile2.txt");
	for (i = 0; i < MAX_WORDS; i++) {
		if (!infile7.eof()) {
			infile7 >> inStr[i];
			if (inStr[i] == wordArray[3]) {
				numberOfTimesFound++;
			}
		}
	}
	numberArray[3] = numberOfTimesFound;
	numberOfTimesFound = 0;
	infile7.close();

	inStr[MAX_WORDS];
	ifstream infile8("inputfile2.txt");
	for (i = 0; i < MAX_WORDS; i++) {
		if (!infile8.eof()) {
			infile8 >> inStr[i];
			if (inStr[i] == wordArray[4]) {
				numberOfTimesFound++;
			}
		}
	}
	numberArray[4] = numberOfTimesFound;
	numberOfTimesFound = 0;
	infile8.close();

	inStr[MAX_WORDS];
	ifstream infile9("inputfile2.txt");
	for (i = 0; i < MAX_WORDS; i++) {
		if (!infile9.eof()) {
			infile9 >> inStr[i];
			if (inStr[i] == wordArray[5]) {
				numberOfTimesFound++;
			}
		}
	}
	numberArray[5] = numberOfTimesFound;
	numberOfTimesFound = 0;
	infile9.close();

	inStr[MAX_WORDS];
	ifstream infile10("inputfile2.txt");
	for (i = 0; i < MAX_WORDS; i++) {
		if (!infile10.eof()) {
			infile10 >> inStr[i];
			if (inStr[i] == wordArray[6]) {
				numberOfTimesFound++;
			}
		}
	}
	numberArray[6] = numberOfTimesFound;
	numberOfTimesFound = 0;
	infile10.close();

	inStr[MAX_WORDS];
	ifstream infile11("inputfile2.txt");
	for (i = 0; i < MAX_WORDS; i++) {
		if (!infile11.eof()) {
			infile11 >> inStr[i];
			if (inStr[i] == wordArray[7]) {
				numberOfTimesFound++;
			}
		}
	}
	numberArray[7] = numberOfTimesFound;
	numberOfTimesFound = 0;
	infile11.close();

	inStr[MAX_WORDS];
	ifstream infile12("inputfile2.txt");
	for (i = 0; i < MAX_WORDS; i++) {
		if (!infile12.eof()) {
			infile12 >> inStr[i];
			if (inStr[i] == wordArray[8]) {
				numberOfTimesFound++;
			}
		}
	}
	numberArray[8] = numberOfTimesFound;
	numberOfTimesFound = 0;
	infile12.close();

	inStr[MAX_WORDS];
	ifstream infile13("inputfile2.txt");
	for (i = 0; i < MAX_WORDS; i++) {
		if (!infile13.eof()) {
			infile13 >> inStr[i];
			if (inStr[i] == wordArray[9]) {
				numberOfTimesFound++;
			}
		}
	}
	numberArray[9] = numberOfTimesFound;
	numberOfTimesFound = 0;
	infile13.close();


	//display the what each word is and the number they are along with how many times it is in the three paragraphs
	cout << "Word One is " << wordArray[0] << " and was found " << numberArray[0] << " times." << endl;
	cout << "Word Two is " << wordArray[1] << " and was found " << numberArray[1] << " times." << endl;;
	cout << "Word Three is " << wordArray[2] << " and was found " << numberArray[2] << " times." << endl;;
	cout << "Word Four is " << wordArray[3] << " and was found " << numberArray[3] << " times." << endl;;
	cout << "Word Five is " << wordArray[4] << " and was found " << numberArray[4] << " times." << endl;;
	cout << "Word Six is " << wordArray[5] << " and was found " << numberArray[5] << " times." << endl;;
	cout << "Word Seven is " << wordArray[6] << " and was found " << numberArray[6] << " times." << endl;;
	cout << "Word Eight is " << wordArray[7] << " and was found " << numberArray[7] << " times." << endl;;
	cout << "Word Nine is " << wordArray[8] << " and was found " << numberArray[8] << " times." << endl;;
	cout << "Word Ten is " << wordArray[9] << " and was found " << numberArray[9] << " times." << endl;;

	//print the info of what the word, word number and how many times it is in the three paragraphs to the output file
	outfile << "Word One is " << wordArray[0] << " and was found " << numberArray[0] << " times." << endl;;
	outfile << "Word Two is " << wordArray[1] << " and was found " << numberArray[1] << " times." << endl;;
	outfile << "Word Three is " << wordArray[2] << " and was found " << numberArray[2] << " times." << endl;;
	outfile << "Word Four is " << wordArray[3] << " and was found " << numberArray[3] << " times." << endl;;
	outfile << "Word Five is " << wordArray[4] << " and was found " << numberArray[4] << " times." << endl;;
	outfile << "Word Six is " << wordArray[5] << " and was found " << numberArray[5] << " times." << endl;;
	outfile << "Word Seven is " << wordArray[6] << " and was found " << numberArray[6] << " times." << endl;;
	outfile << "Word Eight is " << wordArray[7] << " and was found " << numberArray[7] << " times." << endl;;
	outfile << "Word Nine is " << wordArray[8] << " and was found " << numberArray[8] << " times." << endl;;
	outfile << "Word Ten is " << wordArray[9] << " and was found " << numberArray[9] << " times." << endl;;
	outfile.close();

	system("pause");
}