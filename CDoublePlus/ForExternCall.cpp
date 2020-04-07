#include "Calculator.h"

//可以將class的物件宣告在外面變成全域
//Calculate cal;
extern "C"
{
    __declspec(dllexport) float Add(float num1, float num2)
    {
        Calculator cal;//宣告在function內，只有該function能使用
        return cal.Add(num1, num2);
    }
}
