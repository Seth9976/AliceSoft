// 函数: sub_652600
// 地址: 0x652600
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_728d40
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_74
int32_t eax_2 = data_78c474 ^ &var_74
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t** var_6c
int32_t* ecx_1
int32_t edx
ecx_1, edx = sub_405410(arg1 + 0x1f0, &var_6c, *(arg1 + 0x1f0), *(arg1 + 0x1f4))
void* eax_6 = *(arg1 + 0x6c)
*(arg1 + 0x70) = eax_6
int32_t* var_70 = eax_6 + 1
int32_t* eax_7
eax_7.b = *(arg1 + 0x74) != 0
var_74 = 0

if (eax_7.b != 0 && arg2 s> 0)
    int32_t** eax_9 = data_797ddc + 0xa8
    int32_t* var_88_1 = arg2
    var_6c = eax_9
    char eax_10
    int32_t* ecx_2
    int32_t edx_1
    eax_10, ecx_2, edx_1 = sub_418b70(eax_9, edx, ecx_1)
    
    if (eax_10 != 0)
        int32_t* var_88_2 = arg2
        
        if (sub_418b70(var_6c, edx_1, ecx_2) != 0)
            var_6c = sub_6841d0(arg2, var_70)
        else
            var_6c = nullptr
        
        GetScrollPos(*(arg1 + 0x1d8), *(arg1 + 0x1e0))
        
        if (*(arg1 + 0x74) != arg2)
            *(arg1 + 0x200) = 0
        
        void* eax_16 = var_6c - 1
        *(arg1 + 0x68) = 0
        
        switch (eax_16)
            case nullptr
                sub_652b20(arg2, var_70, arg1, arg1 + 0x1f0)
            case 1
                sub_652de0(arg2, arg1, var_70, arg1 + 0x1f0)
            case 2
                sub_653180(arg1, arg2, var_70, arg1 + 0x1f0)
            case 3
                sub_653c40(arg2, var_70, arg1, arg1 + 0x1f0)
            case 4
                sub_653ea0(arg2, var_70, arg1, arg1 + 0x1f0)
            case 5
                sub_654100(var_70, arg1, arg2, arg1 + 0x1f0)
            case 6
                sub_654700(var_70, arg2, arg1 + 0x1f0)
            case 7
                sub_654910(arg1, arg2, var_70, arg1 + 0x1f0)
            case 8
                sub_654d60(arg2, var_70, arg1 + 0x1f0)
            case 9
                sub_654fc0(arg2, var_70, arg1, arg1 + 0x1f0)

int32_t i_2 = (*(arg1 + 0x1f4) - *(arg1 + 0x1f0)) s/ 0x1c

if (i_2 s> 0)
    int32_t* ecx_17 = *(arg1 + 0x1f0) + 0x10
    int32_t i_1 = i_2
    int32_t i
    
    do
        int32_t edx_13 = *ecx_17
        
        if (edx_13 s> var_74)
            var_74 = edx_13
        
        ecx_17 = &ecx_17[7]
        i = i_1
        i_1 -= 1
    while (i != 1)

*(arg1 + 0x1cc) = i_2 + 1
int32_t eax_22 = GetScrollPos(*(arg1 + 0x1bc), *(arg1 + 0x1c4))
uint32_t ecx_19 = zx.d(*(arg1 + 0x1d0))
int32_t ecx_20 = neg.d(ecx_19)
int32_t var_60 = (sbb.d(ecx_20, ecx_20, ecx_19 != 0) & 8) | 7
int32_t ecx_24 = *(arg1 + 0x1cc)
int32_t* lpsi = 0x1c
int32_t var_5c = 0

if (ecx_24 s<= 0)
    int32_t var_58_1 = 0
else
    int32_t var_58 = ecx_24 - 1

int32_t var_50 = eax_22
int32_t var_54 = *(arg1 + 0x1c8)
SetScrollInfo(*(arg1 + 0x1bc), *(arg1 + 0x1c4), &lpsi, 1)
int32_t eax_24
int32_t edx_17
edx_17:eax_24 = sx.q(*(arg1 + 0x60))
*(arg1 + 0x1e8) = ((eax_24 - edx_17) s>> 1) * (var_74 + 2)
int32_t eax_29 = GetScrollPos(*(arg1 + 0x1d8), *(arg1 + 0x1e0))
uint32_t ecx_29 = zx.d(*(arg1 + 0x1ec))
int32_t ecx_30 = neg.d(ecx_29)
int32_t var_60_1 = (sbb.d(ecx_30, ecx_30, ecx_29 != 0) & 8) | 7
int32_t ecx_34 = *(arg1 + 0x1e8)
lpsi = 0x1c
int32_t var_5c_1 = 0

if (ecx_34 s<= 0)
    int32_t var_58_3 = 0
else
    int32_t var_58_2 = ecx_34 - 1

int32_t var_50_1 = eax_29
int32_t var_54_1 = *(arg1 + 0x1e4)
SetScrollInfo(*(arg1 + 0x1d8), *(arg1 + 0x1e0), &lpsi, 1)
int32_t eax_31 = GetScrollPos(*(arg1 + 0x1bc), *(arg1 + 0x1c4))
int32_t lpwndpl
GetWindowPlacement(*(arg1 + 0x34), &lpwndpl)
int32_t var_28
int32_t var_20
var_74 = divs.dp.d(sx.q(var_20 - var_28 - *(arg1 + 0x5c)), *(arg1 + 0x60))
lpsi = nullptr
int32_t var_60_2 = 0
int32_t var_5c_2 = 0
int32_t var_c_1 = 0
int32_t eax_41 = (*(arg1 + 0x1f4) - *(arg1 + 0x1f0)) s/ 0x1c

if (eax_41 s< var_74 + eax_31)
    var_74 = eax_41 - eax_31

int32_t ecx_43 = var_74 + eax_31

if (eax_31 s< ecx_43)
    int32_t eax_46 = eax_31 * 0x1c
    var_74 = eax_46
    var_6c = ecx_43 - eax_31
    
    while (true)
        sub_405220(*(arg1 + 0x1f0) + eax_46, &lpsi)
        var_74 += 0x1c
        int32_t** temp5_1 = var_6c
        var_6c -= 1
        
        if (temp5_1 == 1)
            break
        
        eax_46 = var_74

char eax_47 = *(arg1 + 0x1a0)
int32_t esi_1 = *(arg1 + 0x1a8)
int32_t eax_48 = GetScrollPos(*(arg1 + 0x1d8), *(arg1 + 0x1e0))
int32_t* eax_50 = sub_64e830(esi_1 - *(arg1 + 0x64), eax_47, &lpwndpl, arg1 + 0x11c, &lpsi, eax_48)

if (arg1 + 0x78 != eax_50)
    if (*(arg1 + 0x8c) u>= 0x10)
        int32_t var_88_21 = *(arg1 + 0x78)
        sub_6b4d5b()
    
    *(arg1 + 0x8c) = 0xf
    *(arg1 + 0x88) = 0
    *(arg1 + 0x78) = 0
    
    if (eax_50[5] u>= 0x10)
        *(arg1 + 0x78) = *eax_50
        *eax_50 = 0
    else
        sub_6b49d0(arg1 + 0x78, eax_50, eax_50[4] + 1, eax_4)
    
    *(arg1 + 0x88) = eax_50[4]
    *(arg1 + 0x8c) = eax_50[5]
    eax_50[5] = 0xf
    eax_50[4] = 0
    *eax_50 = 0

var_c_1.b = 0
int32_t var_34

if (var_34 u>= 0x10)
    int32_t lpwndpl_1 = lpwndpl
    sub_6b4d5b()

sub_64de50(arg1 + 0x9c, 0, *(arg1 + 0x1b4), *(arg1 + 0x1a4), *(arg1 + 0x1a8))
HWND hWnd = *(arg1 + 0x34)
*(arg1 + 0x74) = arg2
InvalidateRect(hWnd, nullptr, 0)
BOOL result = UpdateWindow(*(arg1 + 0x34))
int32_t* lpsi_1 = lpsi

if (lpsi_1 != 0)
    int32_t* lpsi_3 = lpsi_1
    
    if (lpsi_1 != var_60_2)
        do
            if (lpsi_3[5] u>= 0x10)
                int32_t var_88_25 = *lpsi_3
                sub_6b4d5b()
            
            lpsi_3[5] = 0xf
            lpsi_3[4] = 0
            *lpsi_3 = 0
            lpsi_3 = &lpsi_3[7]
        while (lpsi_3 != var_60_2)
    
    int32_t* lpsi_2 = lpsi_1
    result = sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_74)
return result
