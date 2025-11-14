// 函数: sub_58e6c0
// 地址: 0x58e6c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx = *(arg1 + 0x24)
int32_t result

if (ecx != 0)
    result = (*(*ecx + 0x14))()

if (ecx == 0 || result.b != 0)
    if (*(arg1 + 0x1c) == 0)
        int32_t ecx_4 = *(arg1 + 0x18)
        
        if (ecx_4 != 0)
            int32_t* eax_7 = **(*(arg1 + 8) + 0x1c)
            
            if ((*(*eax_7 + 0x94))(eax_7, 0, ecx_4) s>= 0)
                int32_t* eax_9 = *(arg1 + 0x18)
                (*(*eax_9 + 8))(eax_9)
                *(arg1 + 0x18) = 0
            label_58e752:
                int32_t* esi_1 = *(arg1 + 0xc)
                
                if (esi_1[1].b != 0)
                    int32_t* eax_11 = **(*esi_1 + 0x1c)
                    
                    if ((*(*eax_11 + 0xbc))(eax_11, &esi_1[2]) s>= 0)
                        esi_1[1].b = 0
                        result.b = 1
                        return result
    else
        int32_t ecx_1 = *(arg1 + 0x20)
        
        if (ecx_1 != 0)
            int32_t* eax_2 = **(*(arg1 + 8) + 0x1c)
            
            if ((*(*eax_2 + 0x94))(eax_2, 0, ecx_1) s>= 0)
                int32_t* eax_4 = *(arg1 + 0x20)
                int32_t* ecx_3 = (*(*eax_4 + 8))(eax_4)
                int32_t eax_5 = *(arg1 + 0x1c)
                *(arg1 + 0x20) = 0
                
                if (sub_58e9a0(ecx_3, arg1, eax_5).b != 0)
                    goto label_58e752

result.b = 0
return result
