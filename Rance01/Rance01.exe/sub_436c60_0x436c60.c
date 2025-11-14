// 函数: sub_436c60
// 地址: 0x436c60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = *arg2
void* ecx = *ebx
int32_t* ebp = *arg1
void* edx = *ebp
int32_t esi = *(edx + 0x10)
int32_t edi = *(ecx + 0x10)

if (esi s< edi)
    *arg1 = ebx
    *arg2 = ebp
else if (esi s<= edi)
    int32_t esi_1 = *(edx + 0xc)
    int32_t edi_1 = *(ecx + 0xc)
    
    if (esi_1 s< edi_1)
        *arg1 = ebx
        *arg2 = ebp
    else if (esi_1 s<= edi_1 && *(edx + 8) s< *(ecx + 8))
        *arg1 = ebx
        *arg2 = ebp

int32_t* ebx_1 = *arg1
int32_t* ebp_1 = *arg3
void* ecx_2 = *ebx_1
void* edx_3 = *ebp_1
int32_t esi_2 = *(edx_3 + 0x10)
int32_t edi_2 = *(ecx_2 + 0x10)

if (esi_2 s< edi_2)
    *arg3 = ebx_1
    *arg1 = ebp_1
else if (esi_2 s<= edi_2)
    int32_t esi_3 = *(edx_3 + 0xc)
    int32_t edi_3 = *(ecx_2 + 0xc)
    
    if (esi_3 s< edi_3)
        *arg3 = ebx_1
        *arg1 = ebp_1
    else if (esi_3 s<= edi_3 && *(edx_3 + 8) s< *(ecx_2 + 8))
        *arg3 = ebx_1
        *arg1 = ebp_1

int32_t* ebp_2 = *arg2
int32_t* ebx_2 = *arg1
void* ecx_4 = *ebp_2
void* edx_6 = *ebx_2
int32_t esi_4 = *(edx_6 + 0x10)
int32_t edi_4 = *(ecx_4 + 0x10)

if (esi_4 s< edi_4)
    *arg1 = ebp_2
    *arg2 = ebx_2
else if (esi_4 s<= edi_4)
    int32_t esi_5 = *(edx_6 + 0xc)
    int32_t edi_5 = *(ecx_4 + 0xc)
    
    if (esi_5 s< edi_5)
        *arg1 = ebp_2
        *arg2 = ebx_2
    else if (esi_5 s<= edi_5 && *(edx_6 + 8) s< *(ecx_4 + 8))
        *arg1 = ebp_2
        *arg2 = ebx_2
