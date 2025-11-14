// 函数: sub_425400
// 地址: 0x425400
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg2 s< 0 || arg2 s>= (*(arg1 + 0x14) - *(arg1 + 0x10)) s>> 2)
    return float.t(0)

void* eax = *(*(arg1 + 0x10) + (arg2 << 2))

switch (arg3)
    case 0
        return fconvert.t(fconvert.s(fconvert.t(*(eax + 0x14))))
    case 1
        return fconvert.t(fconvert.s(fconvert.t(*(eax + 0x18))))
    case 2
        return fconvert.t(fconvert.s(fconvert.t(*(eax + 0x1c))))
    case 5
        return fconvert.t(fconvert.s(fconvert.t(*(eax + 0x20))))

return fconvert.t(fconvert.s(float.t(0)))
