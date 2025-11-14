// 函数: sub_5a6110
// 地址: 0x5a6110
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 == 0)
    arg1 = "undefined"

char* var_4 = arg1
sub_6b60ed(0x78c230, "libpng error: %s")
sub_6b60ed(0x78c230, U"\n")

if (arg2 != 0)
    int32_t eax = *(arg2 + 0x40)
    
    if (eax != 0)
        eax(arg2, 1)

ExitProcess(0)
noreturn
