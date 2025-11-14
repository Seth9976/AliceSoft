// 函数: sub_432100
// 地址: 0x432100
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7180a2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_844
int32_t eax_2 = data_78c474 ^ &var_844
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
arg3[1] = arg4
*arg3 = &partsengine::CPartsModel::`vftable'{for `IInterface'}
arg3[2] = 1
arg3[3].b = 1
arg3[4] = 0
arg3[5] = 0
arg3[6] = 0
arg3[7] = 1
arg3[8] = 0
arg3[9].b = 1
arg3[0xa] = 0xff
arg3[0xb] = 0
arg3[0xc] = 0
arg3[0xd] = 0
arg3[0xe] = 0xff
arg3[0xf] = 0xff
arg3[0x10] = 0xff
arg3[0x11] = 0
arg3[0x12] = 1
arg3[0x13].w = 0
*(arg3 + 0x4e) = 0
arg3[0x14] = 0
arg3[0x15] = 3
arg3[0x16] = 0
arg3[0x17].b = 0
arg3[0x18] = 0
arg3[0x19] = 0
arg3[0x1a] = 0x64
arg3[0x1b].w = 0
__builtin_memset(&arg3[0x1c], 0, 0x14)
struct IInterface::partsengine::CPartsModel::VTable** var_840 = arg3
int32_t var_4 = 0
arg3[0x22] = 0
arg3[0x23] = 0
arg3[0x24] = 0
arg3[0x26] = 0
arg3[0x27] = 0
arg3[0x28] = 0
arg3[0x2a] = 0
arg3[0x2b] = 0
arg3[0x2c] = 0
arg3[0x2e] = 0
arg3[0x2f] = 0
arg3[0x30] = 0
arg3[0x32] = 0
arg3[0x33] = 0
arg3[0x34] = 0
arg3[0x36] = 0
arg3[0x37] = 0
arg3[0x38] = 0
arg3[0x3a] = 0
arg3[0x3b] = 0
arg3[0x3c] = 0
arg3[0x3e] = 0
arg3[0x3f] = 0
arg3[0x40] = 0
arg3[0x42] = 0
arg3[0x43] = 0
arg3[0x44] = 0
arg3[0x46] = 0
arg3[0x47] = 0
arg3[0x48] = 0
arg3[0x4a] = 0
arg3[0x4b] = 0
arg3[0x4c] = 0
arg3[0x4e] = 0
arg3[0x4f] = 0
arg3[0x50] = 0
arg3[0x52] = 0
arg3[0x53] = 0
arg3[0x54] = 0
arg3[0x56] = 0
arg3[0x57] = 0
arg3[0x58] = 0
arg3[0x5a] = 0
arg3[0x5b] = 0
arg3[0x5c] = 0
arg3[0x5e] = 0
arg3[0x5f] = 0
arg3[0x60] = 0
arg3[0x62] = 0
arg3[0x63] = 0
arg3[0x64] = 0
long double x87_r7 = float.t(1)
arg3[0x66] = 0
arg3[0x67] = 0
arg3[0x68] = fconvert.s(x87_r7)
arg3[0x69] = fconvert.s(x87_r7)
long double x87_r7_1 = float.t(0)
arg3[0x6a] = fconvert.s(x87_r7_1)
arg3[0x6b] = fconvert.s(x87_r7_1)
arg3[0x6c] = fconvert.s(x87_r7_1)
long double x87_r7_2 = fconvert.t(30f)
arg3[0x6d] = 0
arg3[0x6e] = 0
__builtin_memset(&arg3[0x6f], 0, 0x38)
sub_5f7cc0(&arg3[0x6d], arg2, arg5, fconvert.s(fconvert.t(10f)), fconvert.s(x87_r7_2), 
    fconvert.s(x87_r7_2))
arg3[0x86].b = 0
arg3[0x87] = 0
arg3[0x88] = 0
arg3[0x89] = 0
arg3[0x8b] = 0
arg3[0x8c] = 0
arg3[0x8d] = 0
var_4.b = 0x13
arg3[0x8f] = 0
sub_65a090(&arg3[0x87], 4)
var_844 = 1
int128_t* edx = arg3[0x8c]
void* eax_6 = arg3[0x8b]
int32_t ecx_3 = (edx - eax_6) s>> 2

if (ecx_3 u< 4)
    sub_51af90(4 - ecx_3, &arg3[0x8b], edx, &var_844)
else if (ecx_3 u> 4 && eax_6 + 0x10 != edx)
    void* eax_12 = (0 s>> 2) * 4
    var_844 = eax_12
    sub_6b49d0(eax_6 + 0x10, edx, eax_12, eax_4)
    arg3[0x8c] = var_844 + eax_6 + 0x10

sub_65a090(&arg3[0x56], 0x400)
int32_t var_83c
sub_5952a0(0, &var_83c)
int32_t ecx_6 = sub_5952a0(0, &var_83c)
long double result = fconvert.t(2.3283064365386963e-10)
void* i = arg3[0x56]
int32_t esi_4 = var_83c
int32_t var_838[0x209]

while (i != arg3[0x57])
    esi_4 += 1
    var_83c = esi_4
    
    if (esi_4 s>= 0x209)
        sub_595240(ecx_6, &var_83c)
        esi_4 = 0
        var_83c = 0
    
    ecx_6 = var_838[esi_4]
    long double x87_r6_1 = float.t(var_838[esi_4])
    
    if (ecx_6 s< 0)
        x87_r6_1 = x87_r6_1 + fconvert.t(4294967296.0)
    
    i += 4
    *(i - 4) = fconvert.s(x87_r6_1 * result)

int128_t* ecx_7 = arg3[0x5b]
void* edx_2 = arg3[0x5a]
void* edi_1 = &arg3[0x5a]
int32_t eax_15 = (ecx_7 - edx_2) s>> 2

if (eax_15 u<= 0x400)
    if (eax_15 u< 0x400)
        sub_40d3d0(edi_1, edx_2, 0x400 - eax_15)
        int32_t edx_6 = *(edi_1 + 4)
        int32_t eax_24 = (edx_6 - *edi_1) s>> 2
        
        if (0x400 != eax_24)
            __builtin_memset(edx_6, 0, (0x400 - eax_24) << 2)
        
        int32_t eax_25 = arg3[0x5b]
        edi_1 = &arg3[0x5a]
        ecx_7 = (eax_25 - *edi_1) s>> 2
        *(edi_1 + 4) = eax_25 + ((0x400 - ecx_7) << 2)
        result = fconvert.t(2.3283064365386963e-10)
else if (edx_2 + 0x1000 != ecx_7)
    void* eax_20 = (0 s>> 2) * 4
    var_844 = eax_20
    ecx_7 = sub_6b49d0(edx_2 + 0x1000, ecx_7, eax_20, eax_4)
    *(edi_1 + 4) = var_844 + edx_2 + 0x1000
    result = fconvert.t(2.3283064365386963e-10)

void* i_1 = *edi_1

while (i_1 != arg3[0x5b])
    esi_4 += 1
    var_83c = esi_4
    
    if (esi_4 s>= 0x209)
        sub_595240(ecx_7, &var_83c)
        esi_4 = 0
        var_83c = 0
    
    ecx_7 = var_838[esi_4]
    long double x87_r6_3 = float.t(var_838[esi_4])
    
    if (ecx_7 s< 0)
        x87_r6_3 = x87_r6_3 + fconvert.t(4294967296.0)
    
    i_1 += 4
    *(i_1 - 4) = fconvert.s(x87_r6_3 * result)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_844)
return result
