// 函数: sub_56b750
// 地址: 0x56b750
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HDC result = *(arg1 + 8)

if (result->__offset(0x694).b == 0)
    void* edi_1 = *(arg1 + 4)
    sub_6b2910(edi_1 + 0x130)
    sub_56e790(edi_1 + 0x128, *(edi_1 + 0x98), *(edi_1 + 0xe8))
    result.b = 1
    *(*(arg1 + 8) + 0x694) = 1
    *(arg1 + 0xc) = 1

return result
