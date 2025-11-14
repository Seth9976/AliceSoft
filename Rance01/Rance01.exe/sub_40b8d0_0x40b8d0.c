// 函数: sub_40b8d0
// 地址: 0x40b8d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax_1 = (*(**(arg1 + 8) + 8))(arg3, arg4, 0x20)

if (eax_1 != 0)
    (*(**(arg1 + 4) + 0x2c))(eax_1, 0, 0, arg3, arg4, arg5, arg6, arg7)
    int32_t* ecx_3
    int32_t edx_6
    edx_6, ecx_3 = (*(**(arg1 + 4) + 0x30))(eax_1, 0, 0, arg3, arg4, arg8)
    int32_t var_14_3 = arg2
    void* eax_7 = sub_40c350(arg1 + 0x274, edx_6, ecx_3)
    
    if (eax_7 != 0 && sub_40c700(eax_7, eax_1) != 0)
        (*(*eax_1 + 4))()
        int32_t eax_11
        eax_11.b = 1
        return eax_11
    
    (*(*eax_1 + 4))()

eax_1.b = 0
return eax_1
