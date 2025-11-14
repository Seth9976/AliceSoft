// 函数: sub_50de50
// 地址: 0x50de50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx_4 = *(arg1 + 0x44)

if (ecx_4 != 0)
    (*(*ecx_4 + 4))()
    *(arg1 + 0x44) = 0

int32_t* ecx = *(arg1 + 0x40)

if (ecx != 0)
    (*(*ecx + 4))()
    *(arg1 + 0x40) = 0

int32_t* ecx_1 = *(arg1 + 0x34)

if (ecx_1 == 0)
    goto label_50de90

if ((*(*ecx_1 + 0x14))() != 0)
    *(arg1 + 0x34) = 0
    *(arg1 + 0x3c) = 0
    *(arg1 + 0x38) = 0
label_50de90:
    int32_t* ecx_2 = *(arg1 + 0x28)
    
    if (ecx_2 != 0 && (*(*ecx_2 + 0x14))() != 0)
        *(arg1 + 0x28) = 0
        *(arg1 + 0x30) = 0
        *(arg1 + 0x2c) = 0

sub_50dec0(arg1)
return sub_50df70(arg1) __tailcall
