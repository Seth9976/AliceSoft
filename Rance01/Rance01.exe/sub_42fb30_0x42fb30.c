// 函数: sub_42fb30
// 地址: 0x42fb30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result

for (int32_t* i = *(arg1 + 0x24); i != *(arg1 + 0x28); i = &i[1])
    void* esi_1 = *i
    result = *(esi_1 + 0x24)
    bool cond:0_1
    
    if (result == 0)
        if (*(esi_1 + 0x28) != 0)
            result = sub_42fb30()
        
        if (*(esi_1 + 0x28) != 0 && result.b != 0)
            result.b = 1
            return result
        
        void* esi_2 = *(esi_1 + 0x2c)
        
        if (esi_2 != 0)
            cond:0_1 = sub_42aa40(esi_2).b != 0
            goto label_42fb6f
    else
        cond:0_1 = *(result + 0x1c) != *(result + 0x20)
    label_42fb6f:
        
        if (cond:0_1)
            result.b = 1
            return result

result.b = 0
return result
