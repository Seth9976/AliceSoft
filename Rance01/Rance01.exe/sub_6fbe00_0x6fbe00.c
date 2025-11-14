// 函数: sub_6fbe00
// 地址: 0x6fbe00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t esi = *(arg1 + 8)
void var_324
void* var_18 = &var_324
int32_t edx = *(arg2 + 0x1c)
sub_6fb760(0xc2, &var_18)
sub_6fb780(edx * 3 + 8, &var_18)
void* ecx = var_18
var_18 = ecx + 1
*ecx = 8
sub_6fb780(*(arg2 + 8), &var_18)
sub_6fb780(*(arg2 + 4), &var_18)
char eax = *(arg2 + 0x1c)
void* edx_3 = var_18
var_18 = edx_3 + 1
*edx_3 = eax
int32_t edx_4 = *(arg2 + 0x1c)

if (edx_4 == 1)
    void* eax_2 = var_18
    var_18 = eax_2 + 1
    *eax_2 = 0
    void* edi_2 = var_18
    var_18 = edi_2 + 1
    *edi_2 = 0x11
    void* ebx
    ebx.b = *(*(arg2 + 0x28) + 0xc)
    char* eax_4 = var_18
    var_18 = &eax_4[1]
    *eax_4 = ebx.b
else
    int32_t i = 0
    
    if (edx_4 s> 0)
        int32_t edi_1 = 0
        
        do
            void* edx_5 = var_18
            var_18 = edx_5 + 1
            *edx_5 = i.b
            int32_t ecx_2 = *(arg2 + 0x28)
            char edx_8 = (*(edi_1 + ecx_2 + 4) << 4).b + (*(edi_1 + ecx_2 + 8)).b
            char* esi_3 = var_18
            var_18 = &esi_3[1]
            i += 1
            *esi_3 = edx_8
            void* ecx_3
            ecx_3.b = *(edi_1 + *(arg2 + 0x28) + 0xc)
            void* esi_4 = var_18
            edi_1 += 0x10
            var_18 = esi_4 + 1
            *esi_4 = ecx_3.b
        while (i s< *(arg2 + 0x1c))

return (*(esi + 0x5c))(&var_324, edx * 3 + 0xa, arg1)
