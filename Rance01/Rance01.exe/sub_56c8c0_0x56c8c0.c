// 函数: sub_56c8c0
// 地址: 0x56c8c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ecx = *arg1
int32_t result = arg1[1]
int32_t result_1 = result

if (ecx != result && ecx + 1 u<= result)
    char* ebx_1 = ecx + 2
    
    if (ebx_1 u<= result)
        char* ecx_1
        ecx_1.b = *(ecx + 1)
        uint32_t ecx_2 = zx.d(ecx_1.b)
        int32_t esi_1 = 0
        uint32_t var_8_1 = ecx_2
        
        if (ecx_2 s> 0)
            void* ebp_1 = &ebx_1[1]
            
            while (true)
                if (ebp_1 u> result)
                    goto label_56c8d6
                
                ecx_2.b = *ebx_1
                
                if (ebp_1 + 1 u> result)
                    goto label_56c8d6
                
                arg2 = ebx_1[1]
                
                if (ebp_1 + 2 u> result)
                    goto label_56c8d6
                
                ebx_1 = &ebx_1[3]
                ebp_1 += 3
                sub_56cbe0(zx.d(ecx_2.b), esi_1, arg3)
                result, ecx_2 = sub_56cc40(esi_1, arg3, arg2 != 0)
                esi_1 += 1
                
                if (esi_1 s>= var_8_1)
                    break
                
                result = result_1
        
        result.b = 1
        return result

label_56c8d6:
result.b = 0
return result
