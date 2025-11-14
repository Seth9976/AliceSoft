// 函数: sub_4c9e90
// 地址: 0x4c9e90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7204f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_70 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
float ebp = arg2
long double x87_r7 = float.t(1)
float var_1c = fconvert.s(x87_r7)
float var_18 = fconvert.s(x87_r7)
float var_14 = fconvert.s(x87_r7)
long double x87_r6 = float.t(0)
float var_34 = fconvert.s(x87_r7)
float var_40 = fconvert.s(x87_r6)
float var_28 = var_14
float var_30 = var_1c
float var_38 = fconvert.s(x87_r6)
float var_1c_1 = fconvert.s(x87_r6)
void* eax_6 = *(arg1 + 0x15c)
float var_2c = var_18
arg2 = fconvert.s(x87_r7)
float var_24 = fconvert.s(x87_r6)
float var_20_1 = var_40
float var_18_1 = var_38
float var_48
void** ebx

if (eax_6 != 0)
    ebx = *(eax_6 + 8)
    
    if (ebx != 0)
        float var_74_1 = var_38
        float* eax_8 = sub_4d29d0(ebx, &var_48, 
            fconvert.s(fconvert.t(fconvert.s(fconvert.t(*(arg1 + 0x130))))))
        float ecx_3 = eax_8[1]
        long double x87_r7_4 = fconvert.t(fconvert.s(fconvert.t(*(arg1 + 0x130))))
        var_34 = *eax_8
        var_28 = eax_8[3]
        float var_74_3 = ecx_3
        var_30 = ecx_3
        var_2c = eax_8[2]
        int32_t* eax_11 = sub_4d2a50(ebx, &var_48, fconvert.s(x87_r7_4))
        arg2 = fconvert.s(fconvert.t(*(arg1 + 0x130)))
        float edx_4 = eax_11[1]
        var_24 = *eax_11
        var_20_1 = edx_4
        var_1c_1 = eax_11[2]
        int32_t ecx_6 = ebx[0xf]
        var_18_1 = eax_11[3]
        long double x87_r7_6
        
        if (ecx_6 != ebx[0x10])
            int32_t var_74_5 = ecx_6
            void* eax_13
            int80_t st0_1
            st0_1, eax_13 = sub_4cf0d0(&var_48, &ebx[0xf], fconvert.s(fconvert.t(arg2)))
            x87_r7_6 = fconvert.t(*(eax_13 + 4))
        else
            x87_r7_6 = float.t(1)
        
        arg2 = fconvert.s(x87_r7_6)
else
    ebx = nullptr

void* eax_14 = *(ebp i+ 0x14)
*(eax_14 + 0x58) = *(arg1 + 0x28)
*(eax_14 + 0x5c) = *(arg1 + 0x2c)
*(eax_14 + 0x60) = *(arg1 + 0x30)
void* eax_15 = *(ebp i+ 0x14)
*(eax_15 + 0x64) = fconvert.s(fconvert.t(fconvert.s(fconvert.t(*(arg1 + 0x40)))))
*(eax_15 + 0x68) = fconvert.s(fconvert.t(fconvert.s(fconvert.t(*(arg1 + 0x44)))))
*(eax_15 + 0x6c) = fconvert.s(fconvert.t(fconvert.s(fconvert.t(*(arg1 + 0x48)))))
*(eax_15 + 0x70) = fconvert.s(fconvert.t(fconvert.s(fconvert.t(*(arg1 + 0x4c)))))
*(eax_15 + 0x74) = fconvert.s(fconvert.t(fconvert.s(fconvert.t(*(arg1 + 0x50)))))
*(eax_15 + 0x78) = fconvert.s(fconvert.t(fconvert.s(fconvert.t(*(arg1 + 0x54)))))
int32_t ecx_8
ecx_8.b = *(arg1 + 0xb5)
*(eax_15 + 0x136) = ecx_8.b
eax_15.b = *(arg1 + 0xb6)
*(*(ebp i+ 0x14) + 0x137) = eax_15.b
eax_15.b = *(arg1 + 0xb7)
void* ecx_10 = *(ebp i+ 0x14)
*(ecx_10 + 0x138) = eax_15.b
var_48 = fconvert.s(fconvert.t(*(arg1 + 0x130)))
void* var_74_7 = ecx_10
int32_t* eax_17 = *(ebp i+ 0x14) + 0x28
float var_54 = fconvert.s(fconvert.t(*(arg1 + 0x7c)) * fconvert.t(var_30))
float var_50 = fconvert.s(fconvert.t(*(arg1 + 0x80)) * fconvert.t(var_2c))
float var_4c = fconvert.s(fconvert.t(*(arg1 + 0x84)) * fconvert.t(var_28))
var_34 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_34) * fconvert.t(*(arg1 + 0x78)))))
float var_30_1 = fconvert.s(fconvert.t(var_54))
float var_2c_1 = fconvert.s(fconvert.t(var_50))
float var_28_1 = fconvert.s(fconvert.t(var_4c))
int32_t ecx_11
int80_t st0_2
st0_2, ecx_11 = sub_4ce570(&var_34, eax_17, ebx, fconvert.s(fconvert.t(var_48)))
float var_58_7 = fconvert.s(fconvert.t(*(arg1 + 0x130)))
var_48 = fconvert.s(fconvert.t(*(arg1 + 0x98)) + fconvert.t(var_24))
float var_4c_1 = fconvert.s(fconvert.t(*(arg1 + 0x9c)) + fconvert.t(var_20_1))
float var_50_1 = fconvert.s(fconvert.t(*(arg1 + 0xa0)) + fconvert.t(var_1c_1))
int32_t var_74_9 = ecx_11
int32_t* eax_19 = *(ebp i+ 0x14) + 0x28
float var_54_1 = fconvert.s(fconvert.t(*(arg1 + 0xa4)) + fconvert.t(var_18_1))
var_24 = fconvert.s(fconvert.t(var_48))
float var_20_2 = fconvert.s(fconvert.t(var_4c_1))
float var_1c_2 = fconvert.s(fconvert.t(var_50_1))
float var_18_2 = fconvert.s(fconvert.t(var_54_1))
sub_4ce6d0(&var_24, eax_19, ebx, fconvert.s(fconvert.t(var_58_7)))
void* eax_20 = *(ebp i+ 0x14)
var_48 = fconvert.s(fconvert.t(*(arg1 + 0x130)))
long double result = sub_4ce830(ebx, eax_20 + 0x28, 
    fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.s(fconvert.t(*(arg1 + 0xac))))
        * fconvert.t(arg2)))), 
    fconvert.s(fconvert.t(var_48)))
void* ecx_12 = *(ebp i+ 0x14)
int32_t* eax_23 = *(ecx_12 + 0x28)
int32_t edx_8 = *(ecx_12 + 0x2c)

if (eax_23 != edx_8)
    long double result_1 = fconvert.t(fconvert.s(fconvert.t(*(arg1 + 0xb0))))
    
    do
        void* esi_5 = *eax_23
        eax_23 = &eax_23[1]
        *(esi_5 + 0xbc) = fconvert.s(result_1)
    while (eax_23 != edx_8)
    
    result = result_1

void* var_74_12 = ecx_12
sub_4ce920(ecx_12 + 0x28, ebx, fconvert.s(fconvert.t(fconvert.s(fconvert.t(*(arg1 + 0x130))))))
int32_t* eax_24 = *(ebp i+ 0x14)
int32_t ecx_14 = eax_24[0x44]

if (ecx_14 == eax_24[0x45])
    var_24 = 0f
    int32_t var_20_3 = 0
    int32_t var_1c_3 = 0
    int32_t var_4 = 0
    char eax_25
    int32_t edx_9
    eax_25, ecx_14, edx_9 = sub_4c4a30(arg1, &var_24)
    
    if (eax_25 != 0)
        ecx_14 = sub_4da8f0(&var_24, edx_9, *(ebp i+ 0x14) + 0x110)
    
    int32_t var_4_1 = 0xffffffff
    eax_24 = var_24
    
    if (eax_24 != 0)
        int32_t* var_74_15 = eax_24
        eax_24, ecx_14 = sub_6b4d5b()

void* ebp_1 = *(ebp i+ 0x14)

if (*(ebp_1 + 0xc) != 0)
    int32_t var_74_16 = ecx_14
    eax_24 = sub_4d9dc0(ebp_1, arg1 + 0x1ac, arg3, arg4, arg5, 
        fconvert.s(fconvert.t(fconvert.s(fconvert.t(*(arg1 + 0x288))))))

if (*(ebp_1 + 0xc) == 0 || eax_24.b != 0)
    eax_24.b = 1
else
    sub_51ddc0(0x755ff8)
    enum MESSAGEBOX_RESULT eax_28
    eax_28.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
