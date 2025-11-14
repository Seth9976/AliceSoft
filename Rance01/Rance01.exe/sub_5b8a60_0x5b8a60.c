// 函数: sub_5b8a60
// 地址: 0x5b8a60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4 = arg3
int32_t i_1 = *(arg1 + 0x504)
int32_t result = 0

if (arg3 != 0 && arg5 != 0)
    result = sub_5b4eb0(i_1 << 2, arg4)
    
    if (i_1 s> 0)
        int32_t* esi_3 = arg3 - arg5
        int32_t* ecx = arg5
        int32_t* edi_2 = result - arg5
        int32_t i
        
        do
            int32_t edx_5 = ((*ecx & 0x7fff) * arg6 + (*(esi_3 + ecx) & 0x7fff) * (0x10000 - arg6)
                + 0x8000) s>> 0x10
            *(edi_2 + ecx) = edx_5
            
            if ((*(esi_3 + ecx) & 0x8000) != 0 && (*ecx & 0x8000) != 0)
                *(edi_2 + ecx) = edx_5 | 0x8000
            
            ecx = &ecx[1]
            i = i_1
            i_1 -= 1
        while (i != 1)

return result
