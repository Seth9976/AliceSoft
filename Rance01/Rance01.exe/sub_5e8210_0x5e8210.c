// 函数: sub_5e8210
// 地址: 0x5e8210
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax = arg1[1]

if (eax == 0)
    eax.b = 0
    return eax

void* edi = data_797d2c
int32_t* ecx
int32_t edx

if (*arg1 == 0xffffffff)
    int32_t var_c_1 = *eax
    int32_t eax_4
    eax_4, ecx, edx = sub_40d040(*(edi + 0x30) + 0x28c, edx, ecx)
    *arg1 = eax_4

int32_t var_c_2 = *arg1
void* eax_7 = sub_40c350(*(edi + 0x30) + 0x274, edx, ecx)

if (eax_7 != 0)
    return sub_40c700(eax_7, arg2) != 0

eax_7.b = 0
return eax_7
