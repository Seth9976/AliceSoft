// 函数: sub_4b4950
// 地址: 0x4b4950
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx = *(arg1 + 0x30)
int32_t* result = *(arg1 + 0x2c)

if (result != ecx)
    while (*result != arg2)
        result = &result[1]
        
        if (result == ecx)
            break
    
    if (result != ecx)
        return result

sub_416780(&arg2, arg1 + 0x2c)
int32_t* eax_1 = *(arg1 + 0x30)
int32_t* ecx_1 = *(arg1 + 0x2c)
return sub_4b4b20(ecx_1, eax_1, (eax_1 - ecx_1) s>> 2)
