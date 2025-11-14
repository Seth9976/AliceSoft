// 函数: sub_40c350
// 地址: 0x40c350
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_4 = arg3
int32_t** arg_4
int32_t** ebx = arg_4
arg_4 = ebx
sub_42e070(arg1 + 0x20, &var_4, &arg_4)
int32_t* eax_1 = var_4

if (eax_1 != *(arg1 + 0x24))
    int32_t result = eax_1[4]
    
    if (result != 0)
        return result

if (sub_40cc70(arg1 + 0x18, ebx) != 0)
    arg_4 = ebx
    sub_42e070(arg1 + 0x20, &var_4, &arg_4)
    int32_t* eax_6 = var_4
    
    if (eax_6 != *(arg1 + 0x24))
        return eax_6[4]

return 0
