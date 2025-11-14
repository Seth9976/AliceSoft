// 函数: sub_5d3260
// 地址: 0x5d3260
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = arg1[0x15]
long double x87_r7 = fconvert.t(*(arg1 + 0x58))
long double x87_r7_2

if (eax == 0)
    x87_r7_2 = float.t(1)
else
    x87_r7_2 = (fconvert.t(*(arg1 + 0x60)) - x87_r7) / float.t(eax)

int32_t* ecx = data_797d98
int32_t ebx

if (ecx != 0)
    ebx = (**ecx)()
else
    ebx = 0

enum WAIT_EVENT i

if (WaitForSingleObject(arg1[0x28], 1) != WAIT_OBJECT_0)
    do
        int32_t* ecx_1 = data_797d98
        int32_t eax_4
        
        if (ecx_1 != 0)
            eax_4 = (**ecx_1)()
        else
            eax_4 = 0
        
        int32_t eax_6 = eax_4 - ebx
        HANDLE var_88
        
        if (eax_6 s>= arg1[0x15])
            long double x87_r7_6 = fconvert.t(*(arg1 + 0x60))
            *(arg1 + 0x58) = fconvert.d(x87_r7_6)
            var_88.q = fconvert.d(x87_r7_6)
            long double st0_2
            st0_2, i = sub_5d3970(arg1, var_88)
            break
        
        long double x87_r7_5 =
            float.t(eax_6) * fconvert.t(fconvert.d(x87_r7_2)) + fconvert.t(fconvert.d(x87_r7))
        *(arg1 + 0x58) = fconvert.d(x87_r7_5)
        var_88.q = fconvert.d(x87_r7_5)
        sub_5d3970(arg1, var_88)
        i = WaitForSingleObject(arg1[0x28], 1)
    while (i != WAIT_OBJECT_0)

if (arg1[0x14].b != 0)
    (*(*arg1 + 0x18))()

i.b = 1
