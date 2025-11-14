// 函数: sub_4b79a0
// 地址: 0x4b79a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char eax = arg2[2].b
int32_t* result

if (eax == 0)
label_4b79e8:
    
    if (*(arg2 + 9) != 0)
        result = (*(*arg1 + 0x10))(*arg2, arg2[1])
        goto label_4b79fe
else if (*(arg2 + 9) == 0)
    if (eax == 0)
        goto label_4b79e8
    
    if (*(arg2 + 9) == 0)
        result = (*(*arg1 + 0xc))(*arg2, arg2[1], 0x20)
        goto label_4b79fe
    
    if (eax == 0)
        goto label_4b79e8
else
    result = (*(*arg1 + 8))(*arg2, arg2[1], 0x20)
label_4b79fe:
    
    if (result != 0)
        int32_t* edi = arg3
        (*(*edi + 0x60))(result, 0, 0, (*(*result + 0x10))((*(*result + 0x14))(0, 0, 0, 0)))
        int32_t* ebx_1 = arg2[7]
        
        if (ebx_1 != arg2[8])
            while (true)
                int32_t* eax_12 = *ebx_1
                int32_t* esi_1 = *eax_12
                int32_t var_8_1 = eax_12[2]
                (*(*edi + 0x5c))(result, __return_addr, eax_12[1], esi_1, 0, 0, 
                    (*(*esi_1 + 0x10))((*(*esi_1 + 0x14))()))
                ebx_1 = &ebx_1[1]
                
                if (ebx_1 == arg2[8])
                    break
                
                edi = arg3
        
        return result
return 0
