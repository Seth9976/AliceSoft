// 函数: sub_41bad0
// 地址: 0x41bad0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* result = *arg2

if (&result[4] u<= arg2[1])
    *(arg1 + 0x24) =
        ((zx.d(result[3]) << 8 | zx.d(result[2])) << 8 | zx.d(result[1])) << 8 | zx.d(*result)
    *arg2 += 4
    result = *arg2
    
    if (&result[4] u<= arg2[1])
        *(arg1 + 0x28) =
            ((zx.d(result[3]) << 8 | zx.d(result[2])) << 8 | zx.d(result[1])) << 8 | zx.d(*result)
        *arg2 += 4
        
        if (sub_5546f0(arg2, arg1 + 0x2c).b != 0)
            result = sub_5f7370(*data_797da0, *(*(arg1 + 8) + 4))
            
            if (result != 0 && sub_5f5cb0(arg2, result).b != 0)
                result.b = 1
                *(arg1 + 0x1c) = 1
                return result

result.b = 0
return result
