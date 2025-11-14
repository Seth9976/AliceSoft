// 函数: sub_53b140
// 地址: 0x53b140
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

enum MESSAGEBOX_RESULT result = *(arg1 + 0x1f4)

if (result != 0xffffffff)
    if (sub_552ef0(arg1 + 0x1dc, result).b == 0)
        result.b = 0
        return result
    
    *(arg1 + 0x1f4) = 0xffffffff

result.b = 1
return result
