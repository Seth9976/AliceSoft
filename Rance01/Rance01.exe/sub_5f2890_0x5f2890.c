// 函数: sub_5f2890
// 地址: 0x5f2890
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax = arg1 - 2

if (arg1 == 2)
    int32_t* ecx_2 = *(arg2 + 0x2c)
    
    if (ecx_2 != 0)
        eax = (*(*ecx_2 + 4))()
        *(arg2 + 0x2c) = 0
else
    void* temp2_1 = eax
    eax -= 1
    
    if (temp2_1 == 1)
        int32_t* ecx_1 = *(arg2 + 0x30)
        
        if (ecx_1 != 0)
            eax = (*(*ecx_1 + 4))()
            *(arg2 + 0x30) = 0

if (arg3 != 0)
    if (arg1 == 2)
        eax = sub_5f9ae0(*(arg2 + 0x28), arg3)
        *(arg2 + 0x2c) = eax
    else
        eax = arg1 - 3
        
        if (arg1 == 3)
            void* eax_5 = sub_5f9ae0(*(arg2 + 0x28), arg3)
            *(arg2 + 0x30) = eax_5
            return eax_5

return eax
