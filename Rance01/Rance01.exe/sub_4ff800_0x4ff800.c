// 函数: sub_4ff800
// 地址: 0x4ff800
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void** ebx = arg5
void* ebp = arg4
void* edi = arg1
int32_t eax_1
int128_t* ecx_3

if (arg2 == edi)
label_4ff86a:
    ecx_3 = arg3
    eax_1 = (ebp - ecx_3) s>> 2 << 2
else
    while (arg3 != ebp)
        void* eax = *(edi - 4)
        void* esi_1 = *(ebp - 4)
        int32_t ecx_1 = *(esi_1 + 0x1c)
        int32_t edx_1 = *(eax + 0x1c)
        edi -= 4
        ebp -= 4
        
        if (ecx_1 s< edx_1)
        label_4ff852:
            ebx -= 4
            *ebx = eax
            ebp += 4
        else
            if (ecx_1 s<= edx_1)
                int32_t ecx_2 = *(esi_1 + 0x20)
                int32_t edx_2 = *(eax + 0x20)
                
                if (ecx_2 s< edx_2)
                    goto label_4ff852
                
                if (ecx_2 s<= edx_2)
                    ecx_2.b = *(esi_1 + 0x7b)
                    edx_2.b = *(eax + 0x7b)
                    
                    if (ecx_2.b u< edx_2.b)
                        goto label_4ff852
                    
                    if (ecx_2.b u<= edx_2.b)
                        ecx_2.b = *(esi_1 + 0x26)
                        
                        if (ecx_2.b u< *(eax + 0x26))
                            goto label_4ff852
            
            ebx -= 4
            *ebx = esi_1
            edi += 4
        
        if (arg2 == edi)
            goto label_4ff86a
    
    ecx_3 = arg2
    eax_1 = (edi - ecx_3) s>> 2 << 2

void* result = ebx - eax_1
sub_6b49d0(result, ecx_3, eax_1)
return result
