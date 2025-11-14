// 函数: sub_634e10
// 地址: 0x634e10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t result = *(arg2 + 0x10)

if (result u< *(arg2 + 0x14))
    while (true)
        char* ecx = *(arg2 + 0x10)
        result.b = *ecx
        void* ecx_1
        
        if (result.b u< 0x81)
            if (result.b u< 0xe0)
                goto label_634e30
            
            ecx_1 = &ecx[2]
        else if (result.b u<= 0x9f || result.b u>= 0xe0)
            ecx_1 = &ecx[2]
        else
        label_634e30:
            
            if (result.b == 0xa)
                *(arg2 + 0x10) += 1
                break
            
            ecx_1 = &ecx[1]
        
        *(arg2 + 0x10) = ecx_1
        
        if (ecx_1 u>= *(arg2 + 0x14))
            return result

return result
