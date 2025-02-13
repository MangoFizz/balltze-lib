// SPDX-License-Identifier: GPL-3.0-only
// This file is auto-generated. DO NOT EDIT!

#ifndef BALLTZE_API__HEK__TAG_DEFINITION__SHADER_MODEL_HPP
#define BALLTZE_API__HEK__TAG_DEFINITION__SHADER_MODEL_HPP

#include "../../memory.hpp"
#include "../tag_file.hpp"
#include "enum.hpp"
#include "bitfield.hpp"

#pragma pack(push)
#pragma pack(1)

#include "shader.hpp"

namespace Balltze::HEK::TagDefinitions { 
	enum ShaderModelDetailMask : std::uint16_t {
		SHADER_MODEL_DETAIL_MASK_NONE = 0,
		SHADER_MODEL_DETAIL_MASK_REFLECTION_MASK_INVERSE,
		SHADER_MODEL_DETAIL_MASK_REFLECTION_MASK,
		SHADER_MODEL_DETAIL_MASK_SELF_ILLUMINATION_MASK_INVERSE,
		SHADER_MODEL_DETAIL_MASK_SELF_ILLUMINATION_MASK,
		SHADER_MODEL_DETAIL_MASK_CHANGE_COLOR_MASK_INVERSE,
		SHADER_MODEL_DETAIL_MASK_CHANGE_COLOR_MASK,
		SHADER_MODEL_DETAIL_MASK_AUXILIARY_MASK_INVERSE,
		SHADER_MODEL_DETAIL_MASK_AUXILIARY_MASK,
	};

	struct ShaderModelFlags {
		std::uint16_t detail_after_reflection : 1;
		std::uint16_t two_sided : 1;
		std::uint16_t not_alpha_tested : 1;
		std::uint16_t alpha_blended_decal : 1;
		std::uint16_t true_atmospheric_fog : 1;
		std::uint16_t disable_two_sided_culling : 1;
		std::uint16_t use_xbox_multipurpose_channel_order : 1;
	};
	static_assert(sizeof(ShaderModelFlags) == sizeof(std::uint16_t));

	struct ShaderModelMoreFlags {
		std::uint16_t no_random_phase : 1;
	};
	static_assert(sizeof(ShaderModelMoreFlags) == sizeof(std::uint16_t));

	struct ShaderModel : public Shader {
		Memory::BigEndian<ShaderModelFlags> shader_model_flags;
		PADDING(2);
		PADDING(12);
		Fraction translucency;
		PADDING(16);
		Memory::BigEndian<FunctionNameNullable> change_color_source;
		PADDING(2);
		PADDING(28);
		Memory::BigEndian<ShaderModelMoreFlags> shader_model_more_flags;
		PADDING(2);
		Memory::BigEndian<FunctionNameNullable> color_source;
		Memory::BigEndian<WaveFunction> animation_function;
		Memory::BigEndian<float> animation_period;
		ColorRGB animation_color_lower_bound;
		ColorRGB animation_color_upper_bound;
		PADDING(12);
		Memory::BigEndian<float> map_u_scale;
		Memory::BigEndian<float> map_v_scale;
		TagDependency base_map;
		PADDING(8);
		TagDependency multipurpose_map;
		PADDING(8);
		Memory::BigEndian<ShaderDetailFunction> detail_function;
		Memory::BigEndian<ShaderModelDetailMask> detail_mask;
		Memory::BigEndian<float> detail_map_scale;
		TagDependency detail_map;
		Memory::BigEndian<float> detail_map_v_scale;
		PADDING(12);
		Memory::BigEndian<FunctionOut> u_animation_source;
		Memory::BigEndian<WaveFunction> u_animation_function;
		Memory::BigEndian<float> u_animation_period;
		Memory::BigEndian<float> u_animation_phase;
		Memory::BigEndian<float> u_animation_scale;
		Memory::BigEndian<FunctionOut> v_animation_source;
		Memory::BigEndian<WaveFunction> v_animation_function;
		Memory::BigEndian<float> v_animation_period;
		Memory::BigEndian<float> v_animation_phase;
		Memory::BigEndian<float> v_animation_scale;
		Memory::BigEndian<FunctionOut> rotation_animation_source;
		Memory::BigEndian<WaveFunction> rotation_animation_function;
		Memory::BigEndian<float> rotation_animation_period;
		Memory::BigEndian<float> rotation_animation_phase;
		Memory::BigEndian<float> rotation_animation_scale;
		Point2D rotation_animation_center;
		PADDING(8);
		Memory::BigEndian<float> reflection_falloff_distance;
		Memory::BigEndian<float> reflection_cutoff_distance;
		Fraction perpendicular_brightness;
		ColorRGB perpendicular_tint_color;
		Fraction parallel_brightness;
		ColorRGB parallel_tint_color;
		TagDependency reflection_cube_map;
		PADDING(16);
		Memory::BigEndian<float> unknown;
		PADDING(16);
		PADDING(32);
	};
	static_assert(sizeof(ShaderModel) == 440);

}

#pragma pack(pop)

#endif

