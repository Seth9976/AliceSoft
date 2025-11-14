// 函数: sub_5fccb0
// 地址: 0x5fccb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

(*(*arg1 + 0x14))(arg4, arg5, arg6, fconvert.s(fconvert.t(arg7)), fconvert.s(fconvert.t(arg8)), 
    fconvert.s(fconvert.t(arg9)), fconvert.s(fconvert.t(arg10)), fconvert.s(fconvert.t(arg11)))

if (arg12 == 0)
    int32_t result = arg1[0x17]
    
    if (arg2 s>= result && arg2 s< arg1[0x19] + result)
        result = arg1[0x18]
        
        if (arg3 s>= result)
            result.b = arg3 s< arg1[0x1a] + result
            return result
    
    result.b = 0
    return result

for (int32_t* i = arg1[0x1b]; i != arg1[0x1c]; i = &i[1])
    if (sub_5fc010(*i, arg3, arg2, arg12) != 0)
        return 1

return 0
