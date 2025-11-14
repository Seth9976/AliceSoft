// 函数: sub_428ba0
// 地址: 0x428ba0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* result = *arg2

if (&result[4] u<= arg2[1])
    *(arg1 + 8) =
        ((zx.d(result[3]) << 8 | zx.d(result[2])) << 8 | zx.d(result[1])) << 8 | zx.d(*result)
    *arg2 += 4
    result = *arg2
    
    if (&result[4] u<= arg2[1])
        *(arg1 + 0xc) =
            ((zx.d(result[3]) << 8 | zx.d(result[2])) << 8 | zx.d(result[1])) << 8 | zx.d(*result)
        *arg2 += 4
        
        if (sub_5546f0(arg2, arg1 + 0x10).b != 0)
            int32_t ecx_8
            result, ecx_8 = sub_40ff40(arg2, arg2, arg1 + 0x14)
            
            if (result.b != 0 && sub_40ff40(ecx_8, arg2, arg1 + 0x18).b != 0
                    && sub_5546f0(arg2, arg1 + 0x1c).b != 0
                    && sub_5546f0(arg2, arg1 + 0x20).b != 0)
                result = *arg2 + 4
                
                if (result u<= arg2[1])
                    *arg2 = result
                    result.b = 1
                    return result

result.b = 0
return result
