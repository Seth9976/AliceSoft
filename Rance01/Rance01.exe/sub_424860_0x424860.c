// 函数: sub_424860
// 地址: 0x424860
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg2 u> 0xffffffff)
    sub_6b47bf("vector<T> too long")
    noreturn

int32_t result = arg1[2] - *arg1

if (result u< arg2)
    int128_t* eax_1 = sub_4015e0(arg2)
    int128_t* eax_2 = *arg1
    sub_6b49d0(eax_1, eax_2, arg1[1] - eax_2)
    result = *arg1
    void* ebx_2 = arg1[1] - result
    
    if (result != 0)
        int32_t result_1 = result
        result = sub_6b4d5b()
    
    *arg1 = eax_1
    arg1[1] = ebx_2 + eax_1
    arg1[2] = eax_1 + arg2

return result
