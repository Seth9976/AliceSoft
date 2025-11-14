// 函数: sub_593190
// 地址: 0x593190
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if ((*(*arg1 + 0x48))() != 0)
    (*(*arg1 + 0x4c))()

long double x87_r7 = fconvert.t(100.0)
arg1[0x12] = arg2
long double x87_r6

if (arg3 s> 0)
    x87_r6 = float.t(arg3) / x87_r7
else
    x87_r6 = float.t(0)

*(arg1 + 0x58) = fconvert.d(x87_r6)
arg1[0x11].b = arg4
HANDLE eax_4

if (arg2 s> 0)
    HANDLE hEvent = arg1[0x27]
    
    if (hEvent != 0)
        ResetEvent(hEvent)
    
    sub_576230(&arg1[0x26], sub_5937b0, arg1)
else
    long double x87_r6_2 = fconvert.t(*(arg1 + 0x58))
    *(arg1 + 0x50) = fconvert.d(x87_r6_2)
    eax_4 = sub_70c710(x87_r7 * x87_r6_2)
    bool cond:1_1 = arg1[0x11].b == 0
    arg1[3] = eax_4
    
    if (not(cond:1_1))
        (*(*arg1 + 0x18))()
        int32_t eax_6
        eax_6.b = 1
        return 

eax_4.b = 1
