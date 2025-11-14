// 函数: sub_5d1530
// 地址: 0x5d1530
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t** esi = data_797d8c

if (*esi == 0)
    int32_t* result = sub_597300(0x737314)
    
    if (result == 0)
        return result
    
    result = (**result)(0x737324)
    *esi = result
    
    if (result == 0)
        return result

int32_t* esi_1 = *esi
HIMC eax_2 = ImmGetContext(esi_1[0x1e])
ImmSetOpenStatus(eax_2, 0)
return ImmReleaseContext(esi_1[0x1e], eax_2)
