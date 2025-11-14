// 函数: sub_40c3c0
// 地址: 0x40c3c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = arg1
int32_t* var_4
sub_42e070(arg3 + 0x20, &var_4, &var_8)
int32_t* eax_1 = var_4

if (eax_1 != *(arg3 + 0x24))
    void* edi_1 = eax_1[4]
    
    if (edi_1 != 0)
        int32_t* result = *(edi_1 + 0xcc)
        
        if (result != 0)
            int32_t eax_4 = (**result)()
            (*(*result + 4))()
            
            if (eax_4 == 2)
                return result
            
            if (sub_40c790(edi_1, *(edi_1 + 0xcc)) != 0)
                return *(edi_1 + 0xcc)

return 0
