// 函数: sub_617880
// 地址: 0x617880
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

LRESULT lParam_3
int32_t eax_1 = data_78c474 ^ &lParam_3
LRESULT lParam_2 = SendMessageA(arg1, 0x110a, 9, 0)
lParam_3 = SendMessageA(arg1, 0x110a, 3, lParam_2)
LRESULT lParam = lParam_2
LRESULT result

if (SendMessageA(arg1, 0x1104, 1, &lParam) != 0)
    uint32_t ebp_1 = zx.d(arg2.w)
    uint32_t ebx_1 = arg2 u>> 0x10
    LRESULT lParam_1 = lParam_3
    SendMessageA(arg1, 0x1104, 1, &lParam_1)
    int32_t var_20
    int32_t var_1c
    int32_t var_18
    
    if (ebp_1 s< lParam_1 || ebp_1 s>= var_1c || ebx_1 s< var_20 || ebx_1 s>= var_18)
        result.b = 0
        sub_6b4885(eax_1 ^ &lParam_3)
        return result

result.b = 1
sub_6b4885(eax_1 ^ &lParam_3)
return result
