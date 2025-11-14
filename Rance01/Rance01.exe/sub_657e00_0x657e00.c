// 函数: sub_657e00
// 地址: 0x657e00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = arg5
int32_t* ebx = arg3
void* esi = arg4

if (ebx[8].b == 0 || eax == 0 || arg1 == 0 || ebx[4] u<= 0 || ebx[5] u<= 0)
    eax.b = 0
    return 

int32_t ebp = eax

if (eax u>= arg6)
    ebp = arg6

if (arg1 u>= arg2)
    arg5 = arg2
    arg1 = arg2
else
    arg5 = arg1

long double x87_r7 = float.t(arg6)
void* eax_3 = *ebx

if (arg6 s< 0)
    x87_r7 = x87_r7 + fconvert.t(4.2949673e+09f)

long double x87_r6 = float.t(ebp)

if (ebp s< 0)
    x87_r6 = x87_r6 + fconvert.t(4.2949673e+09f)

long double x87_r7_2 = float.t(arg2)

if (arg2 s< 0)
    x87_r7_2 = x87_r7_2 + fconvert.t(4.2949673e+09f)

long double x87_r6_1 = float.t(arg1)

if (arg1 s< 0)
    x87_r6_1 = x87_r6_1 + fconvert.t(4.2949673e+09f)

void* var_4 = eax_3
arg6 = 0

if (arg1 s> 0)
    int32_t ecx_1
    
    do
        float edi_2 = 0f
        void* var_8_1 = esi
        arg3 = eax_3
        arg4 = 0f
        
        if (ebp s> 0)
            do
                eax_3.b = *(eax_3 + 3)
                *esi = eax_3.b
                *(esi + 1) = eax_3.b
                *(esi + 2) = eax_3.b
                esi += 4
                eax_3 = (sub_70c710(float.t(arg4) * fconvert.t(fconvert.s(x87_r7 / x87_r6))) + 1)
                    * ebx[7] + arg3
                edi_2 += 1
                arg4 = edi_2
            while (edi_2 s< ebp)
        
        esi = var_8_1 + (((eax << 2) + 0xc) & 0xfffffff0)
        eax_3 =
            (sub_70c710(float.t(arg6) * fconvert.t(fconvert.s(x87_r7_2 / x87_r6_1))) + 1) * ebx[6]
            + var_4
        ecx_1 = arg6 + 1
        arg6 = ecx_1
    while (ecx_1 s< arg5)

eax_3.b = 1
