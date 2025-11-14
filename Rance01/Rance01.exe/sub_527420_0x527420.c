// 函数: sub_527420
// 地址: 0x527420
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax

if (arg1 s>= 0)
    eax = data_797d4c
    
    if (arg1 s< (*(eax + 0x44) - *(eax + 0x40)) s>> 2)
        void* ecx = *(*(eax + 0x40) + (arg1 << 2))
        
        if (ecx != 0)
            void* var_4 = ecx
            int32_t eax_1
            long double st0
            st0, eax_1 = sub_4b6bc0(fconvert.s(fconvert.t(arg2)))
            *(ecx + 0x3c) = fconvert.s(st0)
            eax_1.b = 1
            return eax_1

eax.b = 0
return eax
