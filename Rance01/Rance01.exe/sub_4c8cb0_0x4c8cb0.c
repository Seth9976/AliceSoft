// 函数: sub_4c8cb0
// 地址: 0x4c8cb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_4 = arg3
int32_t* eax = sub_4c8c30(arg3, arg1)
int32_t ecx = arg1[1]
int32_t** eax_1 = *arg1
var_4 = eax

if (eax_1 != ecx)
    while (*eax_1 != 0)
        eax_1 = &eax_1[1]
        
        if (eax_1 == ecx)
            break
    
    if (eax_1 != ecx)
        *eax_1 = eax
        return (eax_1 - *arg1) s>> 2

sub_416780(&var_4, arg1)
return ((arg1[1] - *arg1) s>> 2) - 1
