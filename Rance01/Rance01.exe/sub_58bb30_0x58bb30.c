// 函数: sub_58bb30
// 地址: 0x58bb30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void** result = *(arg1 + 4)
void** result_2 = result[1]
void** result_1 = result

if (*(result_2 + 0x21) == 0)
    int32_t eax = arg3[1]
    int32_t edi
    int32_t var_18_1 = edi
    
    do
        int32_t ebx_1 = result_2[4]
        int32_t* ecx_1 = result_2[3]
        int32_t* edx = *arg3
        
        while (ecx_1 != ebx_1)
            if (edx == eax)
                if (ecx_1 != ebx_1)
                    goto label_58bb87
                
                break
            
            int32_t esi_1 = *ecx_1
            edi = *edx
            
            if (edi s> esi_1)
                goto label_58bb82
            
            if (edi s< esi_1)
                goto label_58bb87
            
            ecx_1 = &ecx_1[1]
            edx = &edx[1]
        
        if (edx == eax)
        label_58bb87:
            result_1 = result_2
            result_2 = *result_2
        else
        label_58bb82:
            result_2 = result_2[2]
    while (*(result_2 + 0x21) == 0)
    
    result = result_1

return result
