// 函数: sub_584570
// 地址: 0x584570
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

long double x87_r7_2 = fconvert.t(arg2)
int32_t edi = *(arg1 i+ 0xc)
int32_t i = 0

if (((*(arg1 i+ 0x10) - edi) & 0xfffffffc) s<= 0)
    return 

do
    *(edi + (i << 2)) = sub_70c710(float.t(i - *(arg1 i+ 0x1c))
        * fconvert.t(fconvert.s(x87_r7_2 * x87_r7_2)) * fconvert.t(65536.0))
    edi = *(arg1 i+ 0xc)
    i += 1
while (i s< (*(arg1 i+ 0x10) - edi) s>> 2)
