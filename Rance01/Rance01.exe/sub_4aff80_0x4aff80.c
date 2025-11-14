// 函数: sub_4aff80
// 地址: 0x4aff80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

struct _EXCEPTION_REGISTRATION_RECORD** result

for (int32_t* i = *(arg1 + 0x40); i != *(arg1 + 0x44); i = &i[1])
    void* esi_1 = *i
    
    if (esi_1 != 0)
        result = *(esi_1 + 0x1f8)
        
        if (result != 0)
            sub_507e40(result)
        
        int32_t* ecx_1 = *(esi_1 + 0x1f4)
        
        if (ecx_1 != 0)
            (*(*ecx_1 + 4))()
            *(esi_1 + 0x1f4) = 0

int32_t* ecx_2 = *(arg1 + 0x10)

if (ecx_2 != 0)
    (*(*ecx_2 + 4))()
    *(arg1 + 0x10) = 0

result.b = 1
return result
