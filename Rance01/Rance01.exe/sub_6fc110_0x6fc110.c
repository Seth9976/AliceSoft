// 函数: sub_6fc110
// 地址: 0x6fc110
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx = *(arg1 + 8)
void var_168
void* var_16c = &var_168
sub_6fb760(0xc4, &var_16c)
uint32_t edi_2 = zx.d(arg2[0xb]) + zx.d(arg2[0xa]) + zx.d(arg2[9]) + zx.d(arg2[8]) + zx.d(arg2[7])
    + zx.d(arg2[6]) + zx.d(arg2[5]) + zx.d(arg2[4]) + zx.d(arg2[3]) + zx.d(arg2[2]) + zx.d(arg2[1])
    + zx.d(*arg2)
uint32_t edx_11 = zx.d(arg2[0xe]) + zx.d(arg2[0xd]) + zx.d(arg2[0xc]) + edi_2
uint32_t esi_2 = zx.d(arg2[0xf])
uint32_t ecx_1 = esi_2 + edx_11
int32_t ebx_2 = esi_2 + edx_11 + 0x13
sub_6fb780(ebx_2, &var_16c)

if (ebx_2 s> 0x144)
    return 0xfffffffa

void* eax_12 = var_16c
var_16c = eax_12 + 1
*eax_12 = (arg4 << 4).b + arg5
eax_12.b = *arg2
char* edx_13 = var_16c
var_16c = &edx_13[1]
*edx_13 = eax_12.b
edx_13.b = arg2[1]
char* eax_13 = var_16c
var_16c = &eax_13[1]
*eax_13 = edx_13.b
eax_13.b = arg2[2]
void* edx_14 = var_16c
var_16c = edx_14 + 1
*edx_14 = eax_13.b
eax_13.b = arg2[3]
void* edx_15 = var_16c
var_16c = edx_15 + 1
*edx_15 = eax_13.b
eax_13.b = arg2[4]
void* edx_16 = var_16c
var_16c = edx_16 + 1
*edx_16 = eax_13.b
eax_13.b = arg2[5]
void* edx_17 = var_16c
var_16c = edx_17 + 1
*edx_17 = eax_13.b
eax_13.b = arg2[6]
void* edx_18 = var_16c
var_16c = edx_18 + 1
*edx_18 = eax_13.b
eax_13.b = arg2[7]
void* edx_19 = var_16c
var_16c = edx_19 + 1
*edx_19 = eax_13.b
eax_13.b = arg2[8]
void* edx_20 = var_16c
var_16c = edx_20 + 1
*edx_20 = eax_13.b
eax_13.b = arg2[9]
void* edx_21 = var_16c
var_16c = edx_21 + 1
*edx_21 = eax_13.b
eax_13.b = arg2[0xa]
void* edx_22 = var_16c
var_16c = edx_22 + 1
*edx_22 = eax_13.b
eax_13.b = arg2[0xb]
void* edx_23 = var_16c
var_16c = edx_23 + 1
*edx_23 = eax_13.b
eax_13.b = arg2[0xc]
void* edx_24 = var_16c
var_16c = edx_24 + 1
*edx_24 = eax_13.b
eax_13.b = arg2[0xd]
void* edx_25 = var_16c
var_16c = edx_25 + 1
*edx_25 = eax_13.b
eax_13.b = arg2[0xe]
void* edx_26 = var_16c
var_16c = edx_26 + 1
int32_t i = 0
*edx_26 = eax_13.b
eax_13.b = arg2[0xf]
char* edi_3 = var_16c
var_16c = &edi_3[1]
*edi_3 = eax_13.b

if (ecx_1 s> 0)
    if (esi_2 + edx_11 s>= 6)
        int32_t var_18_1 = ebx_2
        
        do
            ebx_2.b = *(i + arg3)
            void* esi_4 = var_16c
            var_16c = esi_4 + 1
            *esi_4 = ebx_2.b
            ebx_2.b = *(i + arg3 + 1)
            void* ebp_3 = var_16c
            var_16c = ebp_3 + 1
            *ebp_3 = ebx_2.b
            ebx_2.b = *(i + arg3 + 2)
            void* esi_5 = var_16c
            var_16c = esi_5 + 1
            *esi_5 = ebx_2.b
            ebx_2.b = *(i + arg3 + 3)
            void* esi_6 = var_16c
            var_16c = esi_6 + 1
            *esi_6 = ebx_2.b
            ebx_2.b = *(i + arg3 + 4)
            void* esi_7 = var_16c
            var_16c = esi_7 + 1
            i += 5
            *esi_7 = ebx_2.b
        while (i s<= esi_2 + edx_11 - 6)
        
        ebx_2 = var_18_1
    
    do
        uint32_t eax_14
        eax_14.b = *(i + arg3)
        char* ebp_7 = var_16c
        var_16c = &ebp_7[1]
        i += 1
        *ebp_7 = eax_14.b
    while (i s< ecx_1)

return (*(ecx + 0x5c))(&var_168, ebx_2 + 2, arg1)
