// 函数: sub_524de0
// 地址: 0x524de0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax

if (arg1 s>= 0)
    eax = data_797d4c
    
    if (arg1 s< (*(eax + 0x44) - *(eax + 0x40)) s>> 2)
        eax = *(*(eax + 0x40) + (arg1 << 2))
        
        if (eax != 0 && arg2 s>= 0)
            int32_t ecx = *(eax + 0x10)
            
            if (arg2 s< (*(eax + 0x14) - ecx) s>> 2)
                void* ecx_1 = *(ecx + (arg2 << 2))
                
                if (ecx_1 != 0)
                    if (arg3 s>= 0)
                        int32_t eax_4
                        int32_t edx_7
                        edx_7:eax_4 = muls.dp.d(0x2fa0be83, *(ecx_1 + 0xd4) - *(ecx_1 + 0xd0))
                        int32_t edx_8 = edx_7 s>> 5
                        
                        if (arg3 s< (edx_8 u>> 0x1f) + edx_8)
                            int32_t ecx_2 = *(ecx_1 + 0xd0)
                            int32_t esi_1 = arg3 * 0xac
                            *arg4 = fconvert.s(fconvert.t(*(esi_1 + ecx_2 + 0x60)))
                            *arg5 = fconvert.s(fconvert.t(*(esi_1 + ecx_2 + 0x64)))
                            void* eax_7
                            eax_7.b = 1
                            *arg6 = fconvert.s(fconvert.t(*(esi_1 + ecx_2 + 0x68)))
                            return eax_7
                    
                    eax.b = 0
                    return eax

eax.b = 0
return eax
