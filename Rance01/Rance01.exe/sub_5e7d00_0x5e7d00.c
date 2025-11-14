// 函数: sub_5e7d00
// 地址: 0x5e7d00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1[1] == 0 || arg1[3] == 0)
    int32_t eax
    eax.b = 0
    return eax

int32_t* eax_2 = sub_5f9dd0(*arg1)

if (eax_2 == 0)
    eax_2.b = 0
    return eax_2

int32_t* eax_4 = sub_5e8050(arg1, eax_2)

if (eax_4 != 0)
    (*(*eax_2 + 0x14))()
    int32_t eax_8 = (*(*eax_2 + 0x10))()
    sub_5e6b70(arg1[3], eax_4, eax_2, eax_8)
    *arg1
    bool cond:0_1 = sub_5f9e20() != 0
    int32_t edx_3 = *(*eax_4 + 4)
    
    if (cond:0_1)
        edx_3()
        int32_t eax_11
        eax_11.b = 1
        return eax_11
    
    edx_3()

eax_4.b = 0
return eax_4
