// 函数: sub_40b970
// 地址: 0x40b970
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax_2
int32_t edx_1
eax_2, edx_1 = (*(**(arg3 + 8) + 0xc))(arg5, arg2, 0x20)

if (eax_2 != 0)
    int32_t* var_c_1 = arg4
    void* eax_4 = sub_40c350(arg3 + 0x274, edx_1, arg4)
    
    if (eax_4 != 0 && sub_40c700(eax_4, eax_2) != 0)
        (*(*eax_2 + 4))()
        int32_t eax_8
        eax_8.b = 1
        return eax_8
    
    (*(*eax_2 + 4))()

eax_2.b = 0
return eax_2
