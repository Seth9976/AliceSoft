// 函数: sub_629b60
// 地址: 0x629b60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_1 = (*(*arg1 + 0x8c))()
int32_t eax_3 = (*(*arg1 + 0x88))()

if (eax_1 != arg1[0x4e])
    int32_t eax_5 = GetScrollPos(arg1[0x22], SB_HORZ)
    
    if (eax_5 s>= eax_1)
        int32_t ecx_2
        ecx_2.b = eax_1 - 1 s< 0
        eax_5 = (eax_1 - 1) & (ecx_2 - 1)
    
    sub_622030(arg1, eax_5)
    arg1[0x4e] = eax_1

if (eax_3 != arg1[0x4f])
    int32_t eax_7 = GetScrollPos(arg1[0x22], SB_VERT)
    
    if (eax_7 s>= eax_3)
        int32_t ecx_4
        ecx_4.b = eax_3 - 1 s< 0
        eax_7 = (eax_3 - 1) & (ecx_4 - 1)
    
    sub_621ee0(arg1, eax_7, 0)
    arg1[0x4f] = eax_3

InvalidateRect(arg1[0x22], nullptr, 0)
return UpdateWindow(arg1[0x22])
