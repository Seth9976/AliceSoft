// 函数: sub_689ef0
// 地址: 0x689ef0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg1 + 0x60) == 0)
    return 

void* ecx = *(arg1 + 0x14)

if (ecx == 0)
    return 

struct guiengine::CGUIModel::guiengine::CGUIVScrollbarModel::VTable** eax = sub_414910(ecx)

if (eax == 0)
    return 

int32_t* ecx_1 = *(arg1 + 0x60)
int32_t esi_3 = (*(arg1 + 0x28) - *(arg1 + 0x24)) s>> 2

if ((*(*ecx_1 + 0x24))() s<= arg2 && arg2 s<= (*(**(arg1 + 0x60) + 0x24))() + ecx_1[0x1a] - eax[0xa]
        && (*(**(arg1 + 0x60) + 0x28))() s<= arg3)
    int32_t* ecx_4 = *(arg1 + 0x60)
    
    if (arg3 s<= (*(*ecx_4 + 0x28))() + ecx_4[0x1b] * esi_3)
        int32_t* ecx_6 = *(arg1 + 0x60)
        int32_t edi_6 = eax[0x10] + divs.dp.d(sx.q(arg3 - (*(*ecx_6 + 0x28))()), ecx_6[0x1b])
        void* esi_5 = *(arg1 + 0x60)
        
        if (edi_6 s< sub_688f10(esi_5))
            sub_688f30(esi_5, edi_6)
            sub_41d770(arg1 + 0x74, edi_6)

sub_41d680(arg1 + 0x74, arg2, arg3)
(*(**(arg1 + 0x60) + 0x1c))(1)
