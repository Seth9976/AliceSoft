// 函数: sub_4db6e0
// 地址: 0x4db6e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebp = arg1
int32_t* result

if ((((*(ebp + 0x38) - *(ebp + 0x34)) ^ (*(ebp + 0x28) - *(ebp + 0x24))) & 0xfffffffc) != 0)
    int32_t ecx_2
    result, ecx_2 = sub_4db690(ebp)
    
    for (int32_t* i = *(ebp + 0x24); i != *(ebp + 0x28); i = &i[1])
        int32_t* esi_1 = *(*i + 8)
        
        if (esi_1 == 0)
            result.b = 0
            return result
        
        void* eax_3 = (*(*arg2 + 0x3c))(esi_1, 1)
        arg1 = eax_3
        
        if (eax_3 == 0)
            int32_t var_1c_2 = (*(*esi_1 + 0x10))((*(*esi_1 + 0x14))())
            sub_51ddc0(0x755dd0)
            result.b = 0
            return result
        
        sub_61b5a0(&arg1, ebp + 0x34)

result.b = 1
return result
