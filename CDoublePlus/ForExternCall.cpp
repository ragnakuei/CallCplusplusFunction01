#include "Calculator.h"

//�i�H�Nclass������ŧi�b�~���ܦ�����
//Calculate cal;
extern "C"
{
    __declspec(dllexport) float Add(float num1, float num2)
    {
        Calculator cal;//�ŧi�bfunction���A�u����function��ϥ�
        return cal.Add(num1, num2);
    }
}
