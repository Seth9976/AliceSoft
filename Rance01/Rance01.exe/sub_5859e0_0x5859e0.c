// 函数: sub_5859e0
// 地址: 0x5859e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* esi = arg2
int32_t eax_1 = (*(*esi + 0x10))()
int32_t eax_3 = (*(*esi + 0x14))()

if (*(arg1 + 0xc) != 0)
    arg5 = fconvert.s(float.t(1) - fconvert.t(arg5))

float var_8 = fconvert.s(float.t(eax_1))
long double x87_r7_4 = fconvert.t(var_8)
int32_t eax_4 = sub_70c710(x87_r7_4 * fconvert.t(arg5))
long double x87_r6_4 = float.t(0)
float eax_6 = eax_1 - eax_4

if (*(arg1 + 0xc) != 0)
    if (eax_4 s> 0)
        (*(***(arg1 + 4) + 0x3c))(esi, 0, 0, eax_4, eax_3, arg4, fconvert.s(x87_r6_4), 
            fconvert.s(x87_r6_4), fconvert.s(x87_r7_4), fconvert.s(float.t(eax_3)))
        x87_r6_4 = float.t(0)
        x87_r7_4 = fconvert.t(var_8)
    
    if (eax_6 s> 0)
        (*(***(arg1 + 4) + 0x3c))(esi, eax_4, 0, eax_6, eax_3, arg3, fconvert.s(x87_r6_4), 
            fconvert.s(x87_r6_4), fconvert.s(x87_r7_4), fconvert.s(float.t(eax_3)))
        int32_t eax_15
        eax_15.b = 1
        return eax_15
else
    if (eax_4 s> 0)
        (*(***(arg1 + 4) + 0x3c))(esi, 0, 0, eax_4, eax_3, arg3, fconvert.s(x87_r6_4), 
            fconvert.s(x87_r6_4), fconvert.s(x87_r7_4), fconvert.s(float.t(eax_3)))
        x87_r6_4 = float.t(0)
        x87_r7_4 = fconvert.t(var_8)
    
    if (eax_6 s> 0)
        (*(***(arg1 + 4) + 0x3c))(esi, eax_4, 0, eax_6, eax_3, arg4, fconvert.s(x87_r6_4), 
            fconvert.s(x87_r6_4), fconvert.s(x87_r7_4), fconvert.s(float.t(eax_3)))
        int32_t eax_11
        eax_11.b = 1
        return eax_11

eax_6.b = 1
return eax_6
