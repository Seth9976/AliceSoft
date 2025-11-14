// 函数: sub_4ff760
// 地址: 0x4ff760
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg4
int32_t* ebp = arg2
void** edi = arg1
int32_t eax = arg3

if (ebp != eax)
    while (ebx != arg5)
        void* eax_1 = *ebp
        void* esi_1 = *ebx
        int32_t ecx_1 = *(esi_1 + 0x1c)
        int32_t edx_1 = *(eax_1 + 0x1c)
        
        if (ecx_1 s< edx_1)
            *edi = esi_1
            ebx = &ebx[1]
        else if (ecx_1 s> edx_1)
            *edi = eax_1
            ebp = &ebp[1]
        else
            int32_t ecx_2 = *(esi_1 + 0x20)
            int32_t edx_2 = *(eax_1 + 0x20)
            
            if (ecx_2 s< edx_2)
                *edi = esi_1
                ebx = &ebx[1]
            else if (ecx_2 s> edx_2)
                *edi = eax_1
                ebp = &ebp[1]
            else
                ecx_2.b = *(esi_1 + 0x7b)
                edx_2.b = *(eax_1 + 0x7b)
                
                if (ecx_2.b u< edx_2.b)
                    *edi = esi_1
                    ebx = &ebx[1]
                else if (ecx_2.b u> edx_2.b)
                    *edi = eax_1
                    ebp = &ebp[1]
                else
                    ecx_2.b = *(esi_1 + 0x26)
                    
                    if (ecx_2.b u>= *(eax_1 + 0x26))
                        *edi = eax_1
                        ebp = &ebp[1]
                    else
                        *edi = esi_1
                        ebx = &ebx[1]
        
        eax = arg3
        edi = &edi[1]
        
        if (ebp == eax)
            break

void* esi_2 = (eax - ebp) s>> 2 << 2
sub_6b49d0(edi, ebp, esi_2)
void* edi_1 = edi + esi_2
void* esi_3 = (arg5 - ebx) s>> 2 << 2
sub_6b49d0(edi_1, ebx, esi_3)
return esi_3 + edi_1
