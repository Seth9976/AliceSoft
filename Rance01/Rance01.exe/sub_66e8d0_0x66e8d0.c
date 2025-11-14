// 函数: sub_66e8d0
// 地址: 0x66e8d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* esi = arg1
float var_4 = fconvert.s(float.t(0))
int32_t var_8 = 0

if (sub_66ecd0(esi) != 0)
    char* eax_1
    
    if (esi[5] u< 0x10)
        eax_1 = esi
    else
        eax_1 = *esi
    
    int32_t* var_10_1 = &var_8
    int32_t eax_2 = sub_6b51b5(eax_1, 0x757588)
    
    if (eax_2 == 1)
        long double x87_r7_1 = float.t(var_8)
        arg2[1] = var_8
        *arg2 = eax_2
        arg2[2] = fconvert.s(x87_r7_1)
        return eax_2

int32_t eax_4 = sub_66ed40(esi)

if (eax_4.b != 0)
    if (esi[5] u>= 0x10)
        esi = *esi
    
    float* var_10_2 = &var_4
    eax_4 = sub_6b51b5(esi, 0x757594)
    
    if (eax_4 == 1)
        long double x87_r7_2 = fconvert.t(var_4)
        eax_4 = sub_70c710(x87_r7_2)
        arg2[2] = fconvert.s(x87_r7_2)
        arg2[1] = eax_4
        *arg2 = 2

return eax_4
