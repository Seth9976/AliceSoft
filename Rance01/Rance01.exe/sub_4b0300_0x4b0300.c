// 函数: sub_4b0300
// 地址: 0x4b0300
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 s>= 0)
    int32_t edi_1 = *arg2
    
    if (arg1 s< (arg2[1] - edi_1) s/ 0x3c)
        int32_t eax_8 = arg1 * 0x3c
        *(eax_8 + edi_1 + 0x1c) = arg3
        void** ecx_5 = *arg2 + eax_8
        bool cond:0 = ecx_5[5] u< 0x10
        ecx_5[4] = 0
        
        if (not(cond:0))
            ecx_5 = *ecx_5
        
        *ecx_5 = nullptr
        eax_8.b = 1
        return eax_8

int32_t eax
eax.b = 0
return eax
