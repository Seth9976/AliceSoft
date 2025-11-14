// 函数: sub_4f35b0
// 地址: 0x4f35b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg2
char* eax = *ebx

if (&eax[4] u> ebx[1])
    eax.b = 0
    return eax

uint32_t edx_1 = zx.d(eax[1])
uint32_t ebp_6 = ((zx.d(eax[3]) << 8 | zx.d(eax[2])) << 8 | edx_1) << 8 | zx.d(*eax)
*ebx = &eax[4]
sub_4f5870(ebp_6, edx_1, &eax[4], arg3)
int32_t edi_1 = 0
uint32_t eax_3

if (ebp_6 s> 0)
    arg2 = nullptr
    
    while (true)
        void* esi_2 = *arg3 + arg2
        
        if (sub_410070(ebx, esi_2 + 4).b != 0)
            eax_3 = *ebx
            
            if (eax_3 + 4 u<= ebx[1])
                *(esi_2 + 0x20) =
                    ((zx.d(*(eax_3 + 3)) << 8 | zx.d(*(eax_3 + 2))) << 8 | zx.d(*(eax_3 + 1))) << 8
                    | zx.d(*eax_3)
                *ebx += 4
                
                if (*(arg1 + 4) s< 3)
                    long double x87_r7_1 = float.t(1)
                    *(esi_2 + 0x24) = fconvert.s(x87_r7_1)
                    *(esi_2 + 0x28) = fconvert.s(x87_r7_1)
                label_4f3685:
                    arg2 = &arg2[0xb]
                    edi_1 += 1
                    
                    if (edi_1 s>= ebp_6)
                        break
                    
                    continue
                else
                    int32_t ecx_6
                    eax_3, ecx_6 = sub_40ff40(arg1, ebx, esi_2 + 0x24)
                    
                    if (eax_3.b != 0 && sub_40ff40(ecx_6, ebx, esi_2 + 0x28).b != 0)
                        goto label_4f3685
        
        eax_3.b = 0
        return eax_3

eax_3.b = 1
return eax_3
