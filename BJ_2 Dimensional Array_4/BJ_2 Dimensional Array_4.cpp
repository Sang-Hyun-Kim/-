// BJ_2 Dimensional Array_4.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>


int Parray[100][100] = { {0,}, };

using namespace std;

int main()
{

    int paperNum = 0;
    int x, y = 0;
    int width = 0;
    cin >> paperNum;
    if (paperNum > 100)
    {
        cout << "재입력" << endl;
    }

    for (int i = 0; i < paperNum; i++)
    {
        cin >> x >> y;
        if (x > 90 || y > 90)
        {
            cout << "다시입력하세요" << endl;
            cin >> x >> y;
        }
        for (int i = x; i < x + 10; i++)
        {
            for (int j = y; j < y + 10; j++)
            {
                if (Parray[i][j] == 1)
                {
                    continue;
                }
                Parray[i][j] = 1;
                width++;
            }
        }
    }
    
    cout << width << endl;

}
