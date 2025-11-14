// 函数: sub_4abff0
// 地址: 0x4abff0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ecx_2 = *arg2
void* eax = *arg3
int32_t esi = *(ecx_2 + 0x10)
int32_t edi = *(eax + 0x10)

if (esi s< edi)
    *arg2 = eax
    *arg3 = ecx_2
else if (esi s<= edi)
    int32_t esi_1 = *(ecx_2 + 0xc)
    int32_t edi_1 = *(eax + 0xc)
    
    if (esi_1 s< edi_1)
        *arg2 = eax
        *arg3 = ecx_2
    else if (esi_1 s<= edi_1 && *(ecx_2 + 8) s< *(eax + 8))
        *arg2 = eax
        *arg3 = ecx_2

void* eax_1 = *arg2
void* ecx = *arg4
int32_t esi_3 = *(ecx + 0x10)
int32_t edi_2 = *(eax_1 + 0x10)

if (esi_3 s< edi_2)
    *arg4 = eax_1
    *arg2 = ecx
else if (esi_3 s<= edi_2)
    int32_t esi_4 = *(ecx + 0xc)
    int32_t edi_3 = *(eax_1 + 0xc)
    
    if (esi_4 s< edi_3)
        *arg4 = eax_1
        *arg2 = ecx
    else if (esi_4 s<= edi_3 && *(ecx + 8) s< *(eax_1 + 8))
        *arg4 = eax_1
        *arg2 = ecx

void* result = *arg3
void* ecx_1 = *arg2
int32_t esi_6 = *(ecx_1 + 0x10)
int32_t edi_4 = *(result + 0x10)

if (esi_6 s< edi_4)
    *arg2 = result
    *arg3 = ecx_1
else if (esi_6 s<= edi_4)
    int32_t esi_7 = *(ecx_1 + 0xc)
    int32_t edi_5 = *(result + 0xc)
    
    if (esi_7 s< edi_5)
        *arg2 = result
        *arg3 = ecx_1
    else if (esi_7 s<= edi_5 && *(ecx_1 + 8) s< *(result + 8))
        *arg2 = result
        *arg3 = ecx_1

return result
