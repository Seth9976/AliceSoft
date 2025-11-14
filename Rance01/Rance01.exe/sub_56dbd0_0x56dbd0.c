// 函数: sub_56dbd0
// 地址: 0x56dbd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1[2] == 0 || arg1[1].b != 0)
    int32_t result
    result.b = 0
    return result

void* edi = *(*arg1 + 0xc)
char eax_1

if (edi != 0)
    eax_1 = sub_58a680(edi)

if (edi == 0 || eax_1 != 0)
    (*(*arg1[2] + 0x74))()
    
    if ((*(*arg1[2] + 0x4c))() != 0)
        char eax_5 = sub_56e0a0(arg1)
        int32_t edx_3 = *(*arg1[2] + 0x50)
        
        if (eax_5 != 0)
            if (edx_3() != 0)
                return (*(*arg1[2] + 0x54))() != 0
        else
            edx_3()
            (*(*arg1[2] + 0x54))()

return 0
