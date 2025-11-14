// 函数: sub_4ce320
// 地址: 0x4ce320
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* i = *arg1

while (i != arg1[1])
    void* esi_1 = *i
    long double x87_r7_1 = fconvert.t(3.40282347e+38f)
    long double x87_r7_2 = fconvert.t(-3.40282347e+38f)
    *(esi_1 + 0x80) = fconvert.s(x87_r7_1)
    *(esi_1 + 0x88) = fconvert.s(x87_r7_1)
    *(esi_1 + 0x90) = fconvert.s(x87_r7_1)
    *(esi_1 + 0x84) = fconvert.s(x87_r7_2)
    *(esi_1 + 0x8c) = fconvert.s(x87_r7_2)
    *(esi_1 + 0x94) = fconvert.s(x87_r7_2)
    sub_4beb50(esi_1 + 0x28, arg2)
    i = &i[1]
    *(esi_1 + 0x7c) = 1

int32_t* result
result.b = 1
return result
