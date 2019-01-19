#include "wrapper.hpp"

#include "modules.hpp"

PyTypeObject * Attribute_class;
int Attribute_class_type;
int Attribute_class_location;
int Attribute_class_cols;
int Attribute_class_rows;
int Attribute_class_size;
int Attribute_class_shape;

PyTypeObject * Buffer_class;
int Buffer_class_mglo;
int Buffer_class_size;
int Buffer_class_extra;

PyTypeObject * ComputeShader_class;
int ComputeShader_class_mglo;
int ComputeShader_class_uniforms;
int ComputeShader_class_extra;

PyTypeObject * Context_class;
int Context_class_mglo;
int Context_class_version_code;
int Context_class_limits;
int Context_class_screen;
int Context_class_fbo;
int Context_class_extra;

PyTypeObject * Framebuffer_class;
int Framebuffer_class_mglo;
int Framebuffer_class_viewport;
int Framebuffer_class_size;
int Framebuffer_class_extra;

PyTypeObject * Limits_class;
int Limits_class_point_size_range;
int Limits_class_point_size_granularity;
int Limits_class_max_texture_size;
int Limits_class_max_viewport_dims;
int Limits_class_subpixel_bits;
int Limits_class_max_3d_texture_size;
int Limits_class_max_elements_vertices;
int Limits_class_max_elements_indices;
int Limits_class_smooth_point_size_range;
int Limits_class_smooth_point_size_granularity;
int Limits_class_smooth_line_width_range;
int Limits_class_smooth_line_width_granularity;
int Limits_class_aliased_line_width_range;
int Limits_class_max_cube_map_texture_size;
int Limits_class_point_fade_threshold_size;
int Limits_class_max_texture_lod_bias;
int Limits_class_max_draw_buffers;
int Limits_class_max_vertex_attribs;
int Limits_class_max_texture_image_units;
int Limits_class_max_fragment_uniform_components;
int Limits_class_max_vertex_uniform_components;
int Limits_class_max_varying_floats;
int Limits_class_max_combined_texture_image_units;
int Limits_class_max_vertex_texture_image_units;
int Limits_class_max_clip_distances;
int Limits_class_major_version;
int Limits_class_minor_version;
int Limits_class_max_array_texture_layers;
int Limits_class_min_program_texel_offset;
int Limits_class_max_program_texel_offset;
int Limits_class_max_varying_components;
int Limits_class_max_renderbuffer_size;
int Limits_class_max_color_attachments;
int Limits_class_max_samples;
int Limits_class_max_texture_buffer_size;
int Limits_class_max_rectangle_texture_size;
int Limits_class_max_vertex_uniform_blocks;
int Limits_class_max_geometry_uniform_blocks;
int Limits_class_max_fragment_uniform_blocks;
int Limits_class_max_combined_uniform_blocks;
int Limits_class_max_uniform_buffer_bindings;
int Limits_class_max_uniform_block_size;
int Limits_class_max_combined_vertex_uniform_components;
int Limits_class_max_combined_geometry_uniform_components;
int Limits_class_max_combined_fragment_uniform_components;
int Limits_class_uniform_buffer_offset_alignment;
int Limits_class_max_geometry_texture_image_units;
int Limits_class_max_geometry_uniform_components;
int Limits_class_max_geometry_output_vertices;
int Limits_class_max_geometry_total_output_components;
int Limits_class_max_vertex_output_components;
int Limits_class_max_geometry_input_components;
int Limits_class_max_geometry_output_components;
int Limits_class_max_fragment_input_components;
int Limits_class_context_profile_mask;
int Limits_class_max_server_wait_timeout;
int Limits_class_max_sample_mask_words;
int Limits_class_max_color_texture_samples;
int Limits_class_max_depth_texture_samples;
int Limits_class_max_integer_samples;
int Limits_class_max_dual_source_draw_buffers;
int Limits_class_max_vertex_uniform_vectors;
int Limits_class_max_varying_vectors;
int Limits_class_max_fragment_uniform_vectors;
int Limits_class_max_viewports;
int Limits_class_viewport_subpixel_bits;
int Limits_class_viewport_bounds_range;
int Limits_class_min_map_buffer_alignment;
int Limits_class_max_vertex_atomic_counter_buffers;
int Limits_class_max_tess_control_atomic_counter_buffers;
int Limits_class_max_tess_evaluation_atomic_counter_buffers;
int Limits_class_max_geometry_atomic_counter_buffers;
int Limits_class_max_fragment_atomic_counter_buffers;
int Limits_class_max_combined_atomic_counter_buffers;
int Limits_class_max_vertex_atomic_counters;
int Limits_class_max_tess_control_atomic_counters;
int Limits_class_max_tess_evaluation_atomic_counters;
int Limits_class_max_geometry_atomic_counters;
int Limits_class_max_fragment_atomic_counters;
int Limits_class_max_combined_atomic_counters;
int Limits_class_max_atomic_counter_buffer_size;
int Limits_class_max_atomic_counter_buffer_bindings;
int Limits_class_max_image_units;
int Limits_class_max_combined_image_units_and_fragment_outputs;
int Limits_class_max_image_samples;
int Limits_class_max_vertex_image_uniforms;
int Limits_class_max_tess_control_image_uniforms;
int Limits_class_max_tess_evaluation_image_uniforms;
int Limits_class_max_geometry_image_uniforms;
int Limits_class_max_fragment_image_uniforms;
int Limits_class_max_combined_image_uniforms;
int Limits_class_max_element_index;
int Limits_class_max_compute_uniform_blocks;
int Limits_class_max_compute_texture_image_units;
int Limits_class_max_compute_image_uniforms;
int Limits_class_max_compute_shared_memory_size;
int Limits_class_max_compute_uniform_components;
int Limits_class_max_compute_atomic_counter_buffers;
int Limits_class_max_compute_atomic_counters;
int Limits_class_max_combined_compute_uniform_components;
int Limits_class_max_compute_work_group_invocations;
int Limits_class_max_debug_message_length;
int Limits_class_max_debug_logged_messages;
int Limits_class_max_debug_group_stack_depth;
int Limits_class_max_label_length;
int Limits_class_max_uniform_locations;
int Limits_class_max_framebuffer_width;
int Limits_class_max_framebuffer_height;
int Limits_class_max_framebuffer_layers;
int Limits_class_max_framebuffer_samples;
int Limits_class_max_num_active_variables;
int Limits_class_max_num_compatible_subroutines;
int Limits_class_max_vertex_shader_storage_blocks;
int Limits_class_max_geometry_shader_storage_blocks;
int Limits_class_max_tess_control_shader_storage_blocks;
int Limits_class_max_tess_evaluation_shader_storage_blocks;
int Limits_class_max_fragment_shader_storage_blocks;
int Limits_class_max_compute_shader_storage_blocks;
int Limits_class_max_combined_shader_storage_blocks;
int Limits_class_max_shader_storage_buffer_bindings;
int Limits_class_max_shader_storage_block_size;
int Limits_class_max_combined_shader_output_resources;
int Limits_class_max_vertex_attrib_relative_offset;
int Limits_class_max_vertex_attrib_bindings;
int Limits_class_max_vertex_attrib_stride;
int Limits_class_max_cull_distances;
int Limits_class_max_combined_clip_and_cull_distances;
int Limits_class_max_texture_max_anisotropy;

PyTypeObject * Program_class;
int Program_class_mglo;
int Program_class_attributes;
int Program_class_uniforms;
int Program_class_extra;

PyTypeObject * Query_class;
int Query_class_mglo;
int Query_class_elapsed;
int Query_class_primitives;
int Query_class_samples;
int Query_class_extra;

PyTypeObject * Renderbuffer_class;
int Renderbuffer_class_mglo;
int Renderbuffer_class_size;
int Renderbuffer_class_extra;

PyTypeObject * Sampler_class;
int Sampler_class_mglo;
int Sampler_class_swizzle;
int Sampler_class_filter;
int Sampler_class_texture;
int Sampler_class_extra;

PyTypeObject * Scope_class;
int Scope_class_mglo;
int Scope_class_extra;

PyTypeObject * Texture_class;
int Texture_class_mglo;
int Texture_class_level;
int Texture_class_layer;
int Texture_class_size;
int Texture_class_extra;

PyTypeObject * TextureArray_class;
int TextureArray_class_mglo;
int TextureArray_class_extra;

PyTypeObject * TextureCube_class;
int TextureCube_class_mglo;
int TextureCube_class_extra;

PyTypeObject * TextureCubeArray_class;
int TextureCubeArray_class_mglo;
int TextureCubeArray_class_extra;

PyTypeObject * Uniform_class;
int Uniform_class_type;
int Uniform_class_location;
int Uniform_class_cols;
int Uniform_class_rows;
int Uniform_class_size;
int Uniform_class_shape;

PyTypeObject * VertexArray_class;
int VertexArray_class_mglo;
int VertexArray_class_ibo;
int VertexArray_class_program;
int VertexArray_class_mode;
int VertexArray_class_vertices;
int VertexArray_class_extra;

void init_wrappers() {
    int Attribute_slots = 0;
    Attribute_class = detect_class(moderngl, "Attribute", Attribute_slots);
    Attribute_class_type = slot_offset(Attribute_class, "_Attribute__type", Attribute_slots);
    Attribute_class_location = slot_offset(Attribute_class, "location", Attribute_slots);
    Attribute_class_cols = slot_offset(Attribute_class, "cols", Attribute_slots);
    Attribute_class_rows = slot_offset(Attribute_class, "rows", Attribute_slots);
    Attribute_class_size = slot_offset(Attribute_class, "size", Attribute_slots);
    Attribute_class_shape = slot_offset(Attribute_class, "shape", Attribute_slots);
    assert_slots_len(Attribute_class, Attribute_slots);

    int Buffer_slots = 0;
    Buffer_class = detect_class(moderngl, "Buffer", Buffer_slots);
    Buffer_class_mglo = slot_offset(Buffer_class, "_Buffer__mglo", Buffer_slots);
    Buffer_class_size = slot_offset(Buffer_class, "size", Buffer_slots);
    Buffer_class_extra = slot_offset(Buffer_class, "extra", Buffer_slots);
    assert_slots_len(Buffer_class, Buffer_slots);

    int ComputeShader_slots = 0;
    ComputeShader_class = detect_class(moderngl, "ComputeShader", ComputeShader_slots);
    ComputeShader_class_mglo = slot_offset(ComputeShader_class, "_ComputeShader__mglo", ComputeShader_slots);
    ComputeShader_class_uniforms = slot_offset(ComputeShader_class, "uniforms", ComputeShader_slots);
    ComputeShader_class_extra = slot_offset(ComputeShader_class, "extra", ComputeShader_slots);
    assert_slots_len(ComputeShader_class, ComputeShader_slots);

    int Context_slots = 0;
    Context_class = detect_class(moderngl, "Context", Context_slots);
    Context_class_mglo = slot_offset(Context_class, "_Context__mglo", Context_slots);
    Context_class_version_code = slot_offset(Context_class, "version_code", Context_slots);
    Context_class_limits = slot_offset(Context_class, "limits", Context_slots);
    Context_class_screen = slot_offset(Context_class, "screen", Context_slots);
    Context_class_fbo = slot_offset(Context_class, "fbo", Context_slots);
    Context_class_extra = slot_offset(Context_class, "extra", Context_slots);
    assert_slots_len(Context_class, Context_slots);

    int Framebuffer_slots = 0;
    Framebuffer_class = detect_class(moderngl, "Framebuffer", Framebuffer_slots);
    Framebuffer_class_mglo = slot_offset(Framebuffer_class, "_Framebuffer__mglo", Framebuffer_slots);
    Framebuffer_class_viewport = slot_offset(Framebuffer_class, "_Framebuffer__viewport", Framebuffer_slots);
    Framebuffer_class_size = slot_offset(Framebuffer_class, "size", Framebuffer_slots);
    Framebuffer_class_extra = slot_offset(Framebuffer_class, "extra", Framebuffer_slots);
    assert_slots_len(Framebuffer_class, Framebuffer_slots);

    int Limits_slots = 0;
    Limits_class = detect_class(moderngl, "Limits", Limits_slots);
    Limits_class_point_size_range = slot_offset(Limits_class, "point_size_range", Limits_slots);
    Limits_class_point_size_granularity = slot_offset(Limits_class, "point_size_granularity", Limits_slots);
    Limits_class_max_texture_size = slot_offset(Limits_class, "max_texture_size", Limits_slots);
    Limits_class_max_viewport_dims = slot_offset(Limits_class, "max_viewport_dims", Limits_slots);
    Limits_class_subpixel_bits = slot_offset(Limits_class, "subpixel_bits", Limits_slots);
    Limits_class_max_3d_texture_size = slot_offset(Limits_class, "max_3d_texture_size", Limits_slots);
    Limits_class_max_elements_vertices = slot_offset(Limits_class, "max_elements_vertices", Limits_slots);
    Limits_class_max_elements_indices = slot_offset(Limits_class, "max_elements_indices", Limits_slots);
    Limits_class_smooth_point_size_range = slot_offset(Limits_class, "smooth_point_size_range", Limits_slots);
    Limits_class_smooth_point_size_granularity = slot_offset(Limits_class, "smooth_point_size_granularity", Limits_slots);
    Limits_class_smooth_line_width_range = slot_offset(Limits_class, "smooth_line_width_range", Limits_slots);
    Limits_class_smooth_line_width_granularity = slot_offset(Limits_class, "smooth_line_width_granularity", Limits_slots);
    Limits_class_aliased_line_width_range = slot_offset(Limits_class, "aliased_line_width_range", Limits_slots);
    Limits_class_max_cube_map_texture_size = slot_offset(Limits_class, "max_cube_map_texture_size", Limits_slots);
    Limits_class_point_fade_threshold_size = slot_offset(Limits_class, "point_fade_threshold_size", Limits_slots);
    Limits_class_max_texture_lod_bias = slot_offset(Limits_class, "max_texture_lod_bias", Limits_slots);
    Limits_class_max_draw_buffers = slot_offset(Limits_class, "max_draw_buffers", Limits_slots);
    Limits_class_max_vertex_attribs = slot_offset(Limits_class, "max_vertex_attribs", Limits_slots);
    Limits_class_max_texture_image_units = slot_offset(Limits_class, "max_texture_image_units", Limits_slots);
    Limits_class_max_fragment_uniform_components = slot_offset(Limits_class, "max_fragment_uniform_components", Limits_slots);
    Limits_class_max_vertex_uniform_components = slot_offset(Limits_class, "max_vertex_uniform_components", Limits_slots);
    Limits_class_max_varying_floats = slot_offset(Limits_class, "max_varying_floats", Limits_slots);
    Limits_class_max_combined_texture_image_units = slot_offset(Limits_class, "max_combined_texture_image_units", Limits_slots);
    Limits_class_max_vertex_texture_image_units = slot_offset(Limits_class, "max_vertex_texture_image_units", Limits_slots);
    Limits_class_max_clip_distances = slot_offset(Limits_class, "max_clip_distances", Limits_slots);
    Limits_class_major_version = slot_offset(Limits_class, "major_version", Limits_slots);
    Limits_class_minor_version = slot_offset(Limits_class, "minor_version", Limits_slots);
    Limits_class_max_array_texture_layers = slot_offset(Limits_class, "max_array_texture_layers", Limits_slots);
    Limits_class_min_program_texel_offset = slot_offset(Limits_class, "min_program_texel_offset", Limits_slots);
    Limits_class_max_program_texel_offset = slot_offset(Limits_class, "max_program_texel_offset", Limits_slots);
    Limits_class_max_varying_components = slot_offset(Limits_class, "max_varying_components", Limits_slots);
    Limits_class_max_renderbuffer_size = slot_offset(Limits_class, "max_renderbuffer_size", Limits_slots);
    Limits_class_max_color_attachments = slot_offset(Limits_class, "max_color_attachments", Limits_slots);
    Limits_class_max_samples = slot_offset(Limits_class, "max_samples", Limits_slots);
    Limits_class_max_texture_buffer_size = slot_offset(Limits_class, "max_texture_buffer_size", Limits_slots);
    Limits_class_max_rectangle_texture_size = slot_offset(Limits_class, "max_rectangle_texture_size", Limits_slots);
    Limits_class_max_vertex_uniform_blocks = slot_offset(Limits_class, "max_vertex_uniform_blocks", Limits_slots);
    Limits_class_max_geometry_uniform_blocks = slot_offset(Limits_class, "max_geometry_uniform_blocks", Limits_slots);
    Limits_class_max_fragment_uniform_blocks = slot_offset(Limits_class, "max_fragment_uniform_blocks", Limits_slots);
    Limits_class_max_combined_uniform_blocks = slot_offset(Limits_class, "max_combined_uniform_blocks", Limits_slots);
    Limits_class_max_uniform_buffer_bindings = slot_offset(Limits_class, "max_uniform_buffer_bindings", Limits_slots);
    Limits_class_max_uniform_block_size = slot_offset(Limits_class, "max_uniform_block_size", Limits_slots);
    Limits_class_max_combined_vertex_uniform_components = slot_offset(Limits_class, "max_combined_vertex_uniform_components", Limits_slots);
    Limits_class_max_combined_geometry_uniform_components = slot_offset(Limits_class, "max_combined_geometry_uniform_components", Limits_slots);
    Limits_class_max_combined_fragment_uniform_components = slot_offset(Limits_class, "max_combined_fragment_uniform_components", Limits_slots);
    Limits_class_uniform_buffer_offset_alignment = slot_offset(Limits_class, "uniform_buffer_offset_alignment", Limits_slots);
    Limits_class_max_geometry_texture_image_units = slot_offset(Limits_class, "max_geometry_texture_image_units", Limits_slots);
    Limits_class_max_geometry_uniform_components = slot_offset(Limits_class, "max_geometry_uniform_components", Limits_slots);
    Limits_class_max_geometry_output_vertices = slot_offset(Limits_class, "max_geometry_output_vertices", Limits_slots);
    Limits_class_max_geometry_total_output_components = slot_offset(Limits_class, "max_geometry_total_output_components", Limits_slots);
    Limits_class_max_vertex_output_components = slot_offset(Limits_class, "max_vertex_output_components", Limits_slots);
    Limits_class_max_geometry_input_components = slot_offset(Limits_class, "max_geometry_input_components", Limits_slots);
    Limits_class_max_geometry_output_components = slot_offset(Limits_class, "max_geometry_output_components", Limits_slots);
    Limits_class_max_fragment_input_components = slot_offset(Limits_class, "max_fragment_input_components", Limits_slots);
    Limits_class_context_profile_mask = slot_offset(Limits_class, "context_profile_mask", Limits_slots);
    Limits_class_max_server_wait_timeout = slot_offset(Limits_class, "max_server_wait_timeout", Limits_slots);
    Limits_class_max_sample_mask_words = slot_offset(Limits_class, "max_sample_mask_words", Limits_slots);
    Limits_class_max_color_texture_samples = slot_offset(Limits_class, "max_color_texture_samples", Limits_slots);
    Limits_class_max_depth_texture_samples = slot_offset(Limits_class, "max_depth_texture_samples", Limits_slots);
    Limits_class_max_integer_samples = slot_offset(Limits_class, "max_integer_samples", Limits_slots);
    Limits_class_max_dual_source_draw_buffers = slot_offset(Limits_class, "max_dual_source_draw_buffers", Limits_slots);
    Limits_class_max_vertex_uniform_vectors = slot_offset(Limits_class, "max_vertex_uniform_vectors", Limits_slots);
    Limits_class_max_varying_vectors = slot_offset(Limits_class, "max_varying_vectors", Limits_slots);
    Limits_class_max_fragment_uniform_vectors = slot_offset(Limits_class, "max_fragment_uniform_vectors", Limits_slots);
    Limits_class_max_viewports = slot_offset(Limits_class, "max_viewports", Limits_slots);
    Limits_class_viewport_subpixel_bits = slot_offset(Limits_class, "viewport_subpixel_bits", Limits_slots);
    Limits_class_viewport_bounds_range = slot_offset(Limits_class, "viewport_bounds_range", Limits_slots);
    Limits_class_min_map_buffer_alignment = slot_offset(Limits_class, "min_map_buffer_alignment", Limits_slots);
    Limits_class_max_vertex_atomic_counter_buffers = slot_offset(Limits_class, "max_vertex_atomic_counter_buffers", Limits_slots);
    Limits_class_max_tess_control_atomic_counter_buffers = slot_offset(Limits_class, "max_tess_control_atomic_counter_buffers", Limits_slots);
    Limits_class_max_tess_evaluation_atomic_counter_buffers = slot_offset(Limits_class, "max_tess_evaluation_atomic_counter_buffers", Limits_slots);
    Limits_class_max_geometry_atomic_counter_buffers = slot_offset(Limits_class, "max_geometry_atomic_counter_buffers", Limits_slots);
    Limits_class_max_fragment_atomic_counter_buffers = slot_offset(Limits_class, "max_fragment_atomic_counter_buffers", Limits_slots);
    Limits_class_max_combined_atomic_counter_buffers = slot_offset(Limits_class, "max_combined_atomic_counter_buffers", Limits_slots);
    Limits_class_max_vertex_atomic_counters = slot_offset(Limits_class, "max_vertex_atomic_counters", Limits_slots);
    Limits_class_max_tess_control_atomic_counters = slot_offset(Limits_class, "max_tess_control_atomic_counters", Limits_slots);
    Limits_class_max_tess_evaluation_atomic_counters = slot_offset(Limits_class, "max_tess_evaluation_atomic_counters", Limits_slots);
    Limits_class_max_geometry_atomic_counters = slot_offset(Limits_class, "max_geometry_atomic_counters", Limits_slots);
    Limits_class_max_fragment_atomic_counters = slot_offset(Limits_class, "max_fragment_atomic_counters", Limits_slots);
    Limits_class_max_combined_atomic_counters = slot_offset(Limits_class, "max_combined_atomic_counters", Limits_slots);
    Limits_class_max_atomic_counter_buffer_size = slot_offset(Limits_class, "max_atomic_counter_buffer_size", Limits_slots);
    Limits_class_max_atomic_counter_buffer_bindings = slot_offset(Limits_class, "max_atomic_counter_buffer_bindings", Limits_slots);
    Limits_class_max_image_units = slot_offset(Limits_class, "max_image_units", Limits_slots);
    Limits_class_max_combined_image_units_and_fragment_outputs = slot_offset(Limits_class, "max_combined_image_units_and_fragment_outputs", Limits_slots);
    Limits_class_max_image_samples = slot_offset(Limits_class, "max_image_samples", Limits_slots);
    Limits_class_max_vertex_image_uniforms = slot_offset(Limits_class, "max_vertex_image_uniforms", Limits_slots);
    Limits_class_max_tess_control_image_uniforms = slot_offset(Limits_class, "max_tess_control_image_uniforms", Limits_slots);
    Limits_class_max_tess_evaluation_image_uniforms = slot_offset(Limits_class, "max_tess_evaluation_image_uniforms", Limits_slots);
    Limits_class_max_geometry_image_uniforms = slot_offset(Limits_class, "max_geometry_image_uniforms", Limits_slots);
    Limits_class_max_fragment_image_uniforms = slot_offset(Limits_class, "max_fragment_image_uniforms", Limits_slots);
    Limits_class_max_combined_image_uniforms = slot_offset(Limits_class, "max_combined_image_uniforms", Limits_slots);
    Limits_class_max_element_index = slot_offset(Limits_class, "max_element_index", Limits_slots);
    Limits_class_max_compute_uniform_blocks = slot_offset(Limits_class, "max_compute_uniform_blocks", Limits_slots);
    Limits_class_max_compute_texture_image_units = slot_offset(Limits_class, "max_compute_texture_image_units", Limits_slots);
    Limits_class_max_compute_image_uniforms = slot_offset(Limits_class, "max_compute_image_uniforms", Limits_slots);
    Limits_class_max_compute_shared_memory_size = slot_offset(Limits_class, "max_compute_shared_memory_size", Limits_slots);
    Limits_class_max_compute_uniform_components = slot_offset(Limits_class, "max_compute_uniform_components", Limits_slots);
    Limits_class_max_compute_atomic_counter_buffers = slot_offset(Limits_class, "max_compute_atomic_counter_buffers", Limits_slots);
    Limits_class_max_compute_atomic_counters = slot_offset(Limits_class, "max_compute_atomic_counters", Limits_slots);
    Limits_class_max_combined_compute_uniform_components = slot_offset(Limits_class, "max_combined_compute_uniform_components", Limits_slots);
    Limits_class_max_compute_work_group_invocations = slot_offset(Limits_class, "max_compute_work_group_invocations", Limits_slots);
    Limits_class_max_debug_message_length = slot_offset(Limits_class, "max_debug_message_length", Limits_slots);
    Limits_class_max_debug_logged_messages = slot_offset(Limits_class, "max_debug_logged_messages", Limits_slots);
    Limits_class_max_debug_group_stack_depth = slot_offset(Limits_class, "max_debug_group_stack_depth", Limits_slots);
    Limits_class_max_label_length = slot_offset(Limits_class, "max_label_length", Limits_slots);
    Limits_class_max_uniform_locations = slot_offset(Limits_class, "max_uniform_locations", Limits_slots);
    Limits_class_max_framebuffer_width = slot_offset(Limits_class, "max_framebuffer_width", Limits_slots);
    Limits_class_max_framebuffer_height = slot_offset(Limits_class, "max_framebuffer_height", Limits_slots);
    Limits_class_max_framebuffer_layers = slot_offset(Limits_class, "max_framebuffer_layers", Limits_slots);
    Limits_class_max_framebuffer_samples = slot_offset(Limits_class, "max_framebuffer_samples", Limits_slots);
    Limits_class_max_num_active_variables = slot_offset(Limits_class, "max_num_active_variables", Limits_slots);
    Limits_class_max_num_compatible_subroutines = slot_offset(Limits_class, "max_num_compatible_subroutines", Limits_slots);
    Limits_class_max_vertex_shader_storage_blocks = slot_offset(Limits_class, "max_vertex_shader_storage_blocks", Limits_slots);
    Limits_class_max_geometry_shader_storage_blocks = slot_offset(Limits_class, "max_geometry_shader_storage_blocks", Limits_slots);
    Limits_class_max_tess_control_shader_storage_blocks = slot_offset(Limits_class, "max_tess_control_shader_storage_blocks", Limits_slots);
    Limits_class_max_tess_evaluation_shader_storage_blocks = slot_offset(Limits_class, "max_tess_evaluation_shader_storage_blocks", Limits_slots);
    Limits_class_max_fragment_shader_storage_blocks = slot_offset(Limits_class, "max_fragment_shader_storage_blocks", Limits_slots);
    Limits_class_max_compute_shader_storage_blocks = slot_offset(Limits_class, "max_compute_shader_storage_blocks", Limits_slots);
    Limits_class_max_combined_shader_storage_blocks = slot_offset(Limits_class, "max_combined_shader_storage_blocks", Limits_slots);
    Limits_class_max_shader_storage_buffer_bindings = slot_offset(Limits_class, "max_shader_storage_buffer_bindings", Limits_slots);
    Limits_class_max_shader_storage_block_size = slot_offset(Limits_class, "max_shader_storage_block_size", Limits_slots);
    Limits_class_max_combined_shader_output_resources = slot_offset(Limits_class, "max_combined_shader_output_resources", Limits_slots);
    Limits_class_max_vertex_attrib_relative_offset = slot_offset(Limits_class, "max_vertex_attrib_relative_offset", Limits_slots);
    Limits_class_max_vertex_attrib_bindings = slot_offset(Limits_class, "max_vertex_attrib_bindings", Limits_slots);
    Limits_class_max_vertex_attrib_stride = slot_offset(Limits_class, "max_vertex_attrib_stride", Limits_slots);
    Limits_class_max_cull_distances = slot_offset(Limits_class, "max_cull_distances", Limits_slots);
    Limits_class_max_combined_clip_and_cull_distances = slot_offset(Limits_class, "max_combined_clip_and_cull_distances", Limits_slots);
    Limits_class_max_texture_max_anisotropy = slot_offset(Limits_class, "max_texture_max_anisotropy", Limits_slots);
    assert_slots_len(Limits_class, Limits_slots);

    int Program_slots = 0;
    Program_class = detect_class(moderngl, "Program", Program_slots);
    Program_class_mglo = slot_offset(Program_class, "_Program__mglo", Program_slots);
    Program_class_attributes = slot_offset(Program_class, "attributes", Program_slots);
    Program_class_uniforms = slot_offset(Program_class, "uniforms", Program_slots);
    Program_class_extra = slot_offset(Program_class, "extra", Program_slots);
    assert_slots_len(Program_class, Program_slots);

    int Query_slots = 0;
    Query_class = detect_class(moderngl, "Query", Query_slots);
    Query_class_mglo = slot_offset(Query_class, "_Query__mglo", Query_slots);
    Query_class_elapsed = slot_offset(Query_class, "elapsed", Query_slots);
    Query_class_primitives = slot_offset(Query_class, "primitives", Query_slots);
    Query_class_samples = slot_offset(Query_class, "samples", Query_slots);
    Query_class_extra = slot_offset(Query_class, "extra", Query_slots);
    assert_slots_len(Query_class, Query_slots);

    int Renderbuffer_slots = 0;
    Renderbuffer_class = detect_class(moderngl, "Renderbuffer", Renderbuffer_slots);
    Renderbuffer_class_mglo = slot_offset(Renderbuffer_class, "_Renderbuffer__mglo", Renderbuffer_slots);
    Renderbuffer_class_size = slot_offset(Renderbuffer_class, "size", Renderbuffer_slots);
    Renderbuffer_class_extra = slot_offset(Renderbuffer_class, "extra", Renderbuffer_slots);
    assert_slots_len(Renderbuffer_class, Renderbuffer_slots);

    int Sampler_slots = 0;
    Sampler_class = detect_class(moderngl, "Sampler", Sampler_slots);
    Sampler_class_mglo = slot_offset(Sampler_class, "_Sampler__mglo", Sampler_slots);
    Sampler_class_swizzle = slot_offset(Sampler_class, "_Sampler__swizzle", Sampler_slots);
    Sampler_class_filter = slot_offset(Sampler_class, "_Sampler__filter", Sampler_slots);
    Sampler_class_texture = slot_offset(Sampler_class, "texture", Sampler_slots);
    Sampler_class_extra = slot_offset(Sampler_class, "extra", Sampler_slots);
    assert_slots_len(Sampler_class, Sampler_slots);

    int Scope_slots = 0;
    Scope_class = detect_class(moderngl, "Scope", Scope_slots);
    Scope_class_mglo = slot_offset(Scope_class, "_Scope__mglo", Scope_slots);
    Scope_class_extra = slot_offset(Scope_class, "extra", Scope_slots);
    assert_slots_len(Scope_class, Scope_slots);

    int Texture_slots = 0;
    Texture_class = detect_class(moderngl, "Texture", Texture_slots);
    Texture_class_mglo = slot_offset(Texture_class, "_Texture__mglo", Texture_slots);
    Texture_class_level = slot_offset(Texture_class, "_Texture__level", Texture_slots);
    Texture_class_layer = slot_offset(Texture_class, "_Texture__layer", Texture_slots);
    Texture_class_size = slot_offset(Texture_class, "size", Texture_slots);
    Texture_class_extra = slot_offset(Texture_class, "extra", Texture_slots);
    assert_slots_len(Texture_class, Texture_slots);

    int TextureArray_slots = 0;
    TextureArray_class = detect_class(moderngl, "TextureArray", TextureArray_slots);
    TextureArray_class_mglo = slot_offset(TextureArray_class, "_TextureArray__mglo", TextureArray_slots);
    TextureArray_class_extra = slot_offset(TextureArray_class, "extra", TextureArray_slots);
    assert_slots_len(TextureArray_class, TextureArray_slots);

    int TextureCube_slots = 0;
    TextureCube_class = detect_class(moderngl, "TextureCube", TextureCube_slots);
    TextureCube_class_mglo = slot_offset(TextureCube_class, "_TextureCube__mglo", TextureCube_slots);
    TextureCube_class_extra = slot_offset(TextureCube_class, "extra", TextureCube_slots);
    assert_slots_len(TextureCube_class, TextureCube_slots);

    int TextureCubeArray_slots = 0;
    TextureCubeArray_class = detect_class(moderngl, "TextureCubeArray", TextureCubeArray_slots);
    TextureCubeArray_class_mglo = slot_offset(TextureCubeArray_class, "_TextureCubeArray__mglo", TextureCubeArray_slots);
    TextureCubeArray_class_extra = slot_offset(TextureCubeArray_class, "extra", TextureCubeArray_slots);
    assert_slots_len(TextureCubeArray_class, TextureCubeArray_slots);

    int Uniform_slots = 0;
    Uniform_class = detect_class(moderngl, "Uniform", Uniform_slots);
    Uniform_class_type = slot_offset(Uniform_class, "_Uniform__type", Uniform_slots);
    Uniform_class_location = slot_offset(Uniform_class, "location", Uniform_slots);
    Uniform_class_cols = slot_offset(Uniform_class, "cols", Uniform_slots);
    Uniform_class_rows = slot_offset(Uniform_class, "rows", Uniform_slots);
    Uniform_class_size = slot_offset(Uniform_class, "size", Uniform_slots);
    Uniform_class_shape = slot_offset(Uniform_class, "shape", Uniform_slots);
    assert_slots_len(Uniform_class, Uniform_slots);

    int VertexArray_slots = 0;
    VertexArray_class = detect_class(moderngl, "VertexArray", VertexArray_slots);
    VertexArray_class_mglo = slot_offset(VertexArray_class, "_VertexArray__mglo", VertexArray_slots);
    VertexArray_class_ibo = slot_offset(VertexArray_class, "_VertexArray__ibo", VertexArray_slots);
    VertexArray_class_program = slot_offset(VertexArray_class, "program", VertexArray_slots);
    VertexArray_class_mode = slot_offset(VertexArray_class, "mode", VertexArray_slots);
    VertexArray_class_vertices = slot_offset(VertexArray_class, "vertices", VertexArray_slots);
    VertexArray_class_extra = slot_offset(VertexArray_class, "extra", VertexArray_slots);
    assert_slots_len(VertexArray_class, VertexArray_slots);
}
