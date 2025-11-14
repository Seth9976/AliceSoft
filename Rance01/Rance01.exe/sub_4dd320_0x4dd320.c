// 函数: sub_4dd320
// 地址: 0x4dd320
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg2
int32_t** edi = arg1
int32_t esi_2

while (ebx != arg3)
    esi_2 = arg5
    int32_t* ecx_1 = arg4
    
    if (ecx_1 == esi_2)
        goto label_4dd369
    
    int32_t* esi_1 = *ecx_1
    
    if (sub_4dc1f0(esi_1, *ebx) == 0)
        *edi = *ebx
        ebx = &ebx[1]
    else
        arg4 += 4
        *edi = esi_1
    
    edi = &edi[1]

esi_2 = arg5
label_4dd369:
sub_6b49d0(edi, ebx, ((arg3 - ebx) s>> 2) * 4)
void* esi_6 = ((esi_2 - arg4) s>> 2) * 4
void* edi_1 = &edi[(arg3 - ebx) s>> 2]
sub_6b49d0(edi_1, arg4, esi_6)
return esi_6 + edi_1
