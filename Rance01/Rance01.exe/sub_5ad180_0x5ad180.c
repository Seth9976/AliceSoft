// 函数: sub_5ad180
// 地址: 0x5ad180
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int16_t var_110
int32_t eax_1 = data_78c474 ^ &var_110
void* esi = arg2
char eax_2 = (*(esi + 0x6c)).b
int32_t edi = arg3

if ((eax_2 & 1) == 0)
    sub_5a5c60(esi, "Missing IHDR before tRNS")
    noreturn

int32_t var_120_2
char* ecx

if ((eax_2 & 4) != 0)
    ecx = "Invalid tRNS after IDAT"
label_5ad382:
    sub_5a5de0(ecx, esi)
    var_120_2 = edi
label_5ad389:
    int32_t eax_15 = sub_5ab650(esi, var_120_2)
    sub_6b4885(eax_1 ^ &var_110)
    return eax_15

if (arg4 != 0 && (*(arg4 + 8) & 0x10) != 0)
    ecx = "Duplicate tRNS chunk"
    goto label_5ad382

arg3.b = *(esi + 0x13b)
void var_104

if (arg3.b == 0)
    if (edi != 2)
        ecx = "Incorrect tRNS chunk length"
        goto label_5ad382
    
    int16_t* var_120 = &var_110
    sub_5ab610(2, esi, arg2)
    int16_t eax_4 = var_110
    *(esi + 0x134) = 1
    *(esi + 0x1b0) = zx.w(eax_4.b) * 0x100 + zx.w(eax_4:1.b)
else if (arg3.b != 2)
    if (arg3.b != 3)
        ecx = "tRNS chunk not allowed with alpha channel"
        goto label_5ad382
    
    if ((eax_2 & 2) == 0)
        arg2 = sub_5a5de0("Missing PLTE before tRNS", esi)
    
    if (edi u> zx.d(*(esi + 0x12c)) || edi u> 0x100)
        ecx = "Incorrect tRNS chunk length"
        goto label_5ad382
    
    if (edi == 0)
        sub_5a5de0("Zero length tRNS chunk", esi)
        var_120_2 = edi
        goto label_5ad389
    
    void* var_120_3 = &var_104
    sub_5ab610(edi, esi, arg2)
    *(esi + 0x134) = edi.w
else
    if (edi != 6)
        ecx = "Incorrect tRNS chunk length"
        goto label_5ad382
    
    char var_10c
    char* var_120_1 = &var_10c
    sub_5ab610(6, esi, arg2)
    uint16_t eax_6 = zx.w(var_10c) * 0x100
    *(esi + 0x134) = 1
    char var_10b
    *(esi + 0x1aa) = eax_6 + zx.w(var_10b)
    char var_10a
    char var_109
    *(esi + 0x1ac) = zx.w(var_10a) * 0x100 + zx.w(var_109)
    char var_108
    char var_107
    *(esi + 0x1ae) = zx.w(var_108) * 0x100 + zx.w(var_107)

int32_t eax_11 = sub_5ab650(esi, 0)

if (eax_11 == 0)
    int32_t eax_14 = sub_5b0870(arg4, &var_104, esi, &var_104, zx.d(*(esi + 0x134)), esi + 0x1a8)
    sub_6b4885(eax_1 ^ &var_110)
    return eax_14

*(esi + 0x134) = 0
sub_6b4885(eax_1 ^ &var_110)
return eax_11
