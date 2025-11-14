// 函数: sub_5388d0
// 地址: 0x5388d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx = arg1[1]
char* eax_1 = *arg1 + 4

if (eax_1 u<= ecx)
    *arg1 = eax_1
    
    if (&eax_1[4] u<= ecx)
        uint32_t edi_6 =
            ((zx.d(eax_1[3]) << 8 | zx.d(eax_1[2])) << 8 | zx.d(eax_1[1])) << 8 | zx.d(*eax_1)
        *arg1 = &eax_1[4]
        void* eax_2
        
        if (edi_6 s> 0)
            sub_52f370(arg2, edi_6)
            int32_t ebx_1 = 0
            
            if (edi_6 s> 0)
                int32_t ebp_1 = 0
                
                do
                    if (sub_52f140(*arg2 + ebp_1, arg1, ebx_1).b == 0)
                        eax_2.b = 0
                        return eax_2
                    
                    ebx_1 += 1
                    ebp_1 += 0x4c
                while (ebx_1 s< edi_6)
        
        eax_2.b = 1
        return eax_2

eax_1.b = 0
return eax_1
