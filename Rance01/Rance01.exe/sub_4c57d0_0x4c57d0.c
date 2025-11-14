// 函数: sub_4c57d0
// 地址: 0x4c57d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ecx = *(arg1 + 0x298)

if (ecx != 0)
    void* esi_1 = arg1 + 0xc
    int32_t* eax_1 = sub_50ace0(ecx, esi_1)
    *(arg1 + 0x1d0) = eax_1
    
    if (eax_1 != 0)
        if (sub_5167b0(arg1 + 0xc8, eax_1, *(arg1 + 0x298)) != 0)
            sub_4c3fd0(arg1)
            *(arg1 + 0x1d4) = 0
            int32_t eax_4
            eax_4.b = 1
            return eax_4
        
        if (*(esi_1 + 0x14) u>= 0x10)
            esi_1 = *esi_1
        
        void* var_14_3 = esi_1
        sub_51ddc0(0x756290)
        enum MESSAGEBOX_RESULT eax_3
        eax_3.b = 0
        return eax_3
    
    if (*(esi_1 + 0x14) u>= 0x10)
        esi_1 = *esi_1
    
    void* var_14_1 = esi_1
    sub_51ddc0(0x756260)

enum MESSAGEBOX_RESULT eax
eax.b = 0
return eax
