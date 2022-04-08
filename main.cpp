#include <iostream>
#include <Windows.h>
using namespace std;

class Solution
{

private:
    int times;

    int open()
    {
        switch (times)
        {
        case 0:
            system("FaShengShenMeShiLe.mp3");
            cout << "发生什么事了？？？" << endl;
            break;
        default:
            cout << "error!" << endl;
            system("pause");
        }
        // times++;
        return 0;
    }

public:
    Solution()
    {
        times = 0;
        SetConsoleTitleA("Get Cursor Postition");
        POINT pt;
        GetCursorPos(&pt);
        for (;;)
        {
            POINT temppt;
            GetCursorPos(&temppt); //获取鼠标指针位置到pt
            if (pt.x != temppt.x)
            {
                open();
            }
            pt = temppt;
        }
    }
};

int main()
{
    Solution s;
    return 0;
}