// 函数: sub_51ab10
// 地址: 0x51ab10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

(*(*arg1 + 0x94))(0)
(*(*arg1 + 0x98))(0)
(*(*arg1 + 0xa0))(0)
int32_t edx_3 = *(*arg1 + 0x84)
int32_t var_4

if (arg4 == 0)
    edx_3(1)
    (*(*arg1 + 0x8c))(0, 3)
    (*(*arg1 + 0xa8))(arg3)
    var_4 = 1
else
    edx_3(0)
    (*(*arg1 + 0x8c))(0, 1)
    var_4 = 0

(*(*arg1 + 0x90))(0, var_4)
(*(*arg1 + 0x7c))(0, 0, 0)
(*(*arg1 + 0x80))(0, 1)
int32_t* ecx_11 = arg2[0x16]

if (ecx_11 != 0 && (*(*ecx_11 + 0x24))(0) != 0)
    int32_t* ecx_12 = *arg2
    
    if (ecx_12 != 0 && (*(*ecx_12 + 0x20))() != 0 && (*(**arg2 + 0x2c))() != 0)
        (*(*arg1 + 0x84))(0)
        int32_t result
        result.b = 1
        return result

return 0
