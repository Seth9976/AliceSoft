// 函数: sub_6163a0
// 地址: 0x6163a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_b4
int32_t var_c = data_78c474 ^ &var_b4
int32_t ebx
int32_t var_b8 = ebx
int32_t esi
int32_t var_bc = esi
int32_t edi
int32_t var_c0 = edi
HWND hdc = arg2
HDC hdc_1 = arg1[0x29]
PAINTSTRUCT paint
paint.hdc = hdc
arg1[0x2c] = 0
SetTextColor(hdc_1, 0)
RECT rect
GetClientRect(hdc, &rect)
var_b4 = divs.dp.d(sx.q(rect.bottom - rect.top), arg1[0x2d] + arg1[0x2e])
int32_t ebx_1 = GetScrollPos(hdc, SB_VERT)
int32_t var_b0 = ebx_1
int32_t eax_9
int32_t edx_2
edx_2:eax_9 = sx.q(GetScrollPos(hdc, SB_HORZ) * arg1[0x2d])
int32_t eax_11 = (eax_9 - edx_2) s>> 1
void* edx_4 = *arg1
var_b4 += ebx_1
int32_t eax_14 = (*(edx_4 + 0x8c))()
int32_t ecx_3 = var_b4
int32_t eax_15

if (ecx_3 s>= eax_14)
    eax_15 = (*(*arg1 + 0x8c))()
else
    eax_15 = ecx_3

var_b4 = eax_15
int32_t var_10

if (ebx_1 s< eax_15)
    int32_t edi_1 = 0
    
    while (true)
        int32_t ebx_2 = ebx_1 + edi_1
        int32_t eax_22 = (*(*arg1 + 0x94))(arg1[0x29], ebx_2, arg1[0x2f] - eax_11, 
            (arg1[0x2d] + arg1[0x2e]) * edi_1)
        int32_t eax_23 = arg1[0x2f]
        
        if (eax_23 s> 0)
            int32_t ecx_8 = arg1[0x2d] + arg1[0x2e]
            int32_t var_14_1 = eax_23
            int32_t ecx_9 = arg1[0x29]
            var_10 = (edi_1 + 1) * ecx_8
            int32_t var_18_1 = edi_1 * ecx_8
            int32_t edx_11 = *(*arg1 + 0x9c)
            int32_t var_1c = 0
            edx_11(ebx_2, ecx_9, &var_1c)
        
        int32_t ecx_11 = arg1[0x2d]
        int32_t eax_28
        int32_t edx_12
        edx_12:eax_28 = sx.q(ecx_11 * eax_22)
        int32_t right_1 = rect.right
        int32_t var_2c = ((eax_28 - edx_12) s>> 1) - eax_11 + arg1[0x2f]
        int32_t eax_34 = arg1[0x2e] + ecx_11
        int32_t var_28_1 = edi_1 * eax_34
        int32_t var_20_1 = (edi_1 + 1) * eax_34
        (*(*arg1 + 0x9c))(ebx_2, arg1[0x29], &var_2c)
        int32_t eax_37 = arg1[0x2e]
        
        if (eax_37 s> 0)
            int32_t edx_15 = arg1[0x2d]
            int32_t left = rect.left
            int32_t ecx_19 = (edx_15 + eax_37) * edi_1
            int32_t var_40_1 = ecx_19 + edx_15 + eax_37
            int32_t var_48_1 = ecx_19 + edx_15
            int32_t right = rect.right
            (*(*arg1 + 0x9c))(ebx_2, arg1[0x29], &left)
        
        edi_1 += 1
        
        if (edi_1 + var_b0 s>= var_b4)
            break
        
        ebx_1 = var_b0
    
    eax_15 = var_b4
    ebx_1 = var_b0
    hdc = paint.hdc

RECT lprc
lprc.left = 0
lprc.top = (arg1[0x2d] + arg1[0x2e]) * (eax_15 - ebx_1)
lprc.right = rect.right
lprc.bottom = rect.bottom
HGDIOBJ hbr = GetStockObject(WHITE_BRUSH)
FillRect(arg1[0x29], &lprc, hbr)
(*(*arg1 + 0x98))(arg1[0x29])
BeginPaint(hdc, &paint)
int32_t top = paint.rcPaint.top
int32_t left_1 = paint.rcPaint.left
BitBlt(paint.hdc, left_1, top, paint.rcPaint.right - left_1, paint.rcPaint.bottom - top, 
    arg1[0x29], left_1, top, SRCCOPY)
EndPaint(hdc, &paint)
sub_6b4885(var_10 ^ &var_b8)
return 0
