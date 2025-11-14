// 函数: sub_657f50
// 地址: 0x657f50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* edi = arg3

if (edi[8].b == 0 || arg5 == 0 || arg1 == 0 || edi[4] u<= 0 || edi[5] u<= 0)
    int32_t eax
    eax.b = 0
    return 

void* var_14
void* ebx

if (arg5 u>= arg6)
    ebx = arg6
    var_14 = arg6
else
    ebx = arg5
    var_14 = ebx

void* var_18

if (arg1 u>= arg2)
    var_18 = arg2
    arg1 = arg2
else
    var_18 = arg1

char* eax_1 = *edi
void* esi_1 = ((arg5 << 2) + 0xc) & 0xfffffff0
long double x87_r7 = float.t(arg6)
void* var_8 = esi_1

if (arg6 s< 0)
    x87_r7 = x87_r7 + fconvert.t(4.2949673e+09f)

long double x87_r6 = float.t(ebx)

if (ebx s< 0)
    x87_r6 = x87_r6 + fconvert.t(4.2949673e+09f)

long double x87_r7_2 = float.t(arg2)

if (arg2 s< 0)
    x87_r7_2 = x87_r7_2 + fconvert.t(4.2949673e+09f)

long double x87_r6_1 = float.t(arg1)

if (arg1 s< 0)
    x87_r6_1 = x87_r6_1 + fconvert.t(4.2949673e+09f)

char* var_4 = eax_1
arg5 = 0

if (arg1 s> 0)
    arg6 = arg4 + 2
    void* ecx_1
    
    do
        int32_t ebp_2 = 0
        char* var_c_1 = eax_1
        arg4 = 0
        
        if (ebx s> 0)
            void* esi_2 = arg6
            
            do
                uint32_t edi_1 = zx.d(eax_1[3])
                ecx_1.b = *(esi_2 - 2)
                char ebx_4 = (((zx.d(*eax_1) - zx.d(ecx_1.b)) * edi_1) s>> 8).b + ecx_1.b
                ecx_1.b = *(esi_2 - 1)
                *(esi_2 - 2) = ebx_4
                char edx_5 = (((zx.d(eax_1[1]) - zx.d(ecx_1.b)) * edi_1) s>> 8).b + ecx_1.b
                ecx_1.b = *esi_2
                *(esi_2 - 1) = edx_5
                *esi_2 = (((zx.d(eax_1[2]) - zx.d(ecx_1.b)) * edi_1) s>> 8).b + ecx_1.b
                esi_2 += 4
                int32_t eax_6
                eax_6, ecx_1 = sub_70c710(float.t(arg4) * fconvert.t(fconvert.s(x87_r7 / x87_r6)))
                edi = arg3
                ebx = var_14
                eax_1 = (eax_6 + 1) * edi[7] + var_c_1
                ebp_2 += 1
                arg4 = ebp_2
            while (ebp_2 s< ebx)
            
            esi_1 = var_8
        
        arg6 += esi_1
        eax_1 =
            (sub_70c710(float.t(arg5) * fconvert.t(fconvert.s(x87_r7_2 / x87_r6_1))) + 1) * edi[6]
            + var_4
        ecx_1 = arg5 + 1
        arg5 = ecx_1
    while (ecx_1 s< var_18)

eax_1.b = 1
