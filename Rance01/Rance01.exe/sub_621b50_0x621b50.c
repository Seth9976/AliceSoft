// 函数: sub_621b50
// 地址: 0x621b50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_a4
int32_t var_c = data_78c474 ^ &var_a4
int32_t ebx
int32_t var_a8 = ebx
int32_t esi
int32_t var_ac = esi
int32_t edi
int32_t var_b0 = edi
RECT rect
GetClientRect(arg2, &rect)
arg1[0x33]
var_a4 = divs.dp.d(sx.q(rect.bottom - rect.top), arg1[0x33])
int32_t ebx_1 = GetScrollPos(arg2, SB_VERT)
int32_t var_a0 = ebx_1
int32_t eax_9
int32_t edx_2
edx_2:eax_9 = sx.q(GetScrollPos(arg2, SB_HORZ) * arg1[0x33])
int32_t eax_11 = (eax_9 - edx_2) s>> 1
void* eax_12 = *arg1
var_a4 += ebx_1
int32_t eax_13 = (*(eax_12 + 0x88))()
int32_t ecx_2 = var_a4
int32_t eax_14

if (ecx_2 s>= eax_13)
    eax_14 = (*(*arg1 + 0x88))()
else
    eax_14 = ecx_2

var_a4 = eax_14
PAINTSTRUCT paint
int32_t var_10

if (ebx_1 s< eax_14)
    int32_t edi_2 = 0
    
    while (true)
        int32_t ebx_2 = ebx_1 + edi_2
        paint.hdc = (*(*arg1 + 0x90))(arg1[0x32], ebx_2, arg1[0x34] - eax_11, arg1[0x33] * edi_2)
        int32_t eax_18 = arg1[0x34]
        
        if (eax_18 s> 0)
            int32_t ecx_8 = arg1[0x33]
            int32_t var_34_1 = eax_18
            int32_t ecx_9 = arg1[0x32]
            int32_t var_30_1 = (edi_2 + 1) * ecx_8
            int32_t var_38_1 = edi_2 * ecx_8
            int32_t edx_12 = *(*arg1 + 0x98)
            int32_t var_3c = 0
            edx_12(ebx_2, ecx_9, &var_3c)
        
        int32_t ecx_11 = arg1[0x33]
        int32_t eax_23
        int32_t edx_13
        edx_13:eax_23 = sx.q(ecx_11 * paint.hdc)
        int32_t right = rect.right
        int32_t var_1c = ((eax_23 - edx_13) s>> 1) - eax_11 + arg1[0x34]
        int32_t var_18_1 = edi_2 * ecx_11
        edi_2 += 1
        var_10 = edi_2 * ecx_11
        (*(*arg1 + 0x98))(ebx_2, arg1[0x32], &var_1c)
        
        if (edi_2 + var_a0 s>= var_a4)
            break
        
        ebx_1 = var_a0
    
    eax_14 = var_a4
    ebx_1 = var_a0

RECT lprc
lprc.top = (eax_14 - ebx_1) * arg1[0x33]
lprc.left = 0
lprc.right = rect.right
lprc.bottom = rect.bottom
HGDIOBJ hbr = GetStockObject(WHITE_BRUSH)
FillRect(arg1[0x32], &lprc, hbr)
(*(*arg1 + 0x94))(arg1[0x32])
BeginPaint(arg2, &paint)
int32_t top = paint.rcPaint.top
int32_t left = paint.rcPaint.left
BitBlt(paint.hdc, left, top, paint.rcPaint.right - left, paint.rcPaint.bottom - top, arg1[0x32], 
    left, top, SRCCOPY)
EndPaint(arg2, &paint)
sub_6b4885(var_10 ^ &var_a8)
return 0
