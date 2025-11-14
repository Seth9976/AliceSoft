// 函数: sub_5a4e30
// 地址: 0x5a4e30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi = 0

if (arg2 == 0)
    sub_5a5de0("Image width is zero in IHDR", arg1)
    edi = arg2 + 1

if (arg3 == 0)
    sub_5a5de0("Image height is zero in IHDR", arg1)
    edi = arg3 + 1

if (arg2 u> *(arg1 + 0x280))
    sub_5a5de0("Image width exceeds user limit in IHDR", arg1)
    edi = 1

if (arg3 u> *(arg1 + 0x284))
    sub_5a5de0("Image height exceeds user limit in IHDR", arg1)
    edi = 1

if (arg2 u> 0x7fffffff)
    sub_5a5de0("Invalid image width in IHDR", arg1)
    edi = 1

if (arg3 u> 0x7fffffff)
    sub_5a5de0("Invalid image height in IHDR", arg1)
    edi = 1

if (arg2 u> 0x1fffff8e)
    sub_5a5de0("Width is too large for libpng to process pixels", arg1)

if (arg4 != 1 && arg4 != 2 && arg4 != 4 && arg4 != 8 && arg4 != 0x10)
    sub_5a5de0("Invalid bit depth in IHDR", arg1)
    edi = 1

if (arg5 s< 0 || arg5 == 1 || arg5 == 5 || arg5 s> 6)
    sub_5a5de0("Invalid color type in IHDR", arg1)
    edi = 1

if (arg5 != 3)
    if ((arg5 == 2 || arg5 == 4 || arg5 == 6) && arg4 s< 8)
        sub_5a5de0("Invalid color type/bit depth combination in IHDR", arg1)
        edi = 1
else if (arg4 s> 8)
    sub_5a5de0("Invalid color type/bit depth combination in IHDR", arg1)
    edi = 1

if (arg6 s>= 2)
    sub_5a5de0("Unknown interlace method in IHDR", arg1)
    edi = 1

if (arg7 != 0)
    sub_5a5de0("Unknown compression method in IHDR", arg1)
    edi = 1

if ((*(arg1 + 0x6c) & 0x1000) != 0 && *(arg1 + 0x258) != 0)
    sub_5a5de0("MNG features are not allowed in a PNG datastream", arg1)

uint32_t result = arg8

if (result == 0)
label_5a4fdf:
    
    if (edi != 1)
        return result
else
    if ((*(arg1 + 0x258) & 4) == 0 || result != 0x40 || (*(arg1 + 0x6c) & 0x1000) != 0)
        result = sub_5a5de0("Unknown filter method in IHDR", arg1)
        edi = 1
    else if (arg5 != 2 && arg5 != 6)
        result = sub_5a5de0("Unknown filter method in IHDR", arg1)
        edi = 1
    
    if ((*(arg1 + 0x6c) & 0x1000) == 0)
        goto label_5a4fdf
    
    sub_5a5de0("Invalid filter method in IHDR", arg1)

sub_5a5c60(arg1, "Invalid IHDR data")
noreturn
