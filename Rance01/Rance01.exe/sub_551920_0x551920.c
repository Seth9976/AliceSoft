// 函数: sub_551920
// 地址: 0x551920
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t eax = arg3
int32_t ebp = arg2

if (eax s> 0 && sub_427ad0(arg1, eax << 2).b != 0)
    switch (arg1[0xd] - 0xe)
        case 0, 1, 0x10, 0x24
            uint32_t ecx_1 = arg3
            
            if (ebp s>= ecx_1)
                eax.b = 1
                return eax
            
            int32_t eax_2
            
            do
                eax_2 = arg1[1]
                
                if (ebp u< eax_2 u>> 2)
                    if (eax_2 != 0)
                        eax_2 = *arg1
                    
                    *(eax_2 + (ebp << 2)) = 0
                
                ebp += 1
            while (ebp s< ecx_1)
            
            eax_2.b = 1
            return eax_2
        case 2, 0xa
            arg2 = ebp
            
            if (ebp s>= arg3)
                eax.b = 1
                return eax
            
            while (true)
                void* esi_2 = arg1[5]
                int32_t eax_3 = sub_5527e0(esi_2)
                *(*(esi_2 + 8) + (eax_3 << 2)) = sub_552440(esi_2 + 0x20)
                
                if (eax_3 s< 0)
                    break
                
                if (sub_54f950(arg1, arg2, eax_3).b == 0)
                    break
                
                int32_t edx_4 = arg2 + 1
                arg2 = edx_4
                
                if (edx_4 s>= arg3)
                    eax.b = 1
                    return eax
        case 3, 0xb
            uint32_t edi_3 = arg3
            int32_t esi_4 = arg1[0xe]
            
            if (ebp s>= edi_3)
                eax.b = 1
                return eax
            
            while (sub_553750(arg1[5], esi_4, &arg3, 1).b != 0)
                if (sub_54f950(arg1, ebp, arg3).b == 0)
                    break
                
                ebp += 1
                
                if (ebp s>= edi_3)
                    eax.b = 1
                    return eax
        case 0x34, 0x36
            arg2 = ebp
            
            if (ebp s< arg3)
                int32_t edx_7
                
                do
                    void* esi_5 = arg1[5]
                    int32_t eax_6 = sub_5527e0(esi_5)
                    *(*(esi_5 + 8) + (eax_6 << 2)) = sub_5525f0(esi_5 + 0x20)
                    
                    if (eax_6 s< 0)
                        goto label_551a98
                    
                    if (sub_54f950(arg1, arg2, eax_6).b == 0)
                        goto label_551a98
                    
                    edx_7 = arg2 + 1
                    arg2 = edx_7
                while (edx_7 s< arg3)
            
            eax.b = 1
            return eax

label_551a98:
eax.b = 0
return eax
