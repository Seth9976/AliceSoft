// 函数: sub_625c60
// 地址: 0x625c60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

sub_621640(arg1)
*arg1 = &dpvariable::CVarWnd::`vftable'{for `dpvariable::CTextChildWnd'}
__builtin_memset(&arg1[0x37], 0, 0x1c)
arg1[0x36] = 0xffffffff
arg1[0x50] = 0
arg1[0x51] = 0
HCURSOR eax_1 = LoadCursorA(nullptr, 0x7f00)
arg1[0x3f] = 0xffffffff
arg1[0x4d] = 0xffffffff
arg1[0x4e] = 0xffffffff
arg1[0x4f] = 0xffffffff
arg1[0x35] = eax_1
arg1[0x53] = 0
arg1[0x5b] = 0
arg1[0x5c] = 0
arg1[0x5d] = 0
__builtin_memset(&arg1[0x40], 0, 0x34)
arg1[0x52] = 0xc00000
__builtin_memcpy(&arg1[0x54], 
    "\x80\x80\x80\x00\x8a\x2e\x47\x00\x00\x60\x00\x00\x80\x00\x80\x00\xc0\x00\x80\x00\x80\x40\xc0\x00\x"
"80\xc0\x80\x00", 
    0x1c)
arg1[0x5e].w = 0x100
return arg1
