// 函数: sub_612e90
// 地址: 0x612e90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax_1 = (*(**(*(arg1 + 0xd0) + 0xc) + 4))(arg2)

if (eax_1 != 0)
    eax_1 = (*(*eax_1 + 0x18))()
    
    if (eax_1 != 0)
        int32_t* ecx_2 = eax_1
        void* esi = ecx_2 + 1
        char i
        
        do
            i = *ecx_2
            ecx_2 += 1
        while (i != 0)
        sub_401270(arg3, ecx_2 - esi, eax_1)
        int32_t* eax_3
        eax_3.b = 1
        return eax_3

eax_1.b = 0
return eax_1
