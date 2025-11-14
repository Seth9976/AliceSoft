// 函数: sub_417280
// 地址: 0x417280
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4 = arg3
void* result = arg1 - arg4

if ((result & 0xfffffffc) s> 4)
    int32_t edi
    int32_t var_8_1 = edi
    void* result_1
    
    do
        int32_t edx = *(arg4 + result - 4)
        *(arg4 + result - 4) = *arg4
        result_1 = result - 4
        var_4 = edx
        int32_t var_c_1 = arg5
        int32_t* var_10_1 = &var_4
        int32_t ecx_4 = result_1 s>> 2
        sub_417360(0, arg5, ecx_4, arg4, ecx_4)
        result = result_1
    while ((result_1 & 0xfffffffc) s> 4)

return result
