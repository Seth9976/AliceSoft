// 函数: sub_5d84b0
// 地址: 0x5d84b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* edi = sub_5d8a50(arg2, arg1, 1)
int32_t* eax_1

if (edi != 0 && (*(**edi + 0xc))(arg3).b != 0)
    void* esi = *(arg2 + 0xc)
    
    if (esi == 0)
        edi[1] = *(arg2 + 0x40)
        edi[3] = 0x64
        eax_1.b = 1
        return eax_1
    
    int32_t ebp_2 = sub_5d9400(arg3, esi)
    
    if (ebp_2 == 0xffffffff)
        ebp_2 = *(arg2 + 0x40)
    
    int32_t eax_6 = sub_5d9440(arg3, esi)
    
    if (eax_6 s<= 0)
        eax_6 = 0x64
    
    edi[3] = eax_6
    edi[1] = ebp_2
    eax_6.b = 1
    return eax_6

eax_1.b = 0
return eax_1
