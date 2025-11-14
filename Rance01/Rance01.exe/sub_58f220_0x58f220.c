// 函数: sub_58f220
// 地址: 0x58f220
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result_1 = arg3
void arg_4
sub_58b230(arg1 + 0x34, &result_1, &arg_4)
int32_t* result = result_1

if (result != *(arg1 + 0x38))
    void* ecx_2 = &result[4]
    
    if (result[6] != 0)
        int32_t eax_1 = *ecx_2
        
        if (eax_1 == 0)
            int32_t eax_7 = *(arg1 + 4)
            
            if (eax_7 == 1)
                return sub_58f2a0(arg1, ecx_2, arg4)
            
            if (eax_7 == 2)
                return sub_58f4b0(arg4, arg1, ecx_2)
        else if (eax_1 == 1)
            int32_t eax_3 = *(arg1 + 4)
            
            if (eax_3 == 1)
                return sub_58f380(arg1, ecx_2, arg4)
            
            if (eax_3 == 2)
                return sub_58f500(ecx_2, arg1, arg4)

result.b = 0
return result
