// ListProcessor.cpp

// tom bailey   1540  30 sep 2011

// tom bailey   1030  27 jan 2012
// Exercise the List class with verbose Node constructor
//   and destructor.
// Edited by Christopher Schultz
// 25 September 2017
#include "LinkedList.h"


int main()
{
	List cows;
	cout << "cows list  :  " << cows << endl;
	cout << "size of cows list : " << cows.size() << endl;
	cout << "sum of cows list : " << cows.sum() << endl << endl;

    cows.insertAsLast(10.10);
    cows.insertAsFirst(1.23);
	cows.insertAsFirst(2.34);

	cout << "cows list  :  " << cows << endl;
	cout << "size of cows list : " << cows.size() << endl;
	cout << "sum of cows list : " << cows.sum() << endl << endl;

	cows.insertAsLast(5.55);
	cout << "cows list : " << cows << endl;
	cout << "size of cows list : " << cows.size() << endl;
	cout << "sum of cows list : " << cows.sum() << endl << endl;

	cows.removeFirst();
	cout << "cows list  :  " << cows << endl;
	cout << "size of cows list : " << cows.size() << endl;
	cout << "sum of cows list : " << cows.sum() << endl << endl;

	List horses(cows);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "sum of cows list : " << cows.sum() << endl;
	cout << "sum of horses list " << horses.sum() << endl << endl;

	horses.removeFirst();
	horses.insertAsFirst(5.67);
	cows.insertAsFirst(6.78);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "size of cows list : " << cows.size() << endl;
	cout << "size of horses list : " << horses.size() << endl;
	cout << "sum of cows list : " << cows.sum() << endl;
	cout << "sum of horses list : " << horses.sum() << endl << endl;

	List pigs;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl;
	cout << "size of pigs list : " << pigs.size() << endl;
	pigs.insertAsFirst(1.2345);
	cout << "size of pigs list : " << pigs.size() << endl;
	cout << "sum of pigs list : " << pigs.sum() << endl << endl;

	pigs = cows;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;
	cout << "sum of cows list : " << cows.sum() << endl;
	cout << "sum of pigs list : " << pigs.sum() << endl;
	cout << "size of horses list : " << horses.size() << endl << endl;

	pigs = horses;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;

	cout << "size of cows list : " << cows.size() << endl;
	cout << "size of horses list : " << horses.size() << endl;
	cout << "size of pigs list : " << pigs.size() << endl << endl;

	cout << "sum of cows list : " << cows.sum() << endl;
	cout << "sum of pigs list : " << pigs.sum() << endl;
	cout << "sum of horses list : " << horses.sum() << endl << endl;

	cout << "End of code" << endl;

	return 0;
}
