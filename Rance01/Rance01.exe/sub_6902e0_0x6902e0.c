// 函数: sub_6902e0
// 地址: 0x6902e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebp = arg3

if (ebp == 0)
    return 

void* esi_1 = *(arg1 + 0x20)

if (esi_1 == 0 || *(arg1 + 0x24) == 0)
    return 

sub_4134c0(esi_1, arg2)
sub_4134c0(*(arg1 + 0x24), arg2)

if ((*(*ebp + 0x18))() == 0)
    return 

void* ebx_2 = ebp[7]
int32_t ebp_1 = ebp[8]
void* edi_2 = *(arg1 + 0x10)
void* var_10 = ebx_2
int32_t var_c = ebp_1
struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_2 = sub_413650(edi_2)
struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_4 = sub_413650(*(arg1 + 0x18))

if (ebx_2 s> 0 && ebp_1 s> 0)
    int32_t* eax_5 = arg3
    int32_t ecx_2 = eax_5[0xb]
    int32_t var_28_3 = 1
    sub_41b340(eax_2)
    
    if (eax_5[0x3a] != 0)
        arg3 = sub_699840(&eax_5[0x36])
        int32_t eax_13 = sub_699900(&eax_5[0x36])
        int32_t var_14 = eax_13
        void** ecx_3 = &arg3
        
        if (ebx_2 s>= arg3)
            ecx_3 = &var_10
        
        int32_t* eax_14 = &var_14
        
        if (ebp_1 s>= eax_13)
            eax_14 = &var_c
        
        sub_41b390(eax_2, *ecx_3, *eax_14, 1)
        int32_t ecx_5 = var_14
        int32_t* eax_16 = arg3
        sub_41b630(eax_2, &eax_5[0x36], 0, 0, eax_16, ecx_5, 0, 0, eax_16, ecx_5, 1, 1)
    else
        sub_41b390(eax_2, ebx_2, ebp_1, 1)
        sub_41b560(eax_2, 0, 0, ebx_2, ebp_1, 0xff, 0xff, 0xff, 0xff, 1)
        sub_41b5d0(eax_2, 1, 1, ebx_2 - 2, ebp_1 - 2, 0x96, 0x96, 0x96, 1)
        sub_41b5d0(eax_2, 0, 0, ebx_2, ebp_1, 0x64, 0x64, 0x64, 1)
    
    sub_41b7d0(eax_2, 1)
    int32_t var_28_6 = 1
    sub_41b340(eax_4)
    sub_41b390(eax_4, 1, ecx_2, 1)
    sub_41b560(eax_4, 0, 0, 1, ecx_2, 0, 0, 0, 0xff, 1)
    sub_41b7d0(eax_4, 1)

sub_4134c0(*(arg1 + 0x10), arg2)
sub_4134c0(*(arg1 + 0x14), arg2)
sub_4134c0(*(arg1 + 0x18), arg2)
sub_4134c0(*(arg1 + 0x1c), arg2)

if (*(arg1 + 0xc) == 0)
    sub_41d750(arg1 + 0xa0)
