// 函数: sub_4f4cc0
// 地址: 0x4f4cc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg2
float* eax = *ebx

if (&eax[1] u> ebx[1])
label_4f4e65:
    eax.b = 0
    return 

uint32_t edx_2 = zx.d(*(eax + 1))
uint32_t ebp_7 = ((zx.d(*(eax + 3)) << 8 | zx.d(*(eax + 2))) << 8 | edx_2) << 8 | zx.d(*eax)
*ebx = &eax[1]
sub_4f5790(ebp_7, edx_2, &eax[1], &arg1[0xa])
int32_t var_34_1 = 0
int32_t eax_3

if (ebp_7 s> 0)
    arg2 = nullptr
    
    do
        void* edi_2 = arg1[0xa] i+ arg2
        
        if (sub_410070(ebx, edi_2).b == 0)
            goto label_4f4e65
        
        eax = *ebx
        
        if (&eax[1] u> ebx[1])
            goto label_4f4e65
        
        *(edi_2 + 0x1c) =
            ((zx.d(*(eax + 3)) << 8 | zx.d(*(eax + 2))) << 8 | zx.d(*(eax + 1))) << 8 | zx.d(*eax)
        *ebx += 4
        eax = *ebx
        
        if (&eax[1] u> ebx[1])
            goto label_4f4e65
        
        uint32_t edx_10 = zx.d(*(eax + 3))
        long double x87_r7_1 = float.t(0)
        uint32_t ecx_5 = zx.d(*(eax + 2))
        float var_2c = fconvert.s(x87_r7_1)
        float var_28_1 = fconvert.s(x87_r7_1)
        float var_24_1 = fconvert.s(x87_r7_1)
        *(edi_2 + 0x20) = ((edx_10 << 8 | ecx_5) << 8 | zx.d(*(eax + 1))) << 8 | zx.d(*eax)
        *ebx += 4
        
        if (sub_5073c0(&var_2c, ebx).b == 0)
            goto label_4f4e65
        
        long double x87_r7_2 = float.t(0)
        float var_14 = fconvert.s(x87_r7_2)
        float var_10_1 = fconvert.s(x87_r7_2)
        float var_c_1 = fconvert.s(x87_r7_2)
        float var_8_1 = fconvert.s(float.t(1))
        
        if (sub_4f4c20(&var_14, ebx).b == 0)
            goto label_4f4e65
        
        long double x87_r7_5 = fconvert.t(fconvert.s(fconvert.t(*arg1)))
        arg2 = &arg2[0x11]
        long double x87_r6_2 = x87_r7_5 * fconvert.t(var_2c)
        *(edi_2 + 0x28) = var_14
        *(edi_2 + 0x2c) = var_10_1
        *(edi_2 + 0x38) = fconvert.s(x87_r6_2)
        *(edi_2 + 0x30) = var_c_1
        eax_3 = var_34_1 + 1
        *(edi_2 + 0x34) = var_8_1
        *(edi_2 + 0x3c) = fconvert.s(x87_r7_5 * fconvert.t(var_28_1))
        var_34_1 = eax_3
        *(edi_2 + 0x40) = fconvert.s(x87_r7_5 * fconvert.t(var_24_1))
    while (eax_3 s< ebp_7)

eax_3.b = 1
