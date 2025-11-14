// 函数: sub_40f430
// 地址: 0x40f430
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void** var_4 = arg1
void** arg_4
int32_t* edi = arg_4
void** eax_1 = sub_40f630(&arg1[9], edi)
void** esi_1 = arg1[0xa]
arg_4 = eax_1
char eax_2

if (eax_1 != esi_1)
    eax_2 = sub_40f4a0(edi, &eax_1[3])

void*** eax_3

if (eax_1 == esi_1 || eax_2 != 0)
    var_4 = esi_1
    eax_3 = &var_4
else
    eax_3 = &arg_4

void** eax_4 = *eax_3

if (eax_4 != esi_1)
    return eax_4[7]

return 0
