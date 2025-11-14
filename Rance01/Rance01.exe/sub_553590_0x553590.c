// 函数: sub_553590
// 地址: 0x553590
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4 = ecx
int32_t* ebx = arg3
int32_t edx = ebx[0xd]
void* ebp = arg2
uint32_t esi = arg1
int32_t* edi = arg4

if (esi s< 0)
    *edi += esi
    esi = 0

int32_t ecx_1 = *edi

if (ecx_1 s> 0)
    uint32_t eax_1 = ebx[1] u>> 2
    
    if (ecx_1 + esi s> eax_1)
        *edi = eax_1 - esi
    
    arg1 = *edi

if (ecx_1 s<= 0 || arg1 s<= 0)
    *edi = 0
else
    void* ecx_4 = nullptr
    arg3 = nullptr
    
    if (arg1 s> 0)
        int32_t edx_1 = edx - 0xe
        var_4 = edx_1
        
        while (true)
            switch (edx_1)
                case 0, 0x10, 0x24
                    arg1 = ebx[1]
                    
                    if (esi u>= arg1 u>> 2)
                        *edi = ecx_4
                        arg1.b = 1
                        return arg1
                    
                    if (arg1 != 0)
                        *(*ebx + (esi << 2)) = arg5
                    else
                        *(arg1 + (esi << 2)) = arg5
                    
                    goto label_5536de
                case 1
                    void* var_18_1 = ecx_4
                    
                    if (sub_54f950(ebx, esi, fconvert.s(fconvert.t(arg5))).b != 0)
                        goto label_5536de
                    
                    *edi = arg3
                    int32_t* eax_3
                    eax_3.b = 1
                    return eax_3
                case 2, 0xa
                    arg1 = ebx[1]
                    uint32_t edx_6 = arg1 u>> 2
                    
                    if (esi u< edx_6)
                        if (arg1 != 0)
                            arg1 = *ebx
                        
                        int32_t eax_4 = *(arg1 + (esi << 2))
                        int32_t* edi_1
                        
                        if (eax_4 u< (*(ebp + 0xc) - *(ebp + 8)) s>> 2)
                            edx_6 = *(ebp + 8)
                            edi_1 = *(edx_6 + (eax_4 << 2))
                        else
                            edi_1 = nullptr
                        
                        arg1 = sub_5529f0(ebp, edx_6, arg5)
                        
                        if (edi_1 != 0 && arg1 != 0 && sub_5506c0(edi_1, arg1).b != 0)
                            edi = arg4
                        label_5536de:
                            ecx_4 = arg3 + 1
                            esi += 1
                            arg3 = ecx_4
                            
                            if (ecx_4 s>= *edi)
                                break
                            
                            edx_1 = var_4
                            continue
                case 3
                    if (sub_54f990(ebx, esi, &arg2).b != 0 && sub_553d70(ebp, arg2, arg5).b != 0)
                        goto label_5536de
            
            arg1.b = 0
            return arg1

arg1.b = 1
return arg1
