// 函数: sub_51a0a0
// 地址: 0x51a0a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* edi = arg1
int32_t* ecx = *edi

if (ecx != 0 && (*(*ecx + 0x34))().b == 0)
    arg1 = sub_51a100(edi[5], edi, fconvert.s(fconvert.t(edi[1])), fconvert.s(fconvert.t(edi[2])), 
        fconvert.s(fconvert.t(edi[3])), fconvert.s(fconvert.t(edi[4])), 
        fconvert.s(fconvert.t(edi[6])), fconvert.s(fconvert.t(edi[7])))
    
    if (arg1.b == 0)
        return arg1

arg1.b = 1
return arg1
