// 函数: sub_6fbc10
// 地址: 0x6fbc10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t esi = *(arg1 + 8)
void var_324
void* var_18 = &var_324
int32_t edx = *(arg2 + 0x1c)
sub_6fb760(0xc0, &var_18)
sub_6fb780(edx * 3 + 8, &var_18)
void* ecx = var_18
var_18 = ecx + 1
*ecx = 8
sub_6fb780(*(arg2 + 8), &var_18)
sub_6fb780(*(arg2 + 4), &var_18)
char eax = *(arg2 + 0x1c)
void* ecx_1 = var_18
var_18 = ecx_1 + 1
*ecx_1 = eax

if (*(arg2 + 0x1c) == 1)
    void* eax_8 = var_18
    var_18 = eax_8 + 1
    *eax_8 = 0
    void* edi_4 = var_18
    var_18 = edi_4 + 1
    *edi_4 = 0x11
    void* ebx
    ebx.b = *(*(arg2 + 0x28) + 0xc)
    char* eax_10 = var_18
    var_18 = &eax_10[1]
    *eax_10 = ebx.b
else
    void* eax_1 = var_18
    var_18 = eax_1 + 1
    *eax_1 = 1
    void* edx_5 = *(arg2 + 0x28)
    char eax_4 = (*(edx_5 + 4) << 4).b + (*(edx_5 + 8)).b
    char* edx_6 = var_18
    var_18 = &edx_6[1]
    *edx_6 = eax_4
    edx_6.b = *(*(arg2 + 0x28) + 0xc)
    char* edi_2 = var_18
    var_18 = &edi_2[1]
    *edi_2 = edx_6.b
    int32_t i = 2
    
    if (*(arg2 + 0x1c) s>= 2)
        int32_t edi_3 = 0x20
        
        do
            void* edx_7 = var_18
            var_18 = edx_7 + 1
            *edx_7 = i.b
            int32_t ecx_4 = *(arg2 + 0x28)
            char edx_10 = (*(edi_3 + ecx_4 - 0xc) << 4).b + (*(edi_3 + ecx_4 - 8)).b
            char* esi_3 = var_18
            var_18 = &esi_3[1]
            i += 1
            *esi_3 = edx_10
            void* ecx_5
            ecx_5.b = *(edi_3 + *(arg2 + 0x28) - 4)
            void* esi_4 = var_18
            edi_3 += 0x10
            var_18 = esi_4 + 1
            *esi_4 = ecx_5.b
        while (i s<= *(arg2 + 0x1c))

return (*(esi + 0x5c))(&var_324, edx * 3 + 0xa, arg1)
