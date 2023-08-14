#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int currentRow = 0;
	int maxRow = 5;
	int column = 0;
	
	vector<string> arrayS(5);
	int checkContinue = 0;
	

	for (currentRow; currentRow < maxRow; currentRow++)
	{
		string tempRow;
		getline(cin, tempRow);
		if (tempRow.length() < 16)
		{
			tempRow.append(16 - tempRow.length(), '\n');
		}
		arrayS[currentRow].append(tempRow);
	}

	for (column = 0; column < 15; column++)
	{
		string returnRow;
		for (int rowNum = 0; rowNum < 5; rowNum++)
		{
			
			if (arrayS[rowNum][column]== '\n')
			{
				continue;
			}
			returnRow += arrayS[rowNum][column];
		}
		if (!returnRow.empty())
		{
			cout << returnRow;
		}
	}
	cout<< endl;
}