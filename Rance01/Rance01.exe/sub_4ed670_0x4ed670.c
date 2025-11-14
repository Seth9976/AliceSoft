// 函数: sub_4ed670
// 地址: 0x4ed670
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_4 = arg3
void* result = arg1 - arg3

if ((result & 0xfffffffc) s> 4)
    void* result_1
    
    do
        int32_t ecx_2 = *arg3
        var_4 = *(arg3 + result - 4)
        *(arg3 + result - 4) = ecx_2
        result_1 = result - 4
        sub_4ed760(arg3, 0, result_1 s>> 2, &var_4, arg4)
        result = result_1
    while ((result_1 & 0xfffffffc) s> 4)

return result
