// 函数: sub_5d66d0
// 地址: 0x5d66d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* esi = data_797d94

if (sub_5d57f0(esi) == 0)
    return 0

void* edi = *(esi + 0x3c)
void* esi_1 = *(edi + 0xc)

if (esi_1 != 0)
    int32_t arg_4 = arg_4
    int32_t* var_4
    sub_42e070(esi_1 + 8, &var_4, &arg_4)
    int32_t* eax_5 = var_4
    
    if (eax_5 != *(esi_1 + 0xc))
        void* eax_6 = eax_5[4]
        
        if (eax_6 != 0)
            int32_t result = *(eax_6 + 0xc)
            
            if (result != 0xffffffff)
                return result

return *(edi + 0x40)
