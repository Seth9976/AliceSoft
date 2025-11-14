// 函数: sub_41e9f0
// 地址: 0x41e9f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4 = arg3
var_4 = arg2
int32_t* edi = &arg1[0x16]

if (arg2 == 0)
    return 

int32_t ecx = edi[1]
arg1 = *edi

if (arg1 == ecx)
    sub_61b5a0(&var_4, edi)
    return 

while (*arg1 != arg2)
    arg1 = &arg1[1]
    
    if (arg1 == ecx)
        break

if (arg1 == ecx)
    sub_61b5a0(&var_4, edi)
