// 函数: sub_4b4ef0
// 地址: 0x4b4ef0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4 = arg3
void* result = arg1 - arg4

if ((result & 0xfffffffc) s> 4)
    int32_t edi
    int32_t var_8_1 = edi
    void* result_1
    
    do
        int32_t ecx_2 = *arg4
        var_4 = *(arg4 + result - 4)
        result_1 = result - 4
        *(arg4 + result - 4) = ecx_2
        sub_4b4fb0(result, result_1 s>> 2, arg4, 0, &var_4)
        result = result_1
    while ((result_1 & 0xfffffffc) s> 4)

return result
