#include<stdio.h>
#include<conio.h>
#include <iostream>
#include "threeintegersort.h"

using std::cout;
using std::endl;
using edu::vcccd::vc::csv13::sort;

int main() {
	int numArr[] = {6, 1 ,4};
    sort(numArr);
	cout << "The numbers should appear in ascending order: ";
    for (int i = 0; i < 3; ++i)
        cout << numArr[i] << " ";
}