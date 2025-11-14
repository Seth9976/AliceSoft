// 函数: sub_40b310
// 地址: 0x40b310
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1[5] u>= 0x10)
    arg1 = *arg1

int32_t* eax_1
int32_t edx_1
eax_1, edx_1 = (*(*data_797dd0 + 0xc))(arg1)

if (eax_1 != 0)
    int32_t* __saved_esi_1 = arg3
    void* eax_4 = sub_40c350(arg2 + 0x274, edx_1, arg3)
    
    if (eax_4 != 0 && sub_40c700(eax_4, eax_1) != 0)
        (*(*eax_1 + 4))()
        int32_t eax_8
        eax_8.b = 1
        return eax_8
    
    (*(*eax_1 + 4))()

eax_1.b = 0
return eax_1
