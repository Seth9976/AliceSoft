// 函数: sub_67e870
// 地址: 0x67e870
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7271db
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_844
int32_t eax_2 = data_78c474 ^ &var_844
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = 1
arg1[1] = 0
arg1[2].b = 0
arg1[3] = 3
__builtin_memset(&arg1[4], 0, 0x14)
int32_t* var_840 = arg1
int32_t var_4 = 0
arg1[0xa] = 0
arg1[0xb] = 0
arg1[0xc] = 0
arg1[0xe] = 0
arg1[0xf] = 0
arg1[0x10] = 0
arg1[0x12] = 0
arg1[0x13] = 0
arg1[0x14] = 0
arg1[0x16] = 0
arg1[0x17] = 0
arg1[0x18] = 0
arg1[0x1a] = 0
arg1[0x1b] = 0
arg1[0x1c] = 0
arg1[0x1e] = &guiengine::CGUIMessageList::`vftable'{for `IEventObserver'}
var_844 = &arg1[0x1e]
arg1[0x1f] = 0
arg1[0x20] = 0
arg1[0x21] = 0
var_4.b = 6
arg1[0x28] = 0xf
arg1[0x27] = 0
arg1[0x23].b = 0
sub_401270(&arg1[0x23], nullptr, 0x72d039)
arg1[0x2a] = &guiengine::CGUIControllerStack::`vftable'
arg1[0x2b] = 0x3b9aca00
arg1[0x2c] = 0x3b9acde8
arg1[0x2d] = 0x2710
arg1[0x2e] = 0
arg1[0x2f] = 0
arg1[0x30] = 0
arg1[0x32] = &arg1[0x1e]
arg1[0x33] = 0
arg1[0x34] = 0
arg1[0x35] = 0
arg1[0x37] = 0
var_4.b = 8
long double x87_r7 = float.t(0)
arg1[0x38] = 0
__builtin_memcpy(&arg1[0x39], 
    "\x10\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00\xff\x00\x00\x00", 0x14)
arg1[0x3e] = fconvert.s(x87_r7)
arg1[0x3f] = fconvert.s(x87_r7)
arg1[0x40] = 0
arg1[0x41] = 0
arg1[0x42] = 0
arg1[0x43] = 0xff
arg1[0x49] = 0xf
arg1[0x48] = 0
arg1[0x44].b = 0
sub_401270(&arg1[0x44], nullptr, 0x72d0b5)
var_4.b = 9
arg1[0x4c] = 0x1f40
arg1[0x4d] = 0
arg1[0x4e].b = 0
arg1[0x54] = 0xf
arg1[0x53] = 0
arg1[0x4f].b = 0
sub_401270(&arg1[0x4f], nullptr, 0x72da67)
arg1[0x56] = 0
arg1[0x57] = &partsengine::CGraph::`vftable'
arg1[0x58] = 0
arg1[0x59] = 0
arg1[0x5a] = &partsengine::CSoundManager::`vftable'
arg1[0x5b] = 0x3e8
arg1[0x5c] = 5
arg1[0x5d] = 0
arg1[0x5e] = 0
arg1[0x5f] = 0
arg1[0x61] = 0
arg1[0x62] = 0
arg1[0x63] = 0
var_4.b = 0xe
void* var_83c
sub_5952a0(0, &var_83c)
sub_5952a0(0, &var_83c)
int32_t ecx = sub_65a090(&arg1[0xe], 0x400)
long double result = fconvert.t(2.3283064365386963e-10)
void* i = arg1[0xe]
int32_t var_838[0x209]

while (i != arg1[0xf])
    void* eax_8 = var_83c + 1
    var_83c = eax_8
    
    if (eax_8 s>= 0x209)
        ecx = sub_595240(ecx, &var_83c)
        var_83c = nullptr
    
    void* edx_2 = var_83c
    long double x87_r6_1 = float.t(var_838[edx_2])
    
    if (var_838[edx_2] s< 0)
        x87_r6_1 = x87_r6_1 + fconvert.t(4294967296.0)
    
    i += 4
    *(i - 4) = fconvert.s(x87_r6_1 * result)

void* ecx_2 = arg1[0x13]
void* edx_3 = arg1[0x12]
int32_t eax_12 = (ecx_2 - edx_3) s>> 2

if (eax_12 u<= 0x400)
    if (eax_12 u< 0x400)
        sub_40d3d0(&arg1[0x12], edx_3, 0x400 - eax_12)
        int32_t edi_1 = arg1[0x13]
        int32_t edx_6 = (edi_1 - arg1[0x12]) s>> 2
        
        if (0x400 != edx_6)
            __builtin_memset(edi_1, 0, (0x400 - edx_6) << 2)
        
        int32_t eax_19 = arg1[0x13]
        ecx_2 = (eax_19 - arg1[0x12]) s>> 2
        arg1[0x13] = eax_19 + ((0x400 - ecx_2) << 2)
        result = fconvert.t(2.3283064365386963e-10)
else if (edx_3 + 0x1000 != ecx_2)
    int32_t eax_17 = (0 s>> 2) * 4
    sub_6b49d0(edx_3 + 0x1000, ecx_2, eax_17, eax_4)
    ecx_2 = eax_17 + edx_3 + 0x1000
    arg1[0x13] = ecx_2
    result = fconvert.t(2.3283064365386963e-10)

void* i_1 = arg1[0x12]

while (i_1 != arg1[0x13])
    void* eax_22 = var_83c + 1
    var_83c = eax_22
    
    if (eax_22 s>= 0x209)
        sub_595240(ecx_2, &var_83c)
        var_83c = nullptr
    
    ecx_2 = var_83c
    long double x87_r6_3 = float.t(var_838[ecx_2])
    
    if (var_838[ecx_2] s< 0)
        x87_r6_3 = x87_r6_3 + fconvert.t(4294967296.0)
    
    i_1 += 4
    *(i_1 - 4) = fconvert.s(x87_r6_3 * result)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_844)
return result
