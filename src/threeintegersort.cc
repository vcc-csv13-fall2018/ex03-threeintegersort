#include<stdio.h>
#include<conio.h>
#include <iostream>


namespace edu {
	namespace vcccd {
		namespace vc {
			namespace csv13 {
				void sort(int numArr[]) {
					int i, j, minNum, temp;
					for (i = 0; i < 3 - 1; i++) {
                        minNum = i;
                        for (j = i + 1; j < 3; j++)
                            if (numArr[j] < numArr[minNum])
                                minNum = j;
                        if (minNum != i) {
                            temp = numArr[i];
                            numArr[i] = numArr[minNum];
                            numArr[minNum] = temp;
                        }
                    }
				}
			}
		}
	}
}