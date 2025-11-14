// 函数: sub_651f50
// 地址: 0x651f50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg3 u<= 0x115)
    void* edi
    
    switch (arg3)
        case 1
            sub_6522b0(arg1, arg2)
            return 0
        case 2
            sub_652460(arg1)
            return 0
        case 5
            sub_652580(arg5, arg1, arg2)
            return 0
        case 0xf
            sub_6524a0(arg1, arg2)
            return 0
        case 0x114
            edi = arg1 + 0x1d4
            goto label_651fd1
        case 0x115
            edi = arg1 + 0x1b8
        label_651fd1:
            sub_64d880(edi, zx.d(arg4.w))
            sub_652600(arg1, *(arg1 + 0x74))
            return 0
else if (arg3 - 0x200 u<= 0xa3)
    switch (arg3)
        case 0x200
            sub_6521a0(arg1, arg2)
            return 0
        case 0x201
            sub_652240(arg1)
            return 0
        case 0x202
            *(arg1 + 0x1a1) = *(arg1 + 0x1a0)
            *(arg1 + 0x1a0) = 0
            return 0
        case 0x2a3
            *(arg1 + 0x1b4) = 0
            return 0

return DefWindowProcA(arg2, arg3, arg4, arg5)
