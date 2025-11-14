// 函数: sub_40bb10
// 地址: 0x40bb10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* esi = *(arg1 + 0x2c8)

if (esi == 0)
    arg1.b = 0
    return arg1

void* edi = *(arg1 + 0x2d4)

if (edi != 0)
    if (sub_436ea0(esi, *(edi + 0xc), *(arg1 + 0x27c), *(arg1 + 0x280), arg1 + 0x28c, arg1 + 0x2ac)
            != 0)
        return 1
    
    sub_604c90("Direct3D")

arg1.b = 0
return arg1
