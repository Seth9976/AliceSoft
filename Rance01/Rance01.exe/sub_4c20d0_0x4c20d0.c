// 函数: sub_4c20d0
// 地址: 0x4c20d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4_1 = ecx
struct _EXCEPTION_REGISTRATION_RECORD** ebp = arg2
struct _EXCEPTION_REGISTRATION_RECORD** result = nullptr
int32_t ecx_3 = (ebp[0x15] - ebp[0x14]) s>> 2
int32_t var_4 = ecx_3
arg2 = nullptr

if (ecx_3 s> 0)
    while (true)
        if (result s>= 0 && result s< (ebp[0x15] - ebp[0x14]) s>> 2)
            void* edi_1 = *(ebp[0x14] + (result << 2))
            
            if (edi_1 != 0)
                if (*(edi_1 + 0x70) != 0)
                    int32_t esi_3 = (*(edi_1 + 0x2c) - *(edi_1 + 0x28)) s/ 0xb4
                    int32_t ebx_1 = 0
                    
                    if (esi_3 s> 0)
                        do
                            if (sub_4c2e10(ebx_1, edi_1, arg1, ebp).b == 0)
                                goto label_4c2166
                            
                            ebx_1 += 1
                        while (ebx_1 s< esi_3)
                    
                    ecx_3 = var_4
                    result = arg2
                
                result += 1
                arg2 = result
                
                if (result s>= ecx_3)
                    break
                
                continue
        
    label_4c2166:
        result.b = 0
        return result

result.b = 1
return result
