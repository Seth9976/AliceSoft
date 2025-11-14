// 函数: sub_537dc0
// 地址: 0x537dc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void** var_4 = arg1
void** arg_4
void** ebx = arg_4
void** eax_1 = sub_429b30(&ebx[0x43], arg2)
arg_4 = eax_1
char eax_3

if (eax_1 != ebx[0x44])
    eax_3 = sub_405dd0(&eax_1[3], arg2)

void*** eax_4

if (eax_1 == ebx[0x44] || eax_3 != 0)
    var_4 = ebx[0x44]
    eax_4 = &var_4
else
    eax_4 = &arg_4

void** result = *eax_4

if (result == ebx[0x44])
    result.b = 0
    return result

*arg3 = result[0xa]
result.b = 1
return result
