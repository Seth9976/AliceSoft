// 函数: sub_6856c0
// 地址: 0x6856c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_1 = *(arg1 + 0x38) - *(arg1 + 0x3c)
int32_t var_8 = eax_1
float var_4 = 0f
int32_t* eax_2 = &var_8

if (eax_1 s<= 0)
    eax_2 = &var_4

int32_t eax_3 = *eax_2
float* result_1
bool cond:1 = result_1 s< eax_3
var_8 = eax_3
var_4 = 0f
int32_t* eax_4 = &result_1

if (not(cond:1))
    eax_4 = &var_8

if (*eax_4 s<= 0)
    eax_4 = &var_4

float* result = *eax_4
result_1 = result

if (*(arg1 + 0x40) != result)
    long double x87_r7_1 = float.t(result_1)
    *(arg1 + 0x40) = result
    float** result_2 = &result_1
    result_1 = fconvert.s(x87_r7_1 / float.t(var_8))
    long double x87_r7_3 = float.t(1)
    var_4 = fconvert.s(x87_r7_3)
    var_8 = fconvert.s(float.t(0))
    long double temp1_1 = fconvert.t(result_1)
    x87_r7_3 - temp1_1
    result.w = (x87_r7_3 < temp1_1 ? 1 : 0) << 8
        | (is_unordered.t(x87_r7_3, temp1_1) ? 1 : 0) << 0xa | (x87_r7_3 == temp1_1 ? 1 : 0) << 0xe
    
    if ((result:1.b & 0x41) != 0)
        result_2 = &var_4
    
    long double x87_r7_4 = fconvert.t(*result_2)
    long double temp2_1 = fconvert.t(0.0)
    x87_r7_4 - temp2_1
    result.w = (x87_r7_4 < temp2_1 ? 1 : 0) << 8
        | (is_unordered.t(x87_r7_4, temp2_1) ? 1 : 0) << 0xa | (x87_r7_4 == temp2_1 ? 1 : 0) << 0xe
    bool cond:2_1 = (result:1.b & 0x41) == 0
    result = result_2
    
    if (not(cond:2_1))
        result = &var_8
    
    long double x87_r7_5 = fconvert.t(*result)
    *(arg1 + 0xd8) = 1
    *(arg1 + 0x44) = fconvert.s(x87_r7_5)

return result
