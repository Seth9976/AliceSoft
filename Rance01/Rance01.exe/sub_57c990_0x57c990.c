// 函数: sub_57c990
// 地址: 0x57c990
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

long double x87_r7_17 = fconvert.t(arg2)
int32_t eax = sub_70c710(fconvert.t(255.0) * x87_r7_17)

if (eax s< 0)
    eax = 0
else if (eax s> 0xff)
    eax = 0xff

long double x87_r7_1 = float.t(*(arg1 + 0x34))
int32_t esi_2 = (0xffffffff - eax) << 0x18 | 0xffffff
long double x87_r6_2 = fconvert.t(fconvert.s(x87_r7_17 * x87_r7_17))
arg2 = fconvert.s(x87_r7_1 - x87_r6_2 * x87_r7_1)
long double x87_r6_4 = float.t(*(arg1 + 0x38))
float var_8 = fconvert.s(x87_r6_4 - x87_r6_2 * x87_r6_4)
long double x87_r7_6 = float.t(1)
long double temp1 = fconvert.t(arg2)
x87_r7_6 - temp1
eax.w = (x87_r7_6 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_6, temp1) ? 1 : 0) << 0xa
    | (x87_r7_6 == temp1 ? 1 : 0) << 0xe | 0x3800

if ((eax:1.b & 0x41) == 0)
    arg2 = fconvert.s(x87_r7_6)

long double temp2 = fconvert.t(var_8)
x87_r7_6 - temp2
eax.w = (x87_r7_6 < temp2 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_6, temp2) ? 1 : 0) << 0xa
    | (x87_r7_6 == temp2 ? 1 : 0) << 0xe | 0x3800

if ((eax:1.b & 0x41) == 0)
    var_8 = fconvert.s(x87_r7_6)

int32_t* ecx = *(arg1 + 0x18)
long double x87_r6_5 = fconvert.t(0.5)
float var_4 = fconvert.s((float.t(*(arg1 + 0x34)) - fconvert.t(arg2)) * x87_r6_5)
arg2 = fconvert.s(x87_r6_5 * (float.t(*(arg1 + 0x38)) - fconvert.t(var_8)))

if (ecx != 0)
    eax = (*(*ecx + 0x14))()
    
    if (eax != 0)
        long double x87_r6_9 = fconvert.t(arg2)
        float var_8_1 = fconvert.s(float.t(*(arg1 + 0x30)) - x87_r6_9)
        long double x87_r5_3 = fconvert.t(var_4)
        long double x87_r4_1 = fconvert.t(0.5)
        *eax = fconvert.s(fconvert.t(fconvert.s(float.t(*(arg1 + 0x2c)) - x87_r5_3)) - x87_r4_1)
        *(eax + 4) = fconvert.s(fconvert.t(var_8_1) - x87_r4_1)
        long double x87_r4_5 = fconvert.t(0.5f)
        *(eax + 8) = fconvert.s(x87_r4_5)
        long double x87_r3 = float.t(1)
        *(eax + 0xc) = fconvert.s(x87_r3)
        long double x87_r2 = float.t(0)
        *(eax + 0x10) = esi_2
        *(eax + 0x14) = fconvert.s(x87_r2)
        *(eax + 0x18) = fconvert.s(x87_r2)
        float var_4_1 = fconvert.s(float.t(*(arg1 + 0x30)) - x87_r6_9)
        *(eax + 0x1c) = fconvert.s(
            fconvert.t(fconvert.s(float.t(*(arg1 + 0x34)) + float.t(*(arg1 + 0x2c)) + x87_r5_3))
            - x87_r4_1)
        *(eax + 0x20) = fconvert.s(fconvert.t(var_4_1) - x87_r4_1)
        *(eax + 0x24) = fconvert.s(x87_r4_5)
        *(eax + 0x28) = fconvert.s(x87_r3)
        *(eax + 0x2c) = esi_2
        *(eax + 0x30) = fconvert.s(x87_r3)
        *(eax + 0x34) = fconvert.s(x87_r2)
        float var_4_2 = fconvert.s(float.t(*(arg1 + 0x38)) + float.t(*(arg1 + 0x30)) + x87_r6_9)
        *(eax + 0x38) =
            fconvert.s(fconvert.t(fconvert.s(float.t(*(arg1 + 0x2c)) - x87_r5_3)) - x87_r4_1)
        *(eax + 0x3c) = fconvert.s(fconvert.t(var_4_2) - x87_r4_1)
        *(eax + 0x40) = fconvert.s(x87_r4_5)
        *(eax + 0x44) = fconvert.s(x87_r3)
        *(eax + 0x48) = esi_2
        *(eax + 0x4c) = fconvert.s(x87_r2)
        *(eax + 0x50) = fconvert.s(x87_r3)
        float var_4_3 = fconvert.s(x87_r6_9 + float.t(*(arg1 + 0x38)) + float.t(*(arg1 + 0x30)))
        *(eax + 0x54) = fconvert.s(
            fconvert.t(fconvert.s(x87_r5_3 + float.t(*(arg1 + 0x34)) + float.t(*(arg1 + 0x2c))))
            - x87_r4_1)
        *(eax + 0x58) = fconvert.s(fconvert.t(var_4_3) - x87_r4_1)
        *(eax + 0x5c) = fconvert.s(x87_r4_5)
        *(eax + 0x60) = fconvert.s(x87_r3)
        *(eax + 0x64) = esi_2
        *(eax + 0x68) = fconvert.s(x87_r3)
        *(eax + 0x6c) = fconvert.s(x87_r3)
        int32_t* ecx_1 = *(arg1 + 0x18)
        
        if (ecx_1 != 0)
            (*(*ecx_1 + 0x18))()
        
        eax.b = 1
        return 

eax.b = 0
