// 函数: sub_5e7a10
// 地址: 0x5e7a10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1[1] == 0 || arg2 s<= 0 || arg3 s<= 0)
    int32_t eax
    eax.b = 0
    return eax

int32_t edi = *arg1

if (edi != 0xffffffff)
    sub_409390(edi)
    *arg1 = 0xffffffff

int32_t* ecx = *arg1[1]
void* edx = data_797d2c
int32_t* var_10 = ecx
int32_t eax_4 = sub_40d040(*(edx + 0x30) + 0x28c, edx, ecx)
char eax_7 = sub_409180(arg3, eax_4, arg2, arg4, arg5, arg6, arg7)

if (eax_7 == 0)
    return eax_7

*arg1 = eax_4
return 1
