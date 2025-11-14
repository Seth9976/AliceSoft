// 函数: sub_5313f0
// 地址: 0x5313f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_c = arg1
int32_t result

switch (arg2)
    case 0, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1b, 0x1f, 0x20, 0x33, 0x34, 0x3f, 
            0x43, 0x44
        result.b = 1
        return result
    case 0xa, 0xb, 0x2f
        *arg3 = arg4
        result.b = 1
        return result
    case 0xc
        result = sub_5314d0(arg4, *arg3, arg1, arg5)
    label_531430:
        
        if (result.b != 0)
            result.b = 1
            return result
    case 0xd
        result = sub_531a20(*arg3, arg1, arg4, arg5)
        goto label_531430
    case 0xe, 0xf, 0x10, 0x11, 0x1e, 0x32, 0x42
        if (arg4 s< 0)
            result.b = 1
            return result
        
        if (sub_5315e0(arg4, arg5, arg1, arg3).b != 0)
            result.b = 1
            return result

result.b = 0
return result
