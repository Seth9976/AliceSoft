// 函数: sub_56af30
// 地址: 0x56af30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg3[0x39].b != arg1.b)
    arg3[0x39].b = arg1.b
    uint32_t eax = zx.d(arg1.b)
    int32_t eax_1 = neg.d(eax)
    bool cond:0_1 = *(arg3 + 0x2a1) == 0
    arg3[0xd8] = sbb.d(eax_1, eax_1, eax != 0) & 2
    
    if (not(cond:0_1))
        sub_568430(arg3)
        Sleep(0xc8)
        sub_568350(arg3)

arg1.b = 1
return arg1
