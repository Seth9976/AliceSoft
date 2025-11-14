// 函数: sub_40e520
// 地址: 0x40e520
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = arg2
void* esi = data_797d34
int32_t* result = sub_40dc10(esi)

if (result.b != 0)
    int32_t* ecx_1
    
    if (*(esi + 0x10) != 0)
        ecx_1 = *(esi + 0x10)
    label_40e555:
        result = (**ecx_1)(arg1)
        int32_t* result_1 = result
        
        if (result_1 != 0)
            int32_t arg_4
            int32_t arg_8
            int32_t arg_c
            int32_t arg_10
            result = sub_40dd70(result_1, &arg_4, &arg_8, &arg_c, &arg_10)
            
            if (result.b != 0)
                result = (*(*result_1 + 0x28))()
                
                if (result.b != 0)
                    if (ebx s< 0)
                        ebx = 0
                    else if (ebx s> 0xff)
                        ebx = 0xff
                    
                    return (*(**(esi + 0x14) + 0x30))(result_1, arg_4, arg_8, arg_c, arg_10, ebx)
    else if (*(esi + 0xc) != 0)
        ecx_1 = *(esi + 0xc)
        goto label_40e555

return result
