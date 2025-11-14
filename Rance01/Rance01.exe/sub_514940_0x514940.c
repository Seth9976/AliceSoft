// 函数: sub_514940
// 地址: 0x514940
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

sub_514b80(arg1)
int32_t eax = 0x1000 s>> arg2.b

if (eax s< 1)
    eax = 1

arg1[4] = eax
arg1[5] = eax
arg1[6] = arg2
enum MESSAGEBOX_RESULT eax_2

if (sub_514af0(arg1) != 0)
    if (sub_5150c0(arg1) == 0)
        sub_51ddc0(0x7537e8)
        enum MESSAGEBOX_RESULT eax_4
        eax_4.b = 0
        return eax_4
    
    arg1[4]
    long double x87_r6_1 = fconvert.t(0.5)
    float var_4_1 = fconvert.s(x87_r6_1 + x87_r6_1 / float.t(arg1[5]))
    arg1[0x36] = fconvert.s(fconvert.t(0.5f))
    long double x87_r7_7 = float.t(0)
    arg1[0x37] = fconvert.s(x87_r7_7)
    arg1[0x38] = fconvert.s(x87_r7_7)
    arg1[0x39] = fconvert.s(x87_r7_7)
    arg1[0x3a] = fconvert.s(x87_r7_7)
    arg1[0x3b] = fconvert.s(fconvert.t(-0.5f))
    arg1[0x3c] = fconvert.s(x87_r7_7)
    arg1[0x3d] = fconvert.s(x87_r7_7)
    arg1[0x3e] = fconvert.s(x87_r7_7)
    arg1[0x3f] = fconvert.s(x87_r7_7)
    long double x87_r6_6 = float.t(1)
    arg1[0x40] = fconvert.s(x87_r6_6)
    arg1[0x41] = fconvert.s(x87_r7_7)
    arg1[0x42] = fconvert.s(fconvert.t(fconvert.s(x87_r6_1 / x87_r6_1 + x87_r6_1)))
    arg1[0x43] = fconvert.s(fconvert.t(var_4_1))
    arg1[0x44] = fconvert.s(x87_r7_7)
    arg1[0x45] = fconvert.s(x87_r6_6)
    int32_t* ecx_1 = arg1[0x9b]
    
    if (ecx_1 != 0)
        (*(*ecx_1 + 4))()
        arg1[0x9b] = 0
    
    eax_2 = (*(**arg1 + 0x38))()
    arg1[0x9b] = eax_2
    
    if (eax_2 != 0 && sub_514c90(arg1).b != 0)
        if (sub_514ab0(arg1) != 0)
            arg1[1].b = 1
            return true
        
        sub_51ddc0(0x753820)
        enum MESSAGEBOX_RESULT eax_9
        eax_9.b = 0
        return eax_9
else
    sub_51ddc0(0x7537b8)

eax_2.b = 0
return eax_2
