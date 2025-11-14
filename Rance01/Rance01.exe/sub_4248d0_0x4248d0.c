// 函数: sub_4248d0
// 地址: 0x4248d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg2 u> 0x7fffffff)
    sub_6b47bf("vector<T> too long")
    noreturn

int32_t result = (arg1[2] - *arg1) s>> 1

if (result u< arg2)
    int128_t* eax_2 = sub_424940(arg2)
    int128_t* eax_3 = *arg1
    sub_6b49d0(eax_2, eax_3, ((arg1[1] - eax_3) s>> 1) * 2)
    int32_t eax_4 = *arg1
    int32_t edi_3 = (arg1[1] - eax_4) s>> 1
    
    if (eax_4 != 0)
        int32_t var_10_2 = eax_4
        sub_6b4d5b()
    
    result = eax_2 + (edi_3 << 1)
    *arg1 = eax_2
    arg1[2] = eax_2 + (arg2 << 1)
    arg1[1] = result

return result
