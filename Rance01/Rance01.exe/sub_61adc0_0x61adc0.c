// 函数: sub_61adc0
// 地址: 0x61adc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4 = arg3
int32_t ecx_1
int32_t edx
ecx_1, edx = sub_405410(&data_797e0c, &var_4, data_797e0c, data_797e10)
sub_4bc7e0(arg1, edx, ecx_1, &data_797e0c)
int128_t* esi = data_797e1c
void* ecx_2 = data_797e20

if (esi != ecx_2)
    int32_t ebx_1 = 0 s>> 2 << 2
    sub_6b49d0(esi, ecx_2, ebx_1)
    ecx_2 = ebx_1 + esi
    esi = data_797e1c
    data_797e20 = ecx_2

int32_t edx_3 = (ecx_2 - esi) s>> 2
var_4 = 1

if (arg1 u> edx_3)
    sub_51af90(arg1 - edx_3, &data_797e1c, ecx_2, &var_4)
    int32_t eax_8
    eax_8.b = 1
    return eax_8

if (arg1 u< edx_3)
    void* esi_1 = esi + (arg1 << 2)
    
    if (esi_1 != ecx_2)
        int32_t edi_1 = 0 s>> 2 << 2
        sub_6b49d0(esi_1, ecx_2, edi_1)
        data_797e20 = edi_1 + esi_1

void** eax_2
eax_2.b = 1
return eax_2
