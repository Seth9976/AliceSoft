// 函数: sub_1000490d
// 地址: 0x1000490d
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

int32_t result

if (arg1 != *(sub_10004538() + 0x24))
    void* ecx_1 = *(sub_10004538() + 0x24)
    
    while (true)
        if (*(ecx_1 + 4) == 0)
            sub_1000624c()
            noreturn
        
        void* eax_3 = *(ecx_1 + 4)
        
        if (arg1 == eax_3)
            result = *(arg1 + 4)
            *(ecx_1 + 4) = result
            break
        
        ecx_1 = eax_3
else
    int32_t* ecx = sub_10004538() + 0x24
    result = *(arg1 + 4)
    *ecx = result

return result
