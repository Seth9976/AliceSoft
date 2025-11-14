// 函数: sub_56ae20
// 地址: 0x56ae20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float var_4 = arg1
float arg_4
float ebp = arg_4
bool cond:0 = *(ebp i+ 0x1d4) != 0
arg_4 = 0f
var_4 = 0f

if (cond:0 || *(ebp i+ 0x168) == 0)
    sub_56e980(ebp i+ 0x128, &arg_4, &var_4)
else
    sub_56dea0(ebp i+ 0x160, 0, 0, &arg_4, &var_4)

long double x87_r7 = float.t(1)
float edi_2 = var_4
float esi_1 = arg_4

if (*(ebp i+ 0x178) == 0)
    arg_4 = fconvert.s(x87_r7)
else if (*(ebp i+ 0x19c) == 0)
    float eax_3 = (*(**(ebp i+ 0x178) + 0x14))()
    arg_4 = eax_3
    
    if (eax_3 s> 0)
        arg_4 = fconvert.s(float.t(*(ebp i+ 0x198)) / float.t(arg_4))
        x87_r7 = float.t(1)
    else
        x87_r7 = float.t(1)
        arg_4 = fconvert.s(x87_r7)
else
    arg_4 = fconvert.s(x87_r7)

if (*(ebp i+ 0x178) != 0 && *(ebp i+ 0x19c) == 0)
    float eax_5 = (*(**(ebp i+ 0x178) + 0x10))()
    var_4 = eax_5
    
    if (eax_5 s> 0)
        x87_r7 = float.t(*(ebp i+ 0x194)) / float.t(var_4)
    else
        x87_r7 = float.t(1)

var_4 = fconvert.s(x87_r7)
sub_563840(ebp i+ 0x1fc, edi_2, esi_1, fconvert.s(fconvert.t(var_4)), fconvert.s(fconvert.t(arg_4)))
