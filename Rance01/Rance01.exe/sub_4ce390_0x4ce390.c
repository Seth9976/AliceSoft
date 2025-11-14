// 函数: sub_4ce390
// 地址: 0x4ce390
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = arg1[1]
void** edi = *arg1

while (edi != ebx)
    long double x87_r7_1 = fconvert.t(3.40282347e+38f)
    void* esi_1 = *edi
    long double x87_r7_2 = fconvert.t(-3.40282347e+38f)
    sub_4beb50(esi_1 + 0x28, arg2)
    edi = &edi[1]
    long double x87_r6_3 = fconvert.t(0.5)
    *(esi_1 + 0x6c) =
        fconvert.s((fconvert.t(fconvert.s(x87_r7_1)) + fconvert.t(fconvert.s(x87_r7_2))) * x87_r6_3)
    *(esi_1 + 0x70) =
        fconvert.s((fconvert.t(fconvert.s(x87_r7_1)) + fconvert.t(fconvert.s(x87_r7_2))) * x87_r6_3)
    *(esi_1 + 0x74) =
        fconvert.s(x87_r6_3 * (fconvert.t(fconvert.s(x87_r7_2)) + fconvert.t(fconvert.s(x87_r7_1))))
