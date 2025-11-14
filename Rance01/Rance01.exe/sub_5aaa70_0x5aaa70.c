// 函数: sub_5aaa70
// 地址: 0x5aaa70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_4_1 = arg3
int32_t i_2 = *arg3
void* esi = arg1
arg1.b = arg3[2].b

if ((arg1.b & 4) != 0)
    arg3.b = *(arg3 + 9)
    void* result
    
    if (arg3.b == 8)
        int32_t edi_1 = *(esi + 0x188)
        
        if (edi_1 != 0)
            int32_t eax
            eax.b = (arg1.b & 2) != 0
            result = eax * 2 + 2 + arg4 - 1
            
            if (i_2 == 0)
                return result
            
            int32_t i
            
            do
                uint32_t ecx
                ecx.b = *(zx.d(*result) + edi_1)
                *result = ecx.b
                result += eax * 2 + 2
                i = i_2
                i_2 -= 1
            while (i != 1)
            return result
    else if (arg3.b == 0x10)
        int32_t edi_2 = *(esi + 0x190)
        
        if (edi_2 != 0)
            int32_t eax_1
            eax_1.b = (arg1.b & 2) != 0
            result = (eax_1 << 2) + 4 + arg4 - 2
            
            if (i_2 == 0)
                return result
            
            uint32_t var_4 = zx.d((*(esi + 0x174)).b)
            int32_t i_1
            
            do
                uint32_t ecx_3
                ecx_3.b = var_4.b
                ecx_3 = zx.d(
                    *(*(edi_2 + (zx.d(*(result + 1)) u>> ecx_3.b << 2)) + (zx.d(*result) << 1)))
                *result = (ecx_3 u>> 8).b
                *(result + 1) = ecx_3.b
                result += (eax_1 << 2) + 4
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
            return result

return sub_5a5de0("png_do_encode_alpha: unexpected call", esi)
