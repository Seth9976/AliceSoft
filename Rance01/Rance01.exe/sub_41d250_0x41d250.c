// 函数: sub_41d250
// 地址: 0x41d250
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float ebp = arg8
int32_t edi = arg1
float var_10 = fconvert.s(fconvert.t(arg5) * fconvert.t(0.5))
arg5 = 0f
long double x87_r7_2 = fconvert.t(arg4)
long double temp1 = fconvert.t(0.0)
x87_r7_2 - temp1
arg1.w = (x87_r7_2 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_2, temp1) ? 1 : 0) << 0xa
    | (x87_r7_2 == temp1 ? 1 : 0) << 0xe

if ((arg1:1.b & 0x41) != 0)
    return 

arg8 = fconvert.s(float.t(0))
long double x87_r7_4 = fconvert.t(arg8)
bool p_1

do
    int32_t eax = sub_70c710(x87_r7_4 * fconvert.t(fconvert.s(fconvert.t(var_10) / x87_r7_2))
        + fconvert.t(0.5))
    void* eax_2 = sub_5f7370(*data_797da0, edi)
    
    if (eax_2 != 0)
        eax_2 = sub_5f3790(eax_2, arg9)
        
        if (eax_2 != 0)
            int32_t eax_3 = sub_70c710(fconvert.t(arg8) + fconvert.t(arg2))
            long double x87_r7_10 = fconvert.t(var_10)
            long double x87_r5_1 = fconvert.t(fconvert.s(float.t(eax)))
            long double x87_r4_2 = fconvert.t(arg3)
            int32_t eax_5 = sub_70c710(x87_r7_10 - x87_r5_1 + x87_r4_2)
            sub_5e3db0(eax_2, eax_3, sub_70c710(x87_r7_10 + x87_r5_1 + x87_r4_2), eax_3, eax_5, 
                arg6, arg7, ebp, 0xff)
    
    arg5 += 1
    arg8 = fconvert.s(float.t(arg5))
    x87_r7_4 = fconvert.t(arg8)
    long double temp2_1 = fconvert.t(fconvert.d(x87_r7_2))
    x87_r7_4 - temp2_1
    eax_2.w = (x87_r7_4 < temp2_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_4, temp2_1) ? 1 : 0) << 0xa
        | (x87_r7_4 == temp2_1 ? 1 : 0) << 0xe | 0x3800
    p_1 = unimplemented  {test ah, 0x5}
while (not(p_1))
