#include <cmath>
#include <iostream>
#include <ctime>
using std::cout;using std::cin;

uint32_t PRE_randNum()
{
	uint32_t n =((uint32_t)rand()/(RAND_MAX)+1) +(rand()%57974); // generate a number for the sake of altering time
	return n;
}

uint32_t randNum(uint32_t k)// requires a value to determine maximum number generatable
{ // uint32_t k determines the maximum value to be generated
	srand(time(0)+(PRE_randNum()-PRE_randNum()));  // Initialize random number generator.
	uint32_t n =((uint32_t)rand()/(RAND_MAX)+1) +(rand()%k); // generate a number from 1 to 10
	return n;
}


void GenerateRandom()
{
	uint32_t num = randNum(65535);
	cout << num << "\n";
	cout << "\n......\n"; // FOR DEBUGGING PURPOSE ONLY!!
}


void Generate_Random(int num)
{
	uint32_t random_number = randNum(num);
	cout << random_number << "\n";
	cout << "\n......\n"; // FOR DEBUGGING PURPOSE ONLY!!
}


void Generate_n_Random(int rep = 10, uint32_t max = 99999)
{
	// rep - number of iterations to be processed
	// max - maximum numeric value that can be generated
	
	for (int i = 0; i < rep; ++i) // for repetition/iteration count no greater than value specified in 'rep' variable
		cout << randNum(max) << "\n"; // generate random numbers

	cout << "\n......\n"; // FOR DEBUGGING PURPOSE ONLY!!
}




int main(int argc, char const *argv[])
{
	int value = 22;
	uint32_t MAX = 3467654;

	GenerateRandom();
	Generate_Random(value);
	Generate_n_Random(value, MAX);


	// input values through stream
	long long r;uint32_t m;
	cout << "Insert number of random values you would like to generate:\n"; // ADISPLAY ON TERMINAL
	cin >> r; // get iteration count value

	cout << "Insert maximum number for random generator to pick from. Range 0 to 4294967295 : \n"; // ADISPLAY ON TERMINAL
	cin >> m; // get maximum value generatable
	cout << "\n\n"; // FOR DEBUGGING PURPOSE ONLY!!

	for (long long i = 0; i < r; ++i) // for repetition/iteration count no greater than value specified in 'rep' variable
		cout << randNum(m) << "\n"; // generate random numbers

	cout << "\n......\n"; // FOR DEBUGGING PURPOSE ONLY!!

	return 0;
} // 10/11/22 11:56 PM



