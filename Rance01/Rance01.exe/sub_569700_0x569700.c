// 函数: sub_569700
// 地址: 0x569700
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_9c
int32_t eax_1 = data_78c474 ^ &var_9c

if (*(arg1 + 0x1d5) != 0)
    PAINTSTRUCT paint_1
    BeginPaint(arg2, &paint_1)
    HGDIOBJ hbr = GetStockObject(BLACK_BRUSH)
    var_48
    FillRect(paint_1.hdc, &var_48, hbr)
    EndPaint(arg2, &paint_1)
else if (*(arg1 + 0x1d4) != 0)
label_5697af:
    
    if ((*(*(arg1 + 0x128) + 0x24))() != 0)
        PAINTSTRUCT paint
        BeginPaint(arg2, &paint)
        
        if (paint.fErase != 0)
            int32_t eax_7 = (*(*(arg1 + 0x128) + 0x10))()
            int32_t eax_9
            
            if (*(arg1 + 0xdc) == eax_7)
                eax_9 = (*(*(arg1 + 0x128) + 0x14))()
            
            if (*(arg1 + 0xdc) != eax_7 || *(arg1 + 0xe0) != eax_9)
                int32_t top = paint.rcPaint.top
                int32_t left = paint.rcPaint.left
                sub_5698b0(arg1, paint.hdc, left, top, paint.rcPaint.right - left, 
                    paint.rcPaint.bottom - top)
        
        EndPaint(arg2, &paint)
        int32_t var_98
        int32_t var_94
        sub_56e980(arg1 + 0x128, &var_98, &var_94)
        sub_5644d0(arg1 + 0x128, var_98, var_94)
    else
        sub_569860(arg2)
else
    void* eax_2 = *(arg1 + 0x1bc)
    
    if (eax_2 == 0)
        goto label_5697af
    
    eax_2.b = *(eax_2 + 0x18) != 0
    
    if (eax_2.b == 0)
        goto label_5697af
    
    ValidateRect(arg2, nullptr)
    sub_56e790(arg1 + 0x128, *(arg1 + 0x98), *(arg1 + 0xe8))

sub_6b4885(eax_1 ^ &var_9c)
return 0
