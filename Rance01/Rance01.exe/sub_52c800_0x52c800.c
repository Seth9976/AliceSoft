// 函数: sub_52c800
// 地址: 0x52c800
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax = arg2[1]
void* ecx = *arg2

if (ecx != eax)
    int32_t var_c_1 = arg1
    void* eax_1 = sub_52d700(eax, arg1, ecx, eax)
    int32_t var_14_1 = arg1
    sub_52d7c0(eax_1, arg2[1])
    arg2[1] = eax_1

int32_t* ecx_2 = arg2[5]
int32_t* result = arg2[4]

if (result != ecx_2)
    int32_t var_c_2 = arg1
    int32_t* eax_3
    int32_t edx_3
    eax_3, edx_3 = sub_52d750(result, arg1, ecx_2, ecx_2)
    int32_t var_14_2 = arg1
    int32_t var_18_2 = arg2[5]
    result = sub_52d870(eax_3, edx_3)
    arg2[5] = eax_3

return result
