#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 9.29.952.3111
//
//   fxc /nologo /T vs_2_0 /DDIRECTIONALS /DPOINTLIGHTS /DSPOTLIGHTS /Fh
//    matfx_env_all_VS.h matfx_env_VS.hlsl
//
//
// Parameters:
//
//   float4 ambientLight;
//   float4x4 combinedMat;
//   int4 firstLight;
//   float4 fogData;
//   
//   struct
//   {
//       float4 color;
//       float4 position;
//       float4 direction;
//
//   } lights[8];
//   
//   float4 matCol;
//   float3x3 normalMat;
//   int numDirLights;
//   int numPointLights;
//   int numSpotLights;
//   float4 surfProps;
//   float4x4 texMat;
//   float4x4 worldMat;
//
//
// Registers:
//
//   Name           Reg   Size
//   -------------- ----- ----
//   numDirLights   i0       1
//   numPointLights i1       1
//   numSpotLights  i2       1
//   combinedMat    c0       4
//   worldMat       c4       4
//   normalMat      c8       3
//   matCol         c12      1
//   surfProps      c13      1
//   fogData        c14      1
//   ambientLight   c15      1
//   firstLight     c16      1
//   lights         c17     24
//   texMat         c41      4
//

    vs_2_0
    def c11, 0, 3, 1, 0
    dcl_position v0
    dcl_normal v1
    dcl_texcoord v2
    dcl_color v3
    mul r0, v0.y, c1
    mad r0, c0, v0.x, r0
    mad r0, c2, v0.z, r0
    mad r0, c3, v0.w, r0
    mov oPos, r0
    mul r0.xyz, v0.y, c5
    mad r0.xyz, c4, v0.x, r0
    mad r0.xyz, c6, v0.z, r0
    mad r0.xyz, c7, v0.w, r0
    mul r1.xyz, v1.y, c9
    mad r1.xyz, c8, v1.x, r1
    mad r1.xyz, c10, v1.z, r1
    mov r2.x, c13.x
    mad r2.xyz, c15, r2.x, v3
    mov r3.xyz, r2
    mov r1.w, c11.x
    rep i0
      add r2.w, r1.w, c16.x
      mul r2.w, r2.w, c11.y
      mova a0.x, r2.w
      dp3 r2.w, r1, -c19[a0.x]
      max r2.w, r2.w, c11.x
      mul r4.xyz, r2.w, c17[a0.x]
      mad r3.xyz, r4, c13.z, r3
      add r1.w, r1.w, c11.z
    endrep
    mov r2.xyz, r3
    mov r1.w, c11.x
    rep i1
      add r2.w, r1.w, c16.y
      mul r2.w, r2.w, c11.y
      mova a0.x, r2.w
      add r4.xyz, r0, -c18[a0.x]
      dp3 r2.w, r4, r4
      rsq r2.w, r2.w
      mul r4.xyz, r2.w, r4
      dp3 r3.w, r1, -r4
      max r3.w, r3.w, c11.x
      mul r4.xyz, r3.w, c17[a0.x]
      rcp r2.w, r2.w
      rcp r3.w, c17[a0.x].w
      mad r2.w, r2.w, -r3.w, c11.z
      max r2.w, r2.w, c11.x
      mul r4.xyz, r2.w, r4
      mad r2.xyz, r4, c13.z, r2
      add r1.w, r1.w, c11.z
    endrep
    mov r3.xyz, r2
    mov r1.w, c11.x
    rep i2
      add r2.w, r1.w, c16.z
      mul r2.w, r2.w, c11.y
      mova a0.x, r2.w
      add r4.xyz, r0, -c18[a0.x]
      dp3 r2.w, r4, r4
      rsq r2.w, r2.w
      mul r4.xyz, r2.w, r4
      dp3 r4.w, r1, -r4
      dp3 r4.x, r4, c19[a0.x]
      max r4.y, r4.w, c11.x
      mov r4.z, c11.z
      add r4.xz, r4, c18[a0.x].w
      rcp r4.z, r4.z
      mul r4.x, r4.z, r4.x
      slt r4.z, r4.x, c11.x
      mad r4.y, r4.z, -r4.y, r4.y
      max r4.x, r4.x, c19[a0.x].w
      mul r4.x, r4.x, r4.y
      mul r4.xyz, r4.x, c17[a0.x]
      rcp r2.w, r2.w
      rcp r4.w, c17[a0.x].w
      mad r2.w, r2.w, -r4.w, c11.z
      max r2.w, r2.w, c11.x
      mul r4.xyz, r2.w, r4
      mad r3.xyz, r4, c13.z, r3
      add r1.w, r1.w, c11.z
    endrep
    mov r3.w, v3.w
    max r2, r3, c11.x
    min r2, r2, c11.z
    mul oD0, r2, c12
    mul r0.xy, r1.y, c42
    mad r0.xy, c41, r1.x, r0
    mad r0.xy, c43, r1.z, r0
    add oT1.xy, r0, c44
    add r0.x, r0.w, -c14.y
    mul r0.x, r0.x, c14.z
    max r0.x, r0.x, c14.w
    min oT0.z, r0.x, c11.z
    mov oT0.xy, v2

// approximately 99 instruction slots used
#endif

const BYTE g_vs20_main[] =
{
      0,   2, 254, 255, 254, 255, 
    165,   0,  67,  84,  65,  66, 
     28,   0,   0,   0,  94,   2, 
      0,   0,   0,   2, 254, 255, 
     13,   0,   0,   0,  28,   0, 
      0,   0,   0,   1,   0,   0, 
     87,   2,   0,   0,  32,   1, 
      0,   0,   2,   0,  15,   0, 
      1,   0,  62,   0,  48,   1, 
      0,   0,   0,   0,   0,   0, 
     64,   1,   0,   0,   2,   0, 
      0,   0,   4,   0,   2,   0, 
     76,   1,   0,   0,   0,   0, 
      0,   0,  92,   1,   0,   0, 
      2,   0,  16,   0,   1,   0, 
     66,   0, 104,   1,   0,   0, 
      0,   0,   0,   0, 120,   1, 
      0,   0,   2,   0,  14,   0, 
      1,   0,  58,   0,  48,   1, 
      0,   0,   0,   0,   0,   0, 
    128,   1,   0,   0,   2,   0, 
     17,   0,  24,   0,  70,   0, 
    204,   1,   0,   0,   0,   0, 
      0,   0, 220,   1,   0,   0, 
      2,   0,  12,   0,   1,   0, 
     50,   0,  48,   1,   0,   0, 
      0,   0,   0,   0, 227,   1, 
      0,   0,   2,   0,   8,   0, 
      3,   0,  34,   0, 240,   1, 
      0,   0,   0,   0,   0,   0, 
      0,   2,   0,   0,   1,   0, 
      0,   0,   1,   0,   2,   0, 
     16,   2,   0,   0,   0,   0, 
      0,   0,  32,   2,   0,   0, 
      1,   0,   1,   0,   1,   0, 
      6,   0,  16,   2,   0,   0, 
      0,   0,   0,   0,  47,   2, 
      0,   0,   1,   0,   2,   0, 
      1,   0,  10,   0,  16,   2, 
      0,   0,   0,   0,   0,   0, 
     61,   2,   0,   0,   2,   0, 
     13,   0,   1,   0,  54,   0, 
     48,   1,   0,   0,   0,   0, 
      0,   0,  71,   2,   0,   0, 
      2,   0,  41,   0,   4,   0, 
    166,   0,  76,   1,   0,   0, 
      0,   0,   0,   0,  78,   2, 
      0,   0,   2,   0,   4,   0, 
      4,   0,  18,   0,  76,   1, 
      0,   0,   0,   0,   0,   0, 
     97, 109,  98, 105, 101, 110, 
    116,  76, 105, 103, 104, 116, 
      0, 171, 171, 171,   1,   0, 
      3,   0,   1,   0,   4,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,  99, 111, 109,  98, 
    105, 110, 101, 100,  77,  97, 
    116,   0,   3,   0,   3,   0, 
      4,   0,   4,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
    102, 105, 114, 115, 116,  76, 
    105, 103, 104, 116,   0, 171, 
      1,   0,   2,   0,   1,   0, 
      4,   0,   1,   0,   0,   0, 
      0,   0,   0,   0, 102, 111, 
    103,  68,  97, 116,  97,   0, 
    108, 105, 103, 104, 116, 115, 
      0,  99, 111, 108, 111, 114, 
      0, 171, 171, 171,   1,   0, 
      3,   0,   1,   0,   4,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0, 112, 111, 115, 105, 
    116, 105, 111, 110,   0, 100, 
    105, 114, 101,  99, 116, 105, 
    111, 110,   0, 171, 135,   1, 
      0,   0, 144,   1,   0,   0, 
    160,   1,   0,   0, 144,   1, 
      0,   0, 169,   1,   0,   0, 
    144,   1,   0,   0,   5,   0, 
      0,   0,   1,   0,  12,   0, 
      8,   0,   3,   0, 180,   1, 
      0,   0, 109,  97, 116,  67, 
    111, 108,   0, 110, 111, 114, 
    109,  97, 108,  77,  97, 116, 
      0, 171, 171, 171,   3,   0, 
      3,   0,   3,   0,   3,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0, 110, 117, 109,  68, 
    105, 114,  76, 105, 103, 104, 
    116, 115,   0, 171, 171, 171, 
      0,   0,   2,   0,   1,   0, 
      1,   0,   1,   0,   0,   0, 
      0,   0,   0,   0, 110, 117, 
    109,  80, 111, 105, 110, 116, 
     76, 105, 103, 104, 116, 115, 
      0, 110, 117, 109,  83, 112, 
    111, 116,  76, 105, 103, 104, 
    116, 115,   0, 115, 117, 114, 
    102,  80, 114, 111, 112, 115, 
      0, 116, 101, 120,  77,  97, 
    116,   0, 119, 111, 114, 108, 
    100,  77,  97, 116,   0, 118, 
    115,  95,  50,  95,  48,   0, 
     77, 105,  99, 114, 111, 115, 
    111, 102, 116,  32,  40,  82, 
     41,  32,  72,  76,  83,  76, 
     32,  83, 104,  97, 100, 101, 
    114,  32,  67, 111, 109, 112, 
    105, 108, 101, 114,  32,  57, 
     46,  50,  57,  46,  57,  53, 
     50,  46,  51,  49,  49,  49, 
      0, 171,  81,   0,   0,   5, 
     11,   0,  15, 160,   0,   0, 
      0,   0,   0,   0,  64,  64, 
      0,   0, 128,  63,   0,   0, 
      0,   0,  31,   0,   0,   2, 
      0,   0,   0, 128,   0,   0, 
     15, 144,  31,   0,   0,   2, 
      3,   0,   0, 128,   1,   0, 
     15, 144,  31,   0,   0,   2, 
      5,   0,   0, 128,   2,   0, 
     15, 144,  31,   0,   0,   2, 
     10,   0,   0, 128,   3,   0, 
     15, 144,   5,   0,   0,   3, 
      0,   0,  15, 128,   0,   0, 
     85, 144,   1,   0, 228, 160, 
      4,   0,   0,   4,   0,   0, 
     15, 128,   0,   0, 228, 160, 
      0,   0,   0, 144,   0,   0, 
    228, 128,   4,   0,   0,   4, 
      0,   0,  15, 128,   2,   0, 
    228, 160,   0,   0, 170, 144, 
      0,   0, 228, 128,   4,   0, 
      0,   4,   0,   0,  15, 128, 
      3,   0, 228, 160,   0,   0, 
    255, 144,   0,   0, 228, 128, 
      1,   0,   0,   2,   0,   0, 
     15, 192,   0,   0, 228, 128, 
      5,   0,   0,   3,   0,   0, 
      7, 128,   0,   0,  85, 144, 
      5,   0, 228, 160,   4,   0, 
      0,   4,   0,   0,   7, 128, 
      4,   0, 228, 160,   0,   0, 
      0, 144,   0,   0, 228, 128, 
      4,   0,   0,   4,   0,   0, 
      7, 128,   6,   0, 228, 160, 
      0,   0, 170, 144,   0,   0, 
    228, 128,   4,   0,   0,   4, 
      0,   0,   7, 128,   7,   0, 
    228, 160,   0,   0, 255, 144, 
      0,   0, 228, 128,   5,   0, 
      0,   3,   1,   0,   7, 128, 
      1,   0,  85, 144,   9,   0, 
    228, 160,   4,   0,   0,   4, 
      1,   0,   7, 128,   8,   0, 
    228, 160,   1,   0,   0, 144, 
      1,   0, 228, 128,   4,   0, 
      0,   4,   1,   0,   7, 128, 
     10,   0, 228, 160,   1,   0, 
    170, 144,   1,   0, 228, 128, 
      1,   0,   0,   2,   2,   0, 
      1, 128,  13,   0,   0, 160, 
      4,   0,   0,   4,   2,   0, 
      7, 128,  15,   0, 228, 160, 
      2,   0,   0, 128,   3,   0, 
    228, 144,   1,   0,   0,   2, 
      3,   0,   7, 128,   2,   0, 
    228, 128,   1,   0,   0,   2, 
      1,   0,   8, 128,  11,   0, 
      0, 160,  38,   0,   0,   1, 
      0,   0, 228, 240,   2,   0, 
      0,   3,   2,   0,   8, 128, 
      1,   0, 255, 128,  16,   0, 
      0, 160,   5,   0,   0,   3, 
      2,   0,   8, 128,   2,   0, 
    255, 128,  11,   0,  85, 160, 
     46,   0,   0,   2,   0,   0, 
      1, 176,   2,   0, 255, 128, 
      8,   0,   0,   4,   2,   0, 
      8, 128,   1,   0, 228, 128, 
     19,  32, 228, 161,   0,   0, 
      0, 176,  11,   0,   0,   3, 
      2,   0,   8, 128,   2,   0, 
    255, 128,  11,   0,   0, 160, 
      5,   0,   0,   4,   4,   0, 
      7, 128,   2,   0, 255, 128, 
     17,  32, 228, 160,   0,   0, 
      0, 176,   4,   0,   0,   4, 
      3,   0,   7, 128,   4,   0, 
    228, 128,  13,   0, 170, 160, 
      3,   0, 228, 128,   2,   0, 
      0,   3,   1,   0,   8, 128, 
      1,   0, 255, 128,  11,   0, 
    170, 160,  39,   0,   0,   0, 
      1,   0,   0,   2,   2,   0, 
      7, 128,   3,   0, 228, 128, 
      1,   0,   0,   2,   1,   0, 
      8, 128,  11,   0,   0, 160, 
     38,   0,   0,   1,   1,   0, 
    228, 240,   2,   0,   0,   3, 
      2,   0,   8, 128,   1,   0, 
    255, 128,  16,   0,  85, 160, 
      5,   0,   0,   3,   2,   0, 
      8, 128,   2,   0, 255, 128, 
     11,   0,  85, 160,  46,   0, 
      0,   2,   0,   0,   1, 176, 
      2,   0, 255, 128,   2,   0, 
      0,   4,   4,   0,   7, 128, 
      0,   0, 228, 128,  18,  32, 
    228, 161,   0,   0,   0, 176, 
      8,   0,   0,   3,   2,   0, 
      8, 128,   4,   0, 228, 128, 
      4,   0, 228, 128,   7,   0, 
      0,   2,   2,   0,   8, 128, 
      2,   0, 255, 128,   5,   0, 
      0,   3,   4,   0,   7, 128, 
      2,   0, 255, 128,   4,   0, 
    228, 128,   8,   0,   0,   3, 
      3,   0,   8, 128,   1,   0, 
    228, 128,   4,   0, 228, 129, 
     11,   0,   0,   3,   3,   0, 
      8, 128,   3,   0, 255, 128, 
     11,   0,   0, 160,   5,   0, 
      0,   4,   4,   0,   7, 128, 
      3,   0, 255, 128,  17,  32, 
    228, 160,   0,   0,   0, 176, 
      6,   0,   0,   2,   2,   0, 
      8, 128,   2,   0, 255, 128, 
      6,   0,   0,   3,   3,   0, 
      8, 128,  17,  32, 255, 160, 
      0,   0,   0, 176,   4,   0, 
      0,   4,   2,   0,   8, 128, 
      2,   0, 255, 128,   3,   0, 
    255, 129,  11,   0, 170, 160, 
     11,   0,   0,   3,   2,   0, 
      8, 128,   2,   0, 255, 128, 
     11,   0,   0, 160,   5,   0, 
      0,   3,   4,   0,   7, 128, 
      2,   0, 255, 128,   4,   0, 
    228, 128,   4,   0,   0,   4, 
      2,   0,   7, 128,   4,   0, 
    228, 128,  13,   0, 170, 160, 
      2,   0, 228, 128,   2,   0, 
      0,   3,   1,   0,   8, 128, 
      1,   0, 255, 128,  11,   0, 
    170, 160,  39,   0,   0,   0, 
      1,   0,   0,   2,   3,   0, 
      7, 128,   2,   0, 228, 128, 
      1,   0,   0,   2,   1,   0, 
      8, 128,  11,   0,   0, 160, 
     38,   0,   0,   1,   2,   0, 
    228, 240,   2,   0,   0,   3, 
      2,   0,   8, 128,   1,   0, 
    255, 128,  16,   0, 170, 160, 
      5,   0,   0,   3,   2,   0, 
      8, 128,   2,   0, 255, 128, 
     11,   0,  85, 160,  46,   0, 
      0,   2,   0,   0,   1, 176, 
      2,   0, 255, 128,   2,   0, 
      0,   4,   4,   0,   7, 128, 
      0,   0, 228, 128,  18,  32, 
    228, 161,   0,   0,   0, 176, 
      8,   0,   0,   3,   2,   0, 
      8, 128,   4,   0, 228, 128, 
      4,   0, 228, 128,   7,   0, 
      0,   2,   2,   0,   8, 128, 
      2,   0, 255, 128,   5,   0, 
      0,   3,   4,   0,   7, 128, 
      2,   0, 255, 128,   4,   0, 
    228, 128,   8,   0,   0,   3, 
      4,   0,   8, 128,   1,   0, 
    228, 128,   4,   0, 228, 129, 
      8,   0,   0,   4,   4,   0, 
      1, 128,   4,   0, 228, 128, 
     19,  32, 228, 160,   0,   0, 
      0, 176,  11,   0,   0,   3, 
      4,   0,   2, 128,   4,   0, 
    255, 128,  11,   0,   0, 160, 
      1,   0,   0,   2,   4,   0, 
      4, 128,  11,   0, 170, 160, 
      2,   0,   0,   4,   4,   0, 
      5, 128,   4,   0, 228, 128, 
     18,  32, 255, 160,   0,   0, 
      0, 176,   6,   0,   0,   2, 
      4,   0,   4, 128,   4,   0, 
    170, 128,   5,   0,   0,   3, 
      4,   0,   1, 128,   4,   0, 
    170, 128,   4,   0,   0, 128, 
     12,   0,   0,   3,   4,   0, 
      4, 128,   4,   0,   0, 128, 
     11,   0,   0, 160,   4,   0, 
      0,   4,   4,   0,   2, 128, 
      4,   0, 170, 128,   4,   0, 
     85, 129,   4,   0,  85, 128, 
     11,   0,   0,   4,   4,   0, 
      1, 128,   4,   0,   0, 128, 
     19,  32, 255, 160,   0,   0, 
      0, 176,   5,   0,   0,   3, 
      4,   0,   1, 128,   4,   0, 
      0, 128,   4,   0,  85, 128, 
      5,   0,   0,   4,   4,   0, 
      7, 128,   4,   0,   0, 128, 
     17,  32, 228, 160,   0,   0, 
      0, 176,   6,   0,   0,   2, 
      2,   0,   8, 128,   2,   0, 
    255, 128,   6,   0,   0,   3, 
      4,   0,   8, 128,  17,  32, 
    255, 160,   0,   0,   0, 176, 
      4,   0,   0,   4,   2,   0, 
      8, 128,   2,   0, 255, 128, 
      4,   0, 255, 129,  11,   0, 
    170, 160,  11,   0,   0,   3, 
      2,   0,   8, 128,   2,   0, 
    255, 128,  11,   0,   0, 160, 
      5,   0,   0,   3,   4,   0, 
      7, 128,   2,   0, 255, 128, 
      4,   0, 228, 128,   4,   0, 
      0,   4,   3,   0,   7, 128, 
      4,   0, 228, 128,  13,   0, 
    170, 160,   3,   0, 228, 128, 
      2,   0,   0,   3,   1,   0, 
      8, 128,   1,   0, 255, 128, 
     11,   0, 170, 160,  39,   0, 
      0,   0,   1,   0,   0,   2, 
      3,   0,   8, 128,   3,   0, 
    255, 144,  11,   0,   0,   3, 
      2,   0,  15, 128,   3,   0, 
    228, 128,  11,   0,   0, 160, 
     10,   0,   0,   3,   2,   0, 
     15, 128,   2,   0, 228, 128, 
     11,   0, 170, 160,   5,   0, 
      0,   3,   0,   0,  15, 208, 
      2,   0, 228, 128,  12,   0, 
    228, 160,   5,   0,   0,   3, 
      0,   0,   3, 128,   1,   0, 
     85, 128,  42,   0, 228, 160, 
      4,   0,   0,   4,   0,   0, 
      3, 128,  41,   0, 228, 160, 
      1,   0,   0, 128,   0,   0, 
    228, 128,   4,   0,   0,   4, 
      0,   0,   3, 128,  43,   0, 
    228, 160,   1,   0, 170, 128, 
      0,   0, 228, 128,   2,   0, 
      0,   3,   1,   0,   3, 224, 
      0,   0, 228, 128,  44,   0, 
    228, 160,   2,   0,   0,   3, 
      0,   0,   1, 128,   0,   0, 
    255, 128,  14,   0,  85, 161, 
      5,   0,   0,   3,   0,   0, 
      1, 128,   0,   0,   0, 128, 
     14,   0, 170, 160,  11,   0, 
      0,   3,   0,   0,   1, 128, 
      0,   0,   0, 128,  14,   0, 
    255, 160,  10,   0,   0,   3, 
      0,   0,   4, 224,   0,   0, 
      0, 128,  11,   0, 170, 160, 
      1,   0,   0,   2,   0,   0, 
      3, 224,   2,   0, 228, 144, 
    255, 255,   0,   0
};
