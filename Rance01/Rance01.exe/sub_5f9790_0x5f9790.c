// 函数: sub_5f9790
// 地址: 0x5f9790
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebp = arg2

if (*(arg1 + 0x24) != ebp)
    int32_t i = *(arg1 + 0x14)
    
    if (i != *(arg1 + 0x18))
        do
            char* eax_1 = data_797d94
            void* edi_2 = *(*(arg1 + 0x2c) + 4) + *i
            
            if (sub_5d57f0(eax_1).b == 0)
                goto label_5f9835
            
            if (sub_5d84b0(edi_2, *(eax_1 + 0x3c), arg2).b == 0)
                goto label_5f9835
            
            i += 4
        while (i != *(arg1 + 0x18))
        
        ebp = arg2

*(arg1 + 0x24) = ebp
char* result = (*(arg1 + 0x18) - *(arg1 + 0x14)) s>> 2

if (*(arg1 + 8) s<= result)
label_5f9835:
    result.b = 1
    return result

arg2 = *(arg1 + 4) + result
sub_416780(&arg2, arg1 + 0x14)
char* eax_6 = data_797d94
void* esi_2 = *(*(arg1 + 0x2c) + 4) + arg2
bool eax_7 = sub_5d57f0(eax_6)

if (eax_7 != 0)
    return sub_5d84b0(esi_2, *(eax_6 + 0x3c), ebp) != 0

return eax_7 != 0
