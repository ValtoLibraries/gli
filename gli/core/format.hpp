///////////////////////////////////////////////////////////////////////////////////
/// OpenGL Image (gli.g-truc.net)
///
/// Copyright (c) 2008 - 2012 G-Truc Creation (www.g-truc.net)
/// Permission is hereby granted, free of charge, to any person obtaining a copy
/// of this software and associated documentation files (the "Software"), to deal
/// in the Software without restriction, including without limitation the rights
/// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
/// copies of the Software, and to permit persons to whom the Software is
/// furnished to do so, subject to the following conditions:
/// 
/// The above copyright notice and this permission notice shall be included in
/// all copies or substantial portions of the Software.
/// 
/// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
/// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
/// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
/// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
/// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
/// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
/// THE SOFTWARE.
///
/// @ref core
/// @file gli/core/format.hpp
/// @date 2012-10-16 / 2012-10-16
/// @author Christophe Riccio
///////////////////////////////////////////////////////////////////////////////////

#pragma once

namespace gli
{
	enum format
	{
		FORMAT_NULL = -1,

		// unorm formats
		R8_UNORM = 0,
		RG8_UNORM,
		RGB8_UNORM,
		RGBA8_UNORM,

		R16_UNORM,
		RG16_UNORM,
		RGB16_UNORM,
		RGBA16_UNORM,

		// snorm formats
		R8_SNORM,
		RG8_SNORM,
		RGB8_SNORM,
		RGBA8_SNORM,

		R16_SNORM,
		RG16_SNORM,
		RGB16_SNORM,
		RGBA16_SNORM,

		// Unsigned integer formats
		R8U,
		RG8U,
		RGB8U,
		RGBA8U,

		R16U,
		RG16U,
		RGB16U,
		RGBA16U,

		R32U,
		RG32U,
		RGB32U,
		RGBA32U,

		// Signed integer formats
		R8I,
		RG8I,
		RGB8I,
		RGBA8I,

		R16I,
		RG16I,
		RGB16I,
		RGBA16I,

		R32I,
		RG32I,
		RGB32I,
		RGBA32I,

		// Floating formats
		R16F,
		RG16F,
		RGB16F,
		RGBA16F,

		R32F,
		RG32F,
		RGB32F,
		RGBA32F,

		// Packed formats
		RGB9E5,
		RG11B10F,
		R3G3B2,
		R5G6B5,
		RGB5A1,
		RGBA4,
		RGB10A2,

		// Depth formats
		D16,
		D24X8,
		D24S8,
		D32F,
		D32FS8X24,

		// Compressed formats
		RGB_DXT1,
		RGBA_DXT1,
		RGBA_DXT3,
		RGBA_DXT5,
		R_ATI1N_UNORM,
		R_ATI1N_SNORM,
		RG_ATI2N_UNORM,
		RG_ATI2N_SNORM,
		RGB_BP_UNSIGNED_FLOAT,
		RGB_BP_SIGNED_FLOAT,
		RGB_BP_UNORM,
		RGB_PVRTC_4BPPV1,
		RGB_PVRTC_2BPPV1,
		RGBA_PVRTC_4BPPV1,
		RGBA_PVRTC_2BPPV1,
		ATC_RGB,
		ATC_RGBA_EXPLICIT_ALPHA,
		ATC_RGBA_INTERPOLATED_ALPHA,
		RGBA_ASTC_4x4,
		RGBA_ASTC_5x4,
		RGBA_ASTC_5x5,
		RGBA_ASTC_6x5,
		RGBA_ASTC_6x6,
		RGBA_ASTC_8x5,
		RGBA_ASTC_8x6,
		RGBA_ASTC_8x8,
		RGBA_ASTC_10x5,
		RGBA_ASTC_10x6,
		RGBA_ASTC_10x8,
		RGBA_ASTC_10x10,
		RGBA_ASTC_12x10,
		RGBA_ASTC_12x12,

		// sRGB formats
		SRGB8,
		SRGB8_ALPHA8,
		SRGB_DXT1,
		SRGB_ALPHA_DXT1,
		SRGB_ALPHA_DXT3,
		SRGB_ALPHA_DXT5,
		SRGB_BP_UNORM,
		SRGB_PVRTC_2BPPV1,
		SRGB_PVRTC_4BPPV1,
		SRGB_ALPHA_PVRTC_2BPPV1,
		SRGB_ALPHA_PVRTC_4BPPV1,
		SRGB8_ALPHA8_ASTC_4x4,
		SRGB8_ALPHA8_ASTC_5x4,
		SRGB8_ALPHA8_ASTC_5x5,
		SRGB8_ALPHA8_ASTC_6x5,
		SRGB8_ALPHA8_ASTC_6x6,
		SRGB8_ALPHA8_ASTC_8x5,
		SRGB8_ALPHA8_ASTC_8x6,
		SRGB8_ALPHA8_ASTC_8x8,
		SRGB8_ALPHA8_ASTC_10x5,
		SRGB8_ALPHA8_ASTC_10x6,
		SRGB8_ALPHA8_ASTC_10x8,
		SRGB8_ALPHA8_ASTC_10x10,
		SRGB8_ALPHA8_ASTC_12x10,
		SRGB8_ALPHA8_ASTC_12x12,

		FORMAT_LAST = SRGB8_ALPHA8_ASTC_12x12
	};

	enum dxgiFormat
	{
		DXGI_FORMAT_UNKNOWN                      = 0,
		DXGI_FORMAT_R32G32B32A32_TYPELESS        = 1,
		DXGI_FORMAT_R32G32B32A32_FLOAT           = 2,
		DXGI_FORMAT_R32G32B32A32_UINT            = 3,
		DXGI_FORMAT_R32G32B32A32_SINT            = 4,
		DXGI_FORMAT_R32G32B32_TYPELESS           = 5,
		DXGI_FORMAT_R32G32B32_FLOAT              = 6,
		DXGI_FORMAT_R32G32B32_UINT               = 7,
		DXGI_FORMAT_R32G32B32_SINT               = 8,
		DXGI_FORMAT_R16G16B16A16_TYPELESS        = 9,
		DXGI_FORMAT_R16G16B16A16_FLOAT           = 10,
		DXGI_FORMAT_R16G16B16A16_UNORM           = 11,
		DXGI_FORMAT_R16G16B16A16_UINT            = 12,
		DXGI_FORMAT_R16G16B16A16_SNORM           = 13,
		DXGI_FORMAT_R16G16B16A16_SINT            = 14,
		DXGI_FORMAT_R32G32_TYPELESS              = 15,
		DXGI_FORMAT_R32G32_FLOAT                 = 16,
		DXGI_FORMAT_R32G32_UINT                  = 17,
		DXGI_FORMAT_R32G32_SINT                  = 18,
		DXGI_FORMAT_R32G8X24_TYPELESS            = 19,
		DXGI_FORMAT_D32_FLOAT_S8X24_UINT         = 20,
		DXGI_FORMAT_R32_FLOAT_X8X24_TYPELESS     = 21,
		DXGI_FORMAT_X32_TYPELESS_G8X24_UINT      = 22,
		DXGI_FORMAT_R10G10B10A2_TYPELESS         = 23,
		DXGI_FORMAT_R10G10B10A2_UNORM            = 24,
		DXGI_FORMAT_R10G10B10A2_UINT             = 25,
		DXGI_FORMAT_R11G11B10_FLOAT              = 26,
		DXGI_FORMAT_R8G8B8A8_TYPELESS            = 27,
		DXGI_FORMAT_R8G8B8A8_UNORM               = 28,
		DXGI_FORMAT_R8G8B8A8_UNORM_SRGB          = 29,
		DXGI_FORMAT_R8G8B8A8_UINT                = 30,
		DXGI_FORMAT_R8G8B8A8_SNORM               = 31,
		DXGI_FORMAT_R8G8B8A8_SINT                = 32,
		DXGI_FORMAT_R16G16_TYPELESS              = 33,
		DXGI_FORMAT_R16G16_FLOAT                 = 34,
		DXGI_FORMAT_R16G16_UNORM                 = 35,
		DXGI_FORMAT_R16G16_UINT                  = 36,
		DXGI_FORMAT_R16G16_SNORM                 = 37,
		DXGI_FORMAT_R16G16_SINT                  = 38,
		DXGI_FORMAT_R32_TYPELESS                 = 39,
		DXGI_FORMAT_D32_FLOAT                    = 40,
		DXGI_FORMAT_R32_FLOAT                    = 41,
		DXGI_FORMAT_R32_UINT                     = 42,
		DXGI_FORMAT_R32_SINT                     = 43,
		DXGI_FORMAT_R24G8_TYPELESS               = 44,
		DXGI_FORMAT_D24_UNORM_S8_UINT            = 45,
		DXGI_FORMAT_R24_UNORM_X8_TYPELESS        = 46,
		DXGI_FORMAT_X24_TYPELESS_G8_UINT         = 47,
		DXGI_FORMAT_R8G8_TYPELESS                = 48,
		DXGI_FORMAT_R8G8_UNORM                   = 49,
		DXGI_FORMAT_R8G8_UINT                    = 50,
		DXGI_FORMAT_R8G8_SNORM                   = 51,
		DXGI_FORMAT_R8G8_SINT                    = 52,
		DXGI_FORMAT_R16_TYPELESS                 = 53,
		DXGI_FORMAT_R16_FLOAT                    = 54,
		DXGI_FORMAT_D16_UNORM                    = 55,
		DXGI_FORMAT_R16_UNORM                    = 56,
		DXGI_FORMAT_R16_UINT                     = 57,
		DXGI_FORMAT_R16_SNORM                    = 58,
		DXGI_FORMAT_R16_SINT                     = 59,
		DXGI_FORMAT_R8_TYPELESS                  = 60,
		DXGI_FORMAT_R8_UNORM                     = 61,
		DXGI_FORMAT_R8_UINT                      = 62,
		DXGI_FORMAT_R8_SNORM                     = 63,
		DXGI_FORMAT_R8_SINT                      = 64,
		DXGI_FORMAT_A8_UNORM                     = 65,
		DXGI_FORMAT_R1_UNORM                     = 66,
		DXGI_FORMAT_R9G9B9E5_SHAREDEXP           = 67,
		DXGI_FORMAT_R8G8_B8G8_UNORM              = 68,
		DXGI_FORMAT_G8R8_G8B8_UNORM              = 69,
		DXGI_FORMAT_BC1_TYPELESS                 = 70,
		DXGI_FORMAT_BC1_UNORM                    = 71,
		DXGI_FORMAT_BC1_UNORM_SRGB               = 72,
		DXGI_FORMAT_BC2_TYPELESS                 = 73,
		DXGI_FORMAT_BC2_UNORM                    = 74,
		DXGI_FORMAT_BC2_UNORM_SRGB               = 75,
		DXGI_FORMAT_BC3_TYPELESS                 = 76,
		DXGI_FORMAT_BC3_UNORM                    = 77,
		DXGI_FORMAT_BC3_UNORM_SRGB               = 78,
		DXGI_FORMAT_BC4_TYPELESS                 = 79,
		DXGI_FORMAT_BC4_UNORM                    = 80,
		DXGI_FORMAT_BC4_SNORM                    = 81,
		DXGI_FORMAT_BC5_TYPELESS                 = 82,
		DXGI_FORMAT_BC5_UNORM                    = 83,
		DXGI_FORMAT_BC5_SNORM                    = 84,
		DXGI_FORMAT_B5G6R5_UNORM                 = 85,
		DXGI_FORMAT_B5G5R5A1_UNORM               = 86,
		DXGI_FORMAT_B8G8R8A8_UNORM               = 87,
		DXGI_FORMAT_B8G8R8X8_UNORM               = 88,
		DXGI_FORMAT_R10G10B10_XR_BIAS_A2_UNORM   = 89,
		DXGI_FORMAT_B8G8R8A8_TYPELESS            = 90,
		DXGI_FORMAT_B8G8R8A8_UNORM_SRGB          = 91,
		DXGI_FORMAT_B8G8R8X8_TYPELESS            = 92,
		DXGI_FORMAT_B8G8R8X8_UNORM_SRGB          = 93,
		DXGI_FORMAT_BC6H_TYPELESS                = 94,
		DXGI_FORMAT_BC6H_UF16                    = 95,
		DXGI_FORMAT_BC6H_SF16                    = 96,
		DXGI_FORMAT_BC7_TYPELESS                 = 97,
		DXGI_FORMAT_BC7_UNORM                    = 98,
		DXGI_FORMAT_BC7_UNORM_SRGB               = 99,
		DXGI_FORMAT_FORCE_UINT                   = 0xffffffffUL 
	};

	enum internalFormat
	{
		INTERNAL_NONE = 0,					//GL_NONE 

		// unorm formats
		INTERNAL_R8_UNORM = 0x8229,			//GL_R8
		INTERNAL_RG8_UNORM = 0x822B,		//GL_RG8
		INTERNAL_RGB8_UNORM = 0x8051,		//GL_RGB8
		INTERNAL_RGBA8_UNORM = 0x8058,		//GL_RGBA8

		INTERNAL_R16_UNORM = 0x822A,		//GL_R16
		INTERNAL_RG16_UNORM = 0x822C,		//GL_RG16
		INTERNAL_RGB16_UNORM = 0x8054,		//GL_RGB16
		INTERNAL_RGBA16_UNORM = 0x805B,		//GL_RGBA16

		// snorm formats
		INTERNAL_R8_SNORM = 0x8F94,			//GL_R8_SNORM
		INTERNAL_RG8_SNORM = 0x8F95,		//GL_RG8_SNORM
		INTERNAL_RGB8_SNORM = 0x8F96,		//GL_RGB8_SNORM
		INTERNAL_RGBA8_SNORM = 0x8F97,		//GL_RGBA8_SNORM

		INTERNAL_R16_SNORM = 0x8F98,		//GL_R16_SNORM
		INTERNAL_RG16_SNORM= 0x8F99,		//GL_RG16_SNORM
		INTERNAL_RGB16_SNORM= 0x8F9A,		//GL_RGB16_SNORM
		INTERNAL_RGBA16_SNORM = 0x8F9B,		//GL_RGBA16_SNORM

		// Unsigned integer formats
		INTERNAL_R8U = 0x8232,				//GL_R8UI
		INTERNAL_RG8U = 0x8238,				//GL_RG8UI
		INTERNAL_RGB8U = 0x8D7D,			//GL_RGB8UI
		INTERNAL_RGBA8U = 0x8D7C,			//GL_RGBA8UI

		INTERNAL_R16U = 0x8234,				//GL_R16UI
		INTERNAL_RG16U = 0x823A,			//GL_RG16UI
		INTERNAL_RGB16U = 0x8D77,			//GL_RGB16UI
		INTERNAL_RGBA16U = 0x8D76,			//GL_RGBA16UI

		INTERNAL_R32U = 0x8236,				//GL_R32UI
		INTERNAL_RG32U = 0x823C,			//GL_RG32UI
		INTERNAL_RGB32U = 0x8D71,			//GL_RGB32UI
		INTERNAL_RGBA32U = 0x8D70,			//GL_RGBA32UI

		// Signed integer formats
		INTERNAL_R8I = 0x8231,				//GL_R8I
		INTERNAL_RG8I = 0x8237,				//GL_RG8I
		INTERNAL_RGB8I = 0x8D8F,			//GL_RGB8I
		INTERNAL_RGBA8I = 0x8D8E,			//GL_RGBA8I

		INTERNAL_R16I = 0x8233,				//GL_R16I
		INTERNAL_RG16I = 0x8239,			//GL_RG16I
		INTERNAL_RGB16I = 0x8D89,			//GL_RGB16I
		INTERNAL_RGBA16I = 0x8D88,			//GL_RGBA16I

		INTERNAL_R32I = 0x8235,				//GL_R32I
		INTERNAL_RG32I = 0x823B,			//GL_RG32I
		INTERNAL_RGB32I = 0x8D83,			//GL_RGB32I
		INTERNAL_RGBA32I = 0x8D82,			//GL_RGBA32I

		// Floating formats
		INTERNAL_R16F = 0x822D,				//GL_R16F
		INTERNAL_RG16F = 0x822F,			//GL_RG16F
		INTERNAL_RGB16F = 0x881B,			//GL_RGB16F
		INTERNAL_RGBA16F = 0x881A,			//GL_RGBA16F

		INTERNAL_R32F = 0x822E,				//GL_R32F
		INTERNAL_RG32F = 0x8230,			//GL_RG32F
		INTERNAL_RGB32F = 0x8815,			//GL_RGB32F
		INTERNAL_RGBA32F = 0x8814,			//GL_RGBA32F

		// Packed formats
		INTERNAL_RGB9E5 = 0x8C3D,			//GL_RGB9_E5
		INTERNAL_RG11B10F = 0x8C3A,			//GL_R11F_G11F_B10F
		INTERNAL_RG3B2 = 0x2A10,			//GL_R3_G3_B2
		INTERNAL_R5G6B5 = 0x8D62,			//GL_RGB565
		INTERNAL_RGB5A1 = 0x8057,			//GL_RGB5_A1
		INTERNAL_RGBA4 = 0x8056,			//GL_RGBA4
		INTERNAL_RGB10A2 = 0x8059,			//GL_RGB10_A2UI

		// Depth formats
		INTERNAL_D16 = 0x81A5,				//GL_DEPTH_COMPONENT16
		INTERNAL_D24 = 0x81A6,				//GL_DEPTH_COMPONENT24
		INTERNAL_D24S8 = 0x88F0,			//GL_DEPTH24_STENCIL8
		INTERNAL_D32 = 0x81A7,				//GL_DEPTH_COMPONENT32
		INTERNAL_D32F = 0x8CAC,				//GL_DEPTH_COMPONENT32F
		INTERNAL_D32FS8X24 = 0x8CAD,		//GL_DEPTH32F_STENCIL8

		// Compressed formats
		INTERNAL_RGB_DXT1 = 0x83F0,						//GL_COMPRESSED_RGB_S3TC_DXT1_EXT
		INTERNAL_RGBA_DXT1 = 0x83F1,					//GL_COMPRESSED_RGBA_S3TC_DXT1_EXT
		INTERNAL_RGBA_DXT3 = 0x83F2,					//GL_COMPRESSED_RGBA_S3TC_DXT3_EXT
		INTERNAL_RGBA_DXT5 = 0x83F3,					//GL_COMPRESSED_RGBA_S3TC_DXT5_EXT
		INTERNAL_R_ATI1N_UNORM = 0x8DBB,				//GL_COMPRESSED_RED_RGTC1
		INTERNAL_R_ATI1N_SNORM = 0x8DBC,				//GL_COMPRESSED_SIGNED_RED_RGTC1
		INTERNAL_RG_ATI2N_UNORM = 0x8DBD,				//GL_COMPRESSED_RG_RGTC2
		INTERNAL_RG_ATI2N_SNORM = 0x8DBE,				//GL_COMPRESSED_SIGNED_RG_RGTC2
		INTERNAL_RGB_BP_UNSIGNED_FLOAT = 0x8E8F,		//GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT
		INTERNAL_RGB_BP_SIGNED_FLOAT = 0x8E8E,			//GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT
		INTERNAL_RGB_BP_UNORM = 0x8E8C,					//GL_COMPRESSED_RGBA_BPTC_UNORM
		INTERNAL_RGB_PVRTC_4BPPV1 = 0x8C00,				//GL_COMPRESSED_RGB_PVRTC_4BPPV1_IMG
		INTERNAL_RGB_PVRTC_2BPPV1 = 0x8C01,				//GL_COMPRESSED_RGB_PVRTC_2BPPV1_IMG
		INTERNAL_RGBA_PVRTC_4BPPV1 = 0x8C02,			//GL_COMPRESSED_RGBA_PVRTC_4BPPV1_IMG
		INTERNAL_RGBA_PVRTC_2BPPV1 = 0x8C03,			//GL_COMPRESSED_RGBA_PVRTC_2BPPV1_IMG
		INTERNAL_ATC_RGB = 0x8C92,						//GL_ATC_RGB_AMD
		INTERNAL_ATC_RGBA_EXPLICIT_ALPHA = 0x8C93,		//GL_ATC_RGBA_EXPLICIT_ALPHA_AMD
		INTERNAL_ATC_RGBA_INTERPOLATED_ALPHA = 0x87EE,	//GL_ATC_RGBA_INTERPOLATED_ALPHA_AMD
		INTERNAL_RGBA_ASTC_4x4 = 0x93B0,				//GL_COMPRESSED_RGBA_ASTC_4x4_KHR
		INTERNAL_RGBA_ASTC_5x4 = 0x93B1,				//GL_COMPRESSED_RGBA_ASTC_5x4_KHR
		INTERNAL_RGBA_ASTC_5x5 = 0x93B2,				//GL_COMPRESSED_RGBA_ASTC_5x5_KHR
		INTERNAL_RGBA_ASTC_6x5 = 0x93B3,				//GL_COMPRESSED_RGBA_ASTC_6x5_KHR
		INTERNAL_RGBA_ASTC_6x6 = 0x93B4,				//GL_COMPRESSED_RGBA_ASTC_6x6_KHR
		INTERNAL_RGBA_ASTC_8x5 = 0x93B5,				//GL_COMPRESSED_RGBA_ASTC_8x5_KHR
		INTERNAL_RGBA_ASTC_8x6 = 0x93B6,				//GL_COMPRESSED_RGBA_ASTC_8x6_KHR
		INTERNAL_RGBA_ASTC_8x8 = 0x93B7,				//GL_COMPRESSED_RGBA_ASTC_8x8_KHR
		INTERNAL_RGBA_ASTC_10x5 = 0x93B8,				//GL_COMPRESSED_RGBA_ASTC_10x5_KHR
		INTERNAL_RGBA_ASTC_10x6 = 0x93B9,				//GL_COMPRESSED_RGBA_ASTC_10x6_KHR
		INTERNAL_RGBA_ASTC_10x8 = 0x93BA,				//GL_COMPRESSED_RGBA_ASTC_10x8_KHR
		INTERNAL_RGBA_ASTC_10x10 = 0x93BB,				//GL_COMPRESSED_RGBA_ASTC_10x10_KHR
		INTERNAL_RGBA_ASTC_12x10 = 0x93BC,				//GL_COMPRESSED_RGBA_ASTC_12x10_KHR
		INTERNAL_RGBA_ASTC_12x12 = 0x93BD,				//GL_COMPRESSED_RGBA_ASTC_12x12_KHR

		// sRGB formats
		INTERNAL_SRGB8 = 0x8C41,						//GL_SRGB8
		INTERNAL_SRGB8_ALPHA8 = 0x8C43,					//GL_SRGB8_ALPHA8
		INTERNAL_SRGB_DXT1 = 0x8C4C,					//GL_COMPRESSED_SRGB_S3TC_DXT1_EXT
		INTERNAL_SRGB_ALPHA_DXT1 = 0x8C4C,				//GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_EXT
		INTERNAL_SRGB_ALPHA_DXT3 = 0x8C4E,				//GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3_EXT
		INTERNAL_SRGB_ALPHA_DXT5 = 0x8C4F,				//GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_EXT
		INTERNAL_SRGB_BP_UNORM = 0x8E8D,				//GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM
		INTERNAL_SRGB_PVRTC_2BPPV1 = 0x8A54,			//GL_COMPRESSED_SRGB_PVRTC_2BPPV1_EXT
		INTERNAL_SRGB_PVRTC_4BPPV1 = 0x8A55,			//GL_COMPRESSED_SRGB_PVRTC_4BPPV1_EXT
		INTERNAL_SRGB_ALPHA_PVRTC_2BPPV1 = 0x8A56,		//GL_COMPRESSED_SRGB_ALPHA_PVRTC_2BPPV1_EXT
		INTERNAL_SRGB_ALPHA_PVRTC_4BPPV1 = 0x8A57,		//GL_COMPRESSED_SRGB_ALPHA_PVRTC_4BPPV1_EXT
		INTERNAL_SRGB8_ALPHA8_ASTC_4x4 = 0x93D0,		//GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR
		INTERNAL_SRGB8_ALPHA8_ASTC_5x4 = 0x93D1,		//GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR
		INTERNAL_SRGB8_ALPHA8_ASTC_5x5 = 0x93D2,		//GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR
		INTERNAL_SRGB8_ALPHA8_ASTC_6x5 = 0x93D3,		//GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR
		INTERNAL_SRGB8_ALPHA8_ASTC_6x6 = 0x93D4,		//GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR
		INTERNAL_SRGB8_ALPHA8_ASTC_8x5 = 0x93D5,		//GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR
		INTERNAL_SRGB8_ALPHA8_ASTC_8x6 = 0x93D6,		//GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR
		INTERNAL_SRGB8_ALPHA8_ASTC_8x8 = 0x93D7,		//GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR
		INTERNAL_SRGB8_ALPHA8_ASTC_10x5 = 0x93D8,		//GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR
		INTERNAL_SRGB8_ALPHA8_ASTC_10x6 = 0x93D9,		//GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR
		INTERNAL_SRGB8_ALPHA8_ASTC_10x8 = 0x93DA,		//GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR
		INTERNAL_SRGB8_ALPHA8_ASTC_10x10 = 0x93DB,		//GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR
		INTERNAL_SRGB8_ALPHA8_ASTC_12x10 = 0x93DC,		//GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR
		INTERNAL_SRGB8_ALPHA8_ASTC_12x12 = 0x93DD,		//GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR

		INTERNAL_MAX
	};

	enum externalFormat
	{
		EXTERNAL_NONE = 0,					//GL_NONE
		EXTERNAL_RED = 0x1903,				//GL_RED
		EXTERNAL_RG = 0x8227,				//GL_RG
		EXTERNAL_RGB= 0x1907,				//GL_RGB
		EXTERNAL_BGR = 0x80E0,				//GL_BGR
		EXTERNAL_RGBA = 0x1908,				//GL_RGBA
		EXTERNAL_BGRA = 0x80E1,				//GL_BGRA
		EXTERNAL_RED_INTEGER = 0x8D94,		//GL_RED_INTEGER
		EXTERNAL_RG_INTEGER = 0x8228,		//GL_RG_INTEGER
		EXTERNAL_RGB_INTEGER = 0x8D98,		//GL_RGB_INTEGER
		EXTERNAL_BGR_INTEGER = 0x8D9A,		//GL_BGR_INTEGER
		EXTERNAL_RGBA_INTEGER = 0x8D99,		//GL_RGBA_INTEGER
		EXTERNAL_BGRA_INTEGER = 0x8D9B,		//GL_BGRA_INTEGER
		EXTERNAL_DEPTH = 0x1902,			//GL_DEPTH_COMPONENT
		EXTERNAL_DEPTH_STENCIL = 0x84F9,			//GL_DEPTH_STENCIL
		EXTERNAL_RGB_DXT1 = 0x83F0,					//GL_COMPRESSED_RGB_S3TC_DXT1_EXT
		EXTERNAL_RGBA_DXT1 = 0x83F1,				//GL_COMPRESSED_RGBA_S3TC_DXT1_EXT
		EXTERNAL_RGBA_DXT3 = 0x83F2,				//GL_COMPRESSED_RGBA_S3TC_DXT3_EXT
		EXTERNAL_RGBA_DXT5 = 0x83F3,				//GL_COMPRESSED_RGBA_S3TC_DXT5_EXT
		EXTERNAL_R_ATI1N_UNORM = 0x8DBB,			//GL_COMPRESSED_RED_RGTC1
		EXTERNAL_R_ATI1N_SNORM = 0x8DBC,			//GL_COMPRESSED_SIGNED_RED_RGTC1
		EXTERNAL_RG_ATI2N_UNORM = 0x8DBD,			//GL_COMPRESSED_RG_RGTC2
		EXTERNAL_RG_ATI2N_SNORM = 0x8DBE,			//GL_COMPRESSED_SIGNED_RG_RGTC2
		EXTERNAL_RGB_BP_UNSIGNED_FLOAT = 0x8E8F,	//GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT
		EXTERNAL_RGB_BP_SIGNED_FLOAT = 0x8E8E,		//GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT
		EXTERNAL_RGB_BP_UNORM = 0x8E8C,				//GL_COMPRESSED_RGBA_BPTC_UNORM
		EXTERNAL_RGB_PVRTC_4BPPV1 = 0x8C00,				//GL_COMPRESSED_RGB_PVRTC_4BPPV1_IMG
		EXTERNAL_RGB_PVRTC_2BPPV1 = 0x8C01,				//GL_COMPRESSED_RGB_PVRTC_2BPPV1_IMG
		EXTERNAL_RGBA_PVRTC_4BPPV1 = 0x8C02,			//GL_COMPRESSED_RGBA_PVRTC_4BPPV1_IMG
		EXTERNAL_RGBA_PVRTC_2BPPV1 = 0x8C03,			//GL_COMPRESSED_RGBA_PVRTC_2BPPV1_IMG
		EXTERNAL_ATC_RGB = 0x8C92,						//GL_ATC_RGB_AMD
		EXTERNAL_ATC_RGBA_EXPLICIT_ALPHA = 0x8C93,		//GL_ATC_RGBA_EXPLICIT_ALPHA_AMD
		EXTERNAL_ATC_RGBA_INTERPOLATED_ALPHA = 0x87EE,	//GL_ATC_RGBA_INTERPOLATED_ALPHA_AMD
		EXTERNAL_RGBA_ASTC_4x4 = 0x93B0,				//GL_COMPRESSED_RGBA_ASTC_4x4_KHR
		EXTERNAL_RGBA_ASTC_5x4 = 0x93B1,				//GL_COMPRESSED_RGBA_ASTC_5x4_KHR
		EXTERNAL_RGBA_ASTC_5x5 = 0x93B2,				//GL_COMPRESSED_RGBA_ASTC_5x5_KHR
		EXTERNAL_RGBA_ASTC_6x5 = 0x93B3,				//GL_COMPRESSED_RGBA_ASTC_6x5_KHR
		EXTERNAL_RGBA_ASTC_6x6 = 0x93B4,				//GL_COMPRESSED_RGBA_ASTC_6x6_KHR
		EXTERNAL_RGBA_ASTC_8x5 = 0x93B5,				//GL_COMPRESSED_RGBA_ASTC_8x5_KHR
		EXTERNAL_RGBA_ASTC_8x6 = 0x93B6,				//GL_COMPRESSED_RGBA_ASTC_8x6_KHR
		EXTERNAL_RGBA_ASTC_8x8 = 0x93B7,				//GL_COMPRESSED_RGBA_ASTC_8x8_KHR
		EXTERNAL_RGBA_ASTC_10x5 = 0x93B8,				//GL_COMPRESSED_RGBA_ASTC_10x5_KHR
		EXTERNAL_RGBA_ASTC_10x6 = 0x93B9,				//GL_COMPRESSED_RGBA_ASTC_10x6_KHR
		EXTERNAL_RGBA_ASTC_10x8 = 0x93BA,				//GL_COMPRESSED_RGBA_ASTC_10x8_KHR
		EXTERNAL_RGBA_ASTC_10x10 = 0x93BB,				//GL_COMPRESSED_RGBA_ASTC_10x10_KHR
		EXTERNAL_RGBA_ASTC_12x10 = 0x93BC,				//GL_COMPRESSED_RGBA_ASTC_12x10_KHR
		EXTERNAL_RGBA_ASTC_12x12 = 0x93BD				//GL_COMPRESSED_RGBA_ASTC_12x12_KHR
	};

	enum typeFormat
	{
		TYPE_NONE = 0,						//GL_NONE
		TYPE_I8 = 0x1400,					//GL_BYTE
		TYPE_U8 = 0x1401,					//GL_UNSIGNED_BYTE
		TYPE_I16 = 0x1402,					//GL_SHORT
		TYPE_U16 = 0x1403,					//GL_UNSIGNED_SHORT
		TYPE_I32 = 0x1404,					//GL_INT
		TYPE_U32 = 0x1405,					//GL_UNSIGNED_INT
		TYPE_F16 = 0x140B,					//GL_HALF_FLOAT
		TYPE_F32 = 0x1406,					//GL_FLOAT
		TYPE_UINT32_RGB9_E5 = 0x8C3E,		//GL_UNSIGNED_INT_5_9_9_9_REV
		TYPE_UINT32_RG11B10F = 0x8C3B,		//GL_UNSIGNED_INT_10F_11F_11F_REV
		TYPE_UINT8_RG3B2 = 0x8032,			//GL_UNSIGNED_BYTE_3_3_2
		TYPE_UINT8_RG3B2_REV = 0x8362,		//GL_UNSIGNED_BYTE_2_3_3_REV
		TYPE_UINT16_RGB5A1 = 0x8034,		//GL_UNSIGNED_SHORT_5_5_5_1
		TYPE_UINT16_RGB5A1_REV = 0x8366,	//GL_UNSIGNED_SHORT_1_5_5_5_REV
		TYPE_UINT16_R5G6B5 = 0x8363,		//GL_UNSIGNED_SHORT_5_6_5
		TYPE_UINT16_R5G6B5_REV = 0x8364,	//GL_UNSIGNED_SHORT_5_6_5_REV
		TYPE_UINT16_RGBA4 = 0x8033,			//GL_UNSIGNED_SHORT_4_4_4_4
		TYPE_UINT16_RGBA4_REV = 0x8365,		//GL_UNSIGNED_SHORT_4_4_4_4_REV
		TYPE_UINT32_RGB10A2 = 0x8036,		//GL_UNSIGNED_INT_10_10_10_2
		TYPE_UINT32_RGB10A2_REV = 0x8368	//GL_UNSIGNED_INT_2_10_10_10_REV
	};
}//namespace gli

#include "format.inl"
