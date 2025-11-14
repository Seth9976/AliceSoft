// 函数: sub_6770c0
// 地址: 0x6770c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 == 0)
    return 

if (*(arg1 + 0x26) == 0)
    sub_677a30(arg1, arg2)
else
    sub_677830(arg1, arg2)
    sub_6778d0(arg1, arg2)
    sub_677980(arg1, arg2)

void* edi_1 = *(arg2 + 0x10)

if (*(edi_1 + 0x28) != 0)
    (*(**(edi_1 + 0x28) + 0x20))()

sub_413500(edi_1)

if (*(edi_1 + 0x2c) != 0)
    (*(**(edi_1 + 0x2c) + 0xc))(arg3, *(edi_1 + 0x28))

if (*(arg2 + 0xc) != 0)
    return 

for (int32_t* i = *(arg2 + 0x1c); i != *(arg2 + 0x20); i = &i[1])
    (*(**i + 0x50))(*(arg2 + 0x2c))
