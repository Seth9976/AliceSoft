// 函数: sub_4f5210
// 地址: 0x4f5210
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void** ecx = *(arg1 + 0x18)
int32_t esi = *(arg1 + 0x1c)

if (ecx != esi)
    void** ecx_1 = ecx
    
    do
        for (arg1 = ecx_1[8]; arg1 != ecx_1[9]; arg1 += 0x1c)
            if (*(arg1 + 0xc) == *(arg1 + 0x10))
                if (ecx_1[5] u>= 0x10)
                    ecx_1 = *ecx_1
                
                void** var_10 = ecx_1
                sub_51ddc0(0x754d50)
                enum MESSAGEBOX_RESULT eax
                eax.b = 0
                return eax
        
        ecx_1 = &ecx_1[0x15]
    while (ecx_1 != esi)

arg1.b = 1
return arg1
