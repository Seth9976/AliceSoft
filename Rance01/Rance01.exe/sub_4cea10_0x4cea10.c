// 函数: sub_4cea10
// 地址: 0x4cea10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebp = arg2

for (int32_t** i = *ebp; i != ebp[1]; i = &i[1])
    int32_t* edi_1 = *i
    int32_t eax_1
    int32_t edx_1
    edx_1:eax_1 = muls.dp.d(0x76b981db, edi_1[0xb] - edi_1[0xa])
    int32_t edx_2 = edx_1 s>> 7
    
    if ((edx_2 u>> 0x1f) + edx_2 s> 0)
        int32_t eax_4 = arg1[1]
        arg2 = edi_1
        int32_t ecx_3
        
        if (&arg2 u< eax_4)
            ecx_3 = *arg1
        
        int32_t** eax
        
        if (&arg2 u>= eax_4 || ecx_3 u> &arg2)
            if (eax_4 == arg1[2])
                sub_4307a0(arg1)
            
            eax = arg1[1]
            
            if (eax != 0)
                *eax = edi_1
        else
            if (eax_4 == arg1[2])
                sub_4307a0(arg1)
            
            eax = arg1[1]
            
            if (eax != 0)
                *eax = *(*arg1 + ((&arg2 - ecx_3) s>> 2 << 2))
        arg1[1] += 4
