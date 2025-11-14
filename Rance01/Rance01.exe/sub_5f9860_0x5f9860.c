// 函数: sub_5f9860
// 地址: 0x5f9860
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4 = arg1
*(arg2 + 0x24) = 0
int32_t result = (*(arg2 + 0x18) - *(arg2 + 0x14)) s>> 2

if (*(arg2 + 8) s> result)
    var_4 = *(arg2 + 4) + result
    sub_416780(&var_4, arg2 + 0x14)
    char* eax_3 = data_797d94
    void* esi_2 = *(*(arg2 + 0x2c) + 4) + var_4
    
    if (sub_5d57f0(eax_3).b == 0)
        result.b = 0
        return result
    
    if (sub_5d8440(*(eax_3 + 0x3c), esi_2, arg3, arg4).b == 0)
        result.b = 0
        return result

result.b = 1
return result
