// 函数: sub_515340
// 地址: 0x515340
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx_3 = *(arg1 + 0x154)

if (ecx_3 == 0)
    goto label_515362

char eax = (*(*ecx_3 + 0x14))()

if (eax != 0)
    *(arg1 + 0x154) = 0
label_515362:
    int32_t* ecx = *(arg1 + 0x150)
    *(arg1 + 0x158) = 0
    
    if (ecx != 0)
        eax = (*(*ecx + 0x14))()
    
    if ((ecx == 0 || eax != 0) && *(arg1 + 0x268) != 0)
        int32_t* ecx_1 = *(arg1 + 8)
        
        if (ecx_1 != 0 && *(arg1 + 0xc) != 0 && (*(*ecx_1 + 0x18))() != 0
                && (*(**(arg1 + 0xc) + 0x14))() != 0)
            *(arg1 + 0x268) = 0
            return 1

return 0
