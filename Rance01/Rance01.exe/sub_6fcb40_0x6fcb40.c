// 函数: sub_6fcb40
// 地址: 0x6fcb40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi
int32_t var_4 = edi
int32_t esi = *(arg1 + 8)
int32_t ebp_1 = *arg2 * 2 + 6
void var_28
void* var_2c = &var_28
sub_6fb760(0xda, &var_2c)
sub_6fb780(ebp_1, &var_2c)
char eax = *arg2
void* edx = var_2c
var_2c = edx + 1
*edx = eax
int32_t edx_1 = *arg2
uint32_t i

if (edx_1 == 1)
    char* eax_4
    eax_4.b = *arg2[0xd]
    char* edx_6 = var_2c
    var_2c = &edx_6[1]
    *edx_6 = eax_4.b
    void* ecx_9 = *arg2[0xd]
    char edx_9 = (*(ecx_9 + arg3) << 4) + *(ecx_9 + arg4)
    void* ecx_10 = var_2c
    var_2c = ecx_10 + 1
    *ecx_10 = edx_9
else
    i = 0
    
    if (edx_1 s> 0)
        do
            void* edi_2 = var_2c
            var_2c = edi_2 + 1
            *edi_2 = i.b
            char edx_4 = (*(arg3 + i) << 4) + arg4[i]
            void* edi_3 = var_2c
            var_2c = edi_3 + 1
            i += 1
            *edi_3 = edx_4
        while (i s< *arg2)

i.b = arg2[2].b
void* edx_5 = var_2c
var_2c = edx_5 + 1
*edx_5 = i.b
edx_5.b = arg2[3].b
char* eax_1 = var_2c
var_2c = &eax_1[1]
*eax_1 = edx_5.b
char ecx_7 = (arg2[4] << 4).b + (arg2[5]).b
void* edi_4 = var_2c
var_2c = edi_4 + 1
*edi_4 = ecx_7
return (*(esi + 0x5c))(&var_28, ebp_1 + 2, arg1)
