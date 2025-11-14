// 函数: sub_552fd0
// 地址: 0x552fd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

enum MESSAGEBOX_RESULT result = *(arg1 + 0x18)

if (result != 0xffffffff)
    result = sub_552ef0(arg1, result)
    
    if (result.b == 0)
        return result
    
    *(arg1 + 0x18) = 0xffffffff

result.b = 1
return result
