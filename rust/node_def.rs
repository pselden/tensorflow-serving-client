// This file is generated by rust-protobuf 2.10.1. Do not edit
// @generated

// https://github.com/rust-lang/rust-clippy/issues/702
#![allow(unknown_lints)]
#![allow(clippy::all)]

#![cfg_attr(rustfmt, rustfmt_skip)]

#![allow(box_pointers)]
#![allow(dead_code)]
#![allow(missing_docs)]
#![allow(non_camel_case_types)]
#![allow(non_snake_case)]
#![allow(non_upper_case_globals)]
#![allow(trivial_casts)]
#![allow(unsafe_code)]
#![allow(unused_imports)]
#![allow(unused_results)]
//! Generated file from `tensorflow/core/framework/node_def.proto`

use protobuf::Message as Message_imported_for_functions;
use protobuf::ProtobufEnum as ProtobufEnum_imported_for_functions;

/// Generated files are compatible only with the same version
/// of protobuf runtime.
// const _PROTOBUF_VERSION_CHECK: () = ::protobuf::VERSION_2_10_1;

#[derive(PartialEq,Clone,Default)]
pub struct NodeDef {
    // message fields
    pub name: ::std::string::String,
    pub op: ::std::string::String,
    pub input: ::protobuf::RepeatedField<::std::string::String>,
    pub device: ::std::string::String,
    pub attr: ::std::collections::HashMap<::std::string::String, super::attr_value::AttrValue>,
    pub experimental_debug_info: ::protobuf::SingularPtrField<NodeDef_ExperimentalDebugInfo>,
    // special fields
    pub unknown_fields: ::protobuf::UnknownFields,
    pub cached_size: ::protobuf::CachedSize,
}

impl<'a> ::std::default::Default for &'a NodeDef {
    fn default() -> &'a NodeDef {
        <NodeDef as ::protobuf::Message>::default_instance()
    }
}

impl NodeDef {
    pub fn new() -> NodeDef {
        ::std::default::Default::default()
    }

    // string name = 1;


    pub fn get_name(&self) -> &str {
        &self.name
    }
    pub fn clear_name(&mut self) {
        self.name.clear();
    }

    // Param is passed by value, moved
    pub fn set_name(&mut self, v: ::std::string::String) {
        self.name = v;
    }

    // Mutable pointer to the field.
    // If field is not initialized, it is initialized with default value first.
    pub fn mut_name(&mut self) -> &mut ::std::string::String {
        &mut self.name
    }

    // Take field
    pub fn take_name(&mut self) -> ::std::string::String {
        ::std::mem::replace(&mut self.name, ::std::string::String::new())
    }

    // string op = 2;


    pub fn get_op(&self) -> &str {
        &self.op
    }
    pub fn clear_op(&mut self) {
        self.op.clear();
    }

    // Param is passed by value, moved
    pub fn set_op(&mut self, v: ::std::string::String) {
        self.op = v;
    }

    // Mutable pointer to the field.
    // If field is not initialized, it is initialized with default value first.
    pub fn mut_op(&mut self) -> &mut ::std::string::String {
        &mut self.op
    }

    // Take field
    pub fn take_op(&mut self) -> ::std::string::String {
        ::std::mem::replace(&mut self.op, ::std::string::String::new())
    }

    // repeated string input = 3;


    pub fn get_input(&self) -> &[::std::string::String] {
        &self.input
    }
    pub fn clear_input(&mut self) {
        self.input.clear();
    }

    // Param is passed by value, moved
    pub fn set_input(&mut self, v: ::protobuf::RepeatedField<::std::string::String>) {
        self.input = v;
    }

    // Mutable pointer to the field.
    pub fn mut_input(&mut self) -> &mut ::protobuf::RepeatedField<::std::string::String> {
        &mut self.input
    }

    // Take field
    pub fn take_input(&mut self) -> ::protobuf::RepeatedField<::std::string::String> {
        ::std::mem::replace(&mut self.input, ::protobuf::RepeatedField::new())
    }

    // string device = 4;


    pub fn get_device(&self) -> &str {
        &self.device
    }
    pub fn clear_device(&mut self) {
        self.device.clear();
    }

    // Param is passed by value, moved
    pub fn set_device(&mut self, v: ::std::string::String) {
        self.device = v;
    }

    // Mutable pointer to the field.
    // If field is not initialized, it is initialized with default value first.
    pub fn mut_device(&mut self) -> &mut ::std::string::String {
        &mut self.device
    }

    // Take field
    pub fn take_device(&mut self) -> ::std::string::String {
        ::std::mem::replace(&mut self.device, ::std::string::String::new())
    }

    // repeated .tensorflow.NodeDef.AttrEntry attr = 5;


    pub fn get_attr(&self) -> &::std::collections::HashMap<::std::string::String, super::attr_value::AttrValue> {
        &self.attr
    }
    pub fn clear_attr(&mut self) {
        self.attr.clear();
    }

    // Param is passed by value, moved
    pub fn set_attr(&mut self, v: ::std::collections::HashMap<::std::string::String, super::attr_value::AttrValue>) {
        self.attr = v;
    }

    // Mutable pointer to the field.
    pub fn mut_attr(&mut self) -> &mut ::std::collections::HashMap<::std::string::String, super::attr_value::AttrValue> {
        &mut self.attr
    }

    // Take field
    pub fn take_attr(&mut self) -> ::std::collections::HashMap<::std::string::String, super::attr_value::AttrValue> {
        ::std::mem::replace(&mut self.attr, ::std::collections::HashMap::new())
    }

    // .tensorflow.NodeDef.ExperimentalDebugInfo experimental_debug_info = 6;


    pub fn get_experimental_debug_info(&self) -> &NodeDef_ExperimentalDebugInfo {
        self.experimental_debug_info.as_ref().unwrap_or_else(|| NodeDef_ExperimentalDebugInfo::default_instance())
    }
    pub fn clear_experimental_debug_info(&mut self) {
        self.experimental_debug_info.clear();
    }

    pub fn has_experimental_debug_info(&self) -> bool {
        self.experimental_debug_info.is_some()
    }

    // Param is passed by value, moved
    pub fn set_experimental_debug_info(&mut self, v: NodeDef_ExperimentalDebugInfo) {
        self.experimental_debug_info = ::protobuf::SingularPtrField::some(v);
    }

    // Mutable pointer to the field.
    // If field is not initialized, it is initialized with default value first.
    pub fn mut_experimental_debug_info(&mut self) -> &mut NodeDef_ExperimentalDebugInfo {
        if self.experimental_debug_info.is_none() {
            self.experimental_debug_info.set_default();
        }
        self.experimental_debug_info.as_mut().unwrap()
    }

    // Take field
    pub fn take_experimental_debug_info(&mut self) -> NodeDef_ExperimentalDebugInfo {
        self.experimental_debug_info.take().unwrap_or_else(|| NodeDef_ExperimentalDebugInfo::new())
    }
}

impl ::protobuf::Message for NodeDef {
    fn is_initialized(&self) -> bool {
        for v in &self.experimental_debug_info {
            if !v.is_initialized() {
                return false;
            }
        };
        true
    }

    fn merge_from(&mut self, is: &mut ::protobuf::CodedInputStream<'_>) -> ::protobuf::ProtobufResult<()> {
        while !is.eof()? {
            let (field_number, wire_type) = is.read_tag_unpack()?;
            match field_number {
                1 => {
                    ::protobuf::rt::read_singular_proto3_string_into(wire_type, is, &mut self.name)?;
                },
                2 => {
                    ::protobuf::rt::read_singular_proto3_string_into(wire_type, is, &mut self.op)?;
                },
                3 => {
                    ::protobuf::rt::read_repeated_string_into(wire_type, is, &mut self.input)?;
                },
                4 => {
                    ::protobuf::rt::read_singular_proto3_string_into(wire_type, is, &mut self.device)?;
                },
                5 => {
                    ::protobuf::rt::read_map_into::<::protobuf::types::ProtobufTypeString, ::protobuf::types::ProtobufTypeMessage<super::attr_value::AttrValue>>(wire_type, is, &mut self.attr)?;
                },
                6 => {
                    ::protobuf::rt::read_singular_message_into(wire_type, is, &mut self.experimental_debug_info)?;
                },
                _ => {
                    ::protobuf::rt::read_unknown_or_skip_group(field_number, wire_type, is, self.mut_unknown_fields())?;
                },
            };
        }
        ::std::result::Result::Ok(())
    }

    // Compute sizes of nested messages
    #[allow(unused_variables)]
    fn compute_size(&self) -> u32 {
        let mut my_size = 0;
        if !self.name.is_empty() {
            my_size += ::protobuf::rt::string_size(1, &self.name);
        }
        if !self.op.is_empty() {
            my_size += ::protobuf::rt::string_size(2, &self.op);
        }
        for value in &self.input {
            my_size += ::protobuf::rt::string_size(3, &value);
        };
        if !self.device.is_empty() {
            my_size += ::protobuf::rt::string_size(4, &self.device);
        }
        my_size += ::protobuf::rt::compute_map_size::<::protobuf::types::ProtobufTypeString, ::protobuf::types::ProtobufTypeMessage<super::attr_value::AttrValue>>(5, &self.attr);
        if let Some(ref v) = self.experimental_debug_info.as_ref() {
            let len = v.compute_size();
            my_size += 1 + ::protobuf::rt::compute_raw_varint32_size(len) + len;
        }
        my_size += ::protobuf::rt::unknown_fields_size(self.get_unknown_fields());
        self.cached_size.set(my_size);
        my_size
    }

    fn write_to_with_cached_sizes(&self, os: &mut ::protobuf::CodedOutputStream<'_>) -> ::protobuf::ProtobufResult<()> {
        if !self.name.is_empty() {
            os.write_string(1, &self.name)?;
        }
        if !self.op.is_empty() {
            os.write_string(2, &self.op)?;
        }
        for v in &self.input {
            os.write_string(3, &v)?;
        };
        if !self.device.is_empty() {
            os.write_string(4, &self.device)?;
        }
        ::protobuf::rt::write_map_with_cached_sizes::<::protobuf::types::ProtobufTypeString, ::protobuf::types::ProtobufTypeMessage<super::attr_value::AttrValue>>(5, &self.attr, os)?;
        if let Some(ref v) = self.experimental_debug_info.as_ref() {
            os.write_tag(6, ::protobuf::wire_format::WireTypeLengthDelimited)?;
            os.write_raw_varint32(v.get_cached_size())?;
            v.write_to_with_cached_sizes(os)?;
        }
        os.write_unknown_fields(self.get_unknown_fields())?;
        ::std::result::Result::Ok(())
    }

    fn get_cached_size(&self) -> u32 {
        self.cached_size.get()
    }

    fn get_unknown_fields(&self) -> &::protobuf::UnknownFields {
        &self.unknown_fields
    }

    fn mut_unknown_fields(&mut self) -> &mut ::protobuf::UnknownFields {
        &mut self.unknown_fields
    }

    fn as_any(&self) -> &dyn (::std::any::Any) {
        self as &dyn (::std::any::Any)
    }
    fn as_any_mut(&mut self) -> &mut dyn (::std::any::Any) {
        self as &mut dyn (::std::any::Any)
    }
    fn into_any(self: Box<Self>) -> ::std::boxed::Box<dyn (::std::any::Any)> {
        self
    }

    fn descriptor(&self) -> &'static ::protobuf::reflect::MessageDescriptor {
        Self::descriptor_static()
    }

    fn new() -> NodeDef {
        NodeDef::new()
    }

    fn descriptor_static() -> &'static ::protobuf::reflect::MessageDescriptor {
        static mut descriptor: ::protobuf::lazy::Lazy<::protobuf::reflect::MessageDescriptor> = ::protobuf::lazy::Lazy {
            lock: ::protobuf::lazy::ONCE_INIT,
            ptr: 0 as *const ::protobuf::reflect::MessageDescriptor,
        };
        unsafe {
            descriptor.get(|| {
                let mut fields = ::std::vec::Vec::new();
                fields.push(::protobuf::reflect::accessor::make_simple_field_accessor::<_, ::protobuf::types::ProtobufTypeString>(
                    "name",
                    |m: &NodeDef| { &m.name },
                    |m: &mut NodeDef| { &mut m.name },
                ));
                fields.push(::protobuf::reflect::accessor::make_simple_field_accessor::<_, ::protobuf::types::ProtobufTypeString>(
                    "op",
                    |m: &NodeDef| { &m.op },
                    |m: &mut NodeDef| { &mut m.op },
                ));
                fields.push(::protobuf::reflect::accessor::make_repeated_field_accessor::<_, ::protobuf::types::ProtobufTypeString>(
                    "input",
                    |m: &NodeDef| { &m.input },
                    |m: &mut NodeDef| { &mut m.input },
                ));
                fields.push(::protobuf::reflect::accessor::make_simple_field_accessor::<_, ::protobuf::types::ProtobufTypeString>(
                    "device",
                    |m: &NodeDef| { &m.device },
                    |m: &mut NodeDef| { &mut m.device },
                ));
                fields.push(::protobuf::reflect::accessor::make_map_accessor::<_, ::protobuf::types::ProtobufTypeString, ::protobuf::types::ProtobufTypeMessage<super::attr_value::AttrValue>>(
                    "attr",
                    |m: &NodeDef| { &m.attr },
                    |m: &mut NodeDef| { &mut m.attr },
                ));
                fields.push(::protobuf::reflect::accessor::make_singular_ptr_field_accessor::<_, ::protobuf::types::ProtobufTypeMessage<NodeDef_ExperimentalDebugInfo>>(
                    "experimental_debug_info",
                    |m: &NodeDef| { &m.experimental_debug_info },
                    |m: &mut NodeDef| { &mut m.experimental_debug_info },
                ));
                ::protobuf::reflect::MessageDescriptor::new::<NodeDef>(
                    "NodeDef",
                    fields,
                    file_descriptor_proto()
                )
            })
        }
    }

    fn default_instance() -> &'static NodeDef {
        static mut instance: ::protobuf::lazy::Lazy<NodeDef> = ::protobuf::lazy::Lazy {
            lock: ::protobuf::lazy::ONCE_INIT,
            ptr: 0 as *const NodeDef,
        };
        unsafe {
            instance.get(NodeDef::new)
        }
    }
}

impl ::protobuf::Clear for NodeDef {
    fn clear(&mut self) {
        self.name.clear();
        self.op.clear();
        self.input.clear();
        self.device.clear();
        self.attr.clear();
        self.experimental_debug_info.clear();
        self.unknown_fields.clear();
    }
}

impl ::std::fmt::Debug for NodeDef {
    fn fmt(&self, f: &mut ::std::fmt::Formatter<'_>) -> ::std::fmt::Result {
        ::protobuf::text_format::fmt(self, f)
    }
}

impl ::protobuf::reflect::ProtobufValue for NodeDef {
    fn as_ref(&self) -> ::protobuf::reflect::ProtobufValueRef {
        ::protobuf::reflect::ProtobufValueRef::Message(self)
    }
}

#[derive(PartialEq,Clone,Default)]
pub struct NodeDef_ExperimentalDebugInfo {
    // message fields
    pub original_node_names: ::protobuf::RepeatedField<::std::string::String>,
    pub original_func_names: ::protobuf::RepeatedField<::std::string::String>,
    // special fields
    pub unknown_fields: ::protobuf::UnknownFields,
    pub cached_size: ::protobuf::CachedSize,
}

impl<'a> ::std::default::Default for &'a NodeDef_ExperimentalDebugInfo {
    fn default() -> &'a NodeDef_ExperimentalDebugInfo {
        <NodeDef_ExperimentalDebugInfo as ::protobuf::Message>::default_instance()
    }
}

impl NodeDef_ExperimentalDebugInfo {
    pub fn new() -> NodeDef_ExperimentalDebugInfo {
        ::std::default::Default::default()
    }

    // repeated string original_node_names = 1;


    pub fn get_original_node_names(&self) -> &[::std::string::String] {
        &self.original_node_names
    }
    pub fn clear_original_node_names(&mut self) {
        self.original_node_names.clear();
    }

    // Param is passed by value, moved
    pub fn set_original_node_names(&mut self, v: ::protobuf::RepeatedField<::std::string::String>) {
        self.original_node_names = v;
    }

    // Mutable pointer to the field.
    pub fn mut_original_node_names(&mut self) -> &mut ::protobuf::RepeatedField<::std::string::String> {
        &mut self.original_node_names
    }

    // Take field
    pub fn take_original_node_names(&mut self) -> ::protobuf::RepeatedField<::std::string::String> {
        ::std::mem::replace(&mut self.original_node_names, ::protobuf::RepeatedField::new())
    }

    // repeated string original_func_names = 2;


    pub fn get_original_func_names(&self) -> &[::std::string::String] {
        &self.original_func_names
    }
    pub fn clear_original_func_names(&mut self) {
        self.original_func_names.clear();
    }

    // Param is passed by value, moved
    pub fn set_original_func_names(&mut self, v: ::protobuf::RepeatedField<::std::string::String>) {
        self.original_func_names = v;
    }

    // Mutable pointer to the field.
    pub fn mut_original_func_names(&mut self) -> &mut ::protobuf::RepeatedField<::std::string::String> {
        &mut self.original_func_names
    }

    // Take field
    pub fn take_original_func_names(&mut self) -> ::protobuf::RepeatedField<::std::string::String> {
        ::std::mem::replace(&mut self.original_func_names, ::protobuf::RepeatedField::new())
    }
}

impl ::protobuf::Message for NodeDef_ExperimentalDebugInfo {
    fn is_initialized(&self) -> bool {
        true
    }

    fn merge_from(&mut self, is: &mut ::protobuf::CodedInputStream<'_>) -> ::protobuf::ProtobufResult<()> {
        while !is.eof()? {
            let (field_number, wire_type) = is.read_tag_unpack()?;
            match field_number {
                1 => {
                    ::protobuf::rt::read_repeated_string_into(wire_type, is, &mut self.original_node_names)?;
                },
                2 => {
                    ::protobuf::rt::read_repeated_string_into(wire_type, is, &mut self.original_func_names)?;
                },
                _ => {
                    ::protobuf::rt::read_unknown_or_skip_group(field_number, wire_type, is, self.mut_unknown_fields())?;
                },
            };
        }
        ::std::result::Result::Ok(())
    }

    // Compute sizes of nested messages
    #[allow(unused_variables)]
    fn compute_size(&self) -> u32 {
        let mut my_size = 0;
        for value in &self.original_node_names {
            my_size += ::protobuf::rt::string_size(1, &value);
        };
        for value in &self.original_func_names {
            my_size += ::protobuf::rt::string_size(2, &value);
        };
        my_size += ::protobuf::rt::unknown_fields_size(self.get_unknown_fields());
        self.cached_size.set(my_size);
        my_size
    }

    fn write_to_with_cached_sizes(&self, os: &mut ::protobuf::CodedOutputStream<'_>) -> ::protobuf::ProtobufResult<()> {
        for v in &self.original_node_names {
            os.write_string(1, &v)?;
        };
        for v in &self.original_func_names {
            os.write_string(2, &v)?;
        };
        os.write_unknown_fields(self.get_unknown_fields())?;
        ::std::result::Result::Ok(())
    }

    fn get_cached_size(&self) -> u32 {
        self.cached_size.get()
    }

    fn get_unknown_fields(&self) -> &::protobuf::UnknownFields {
        &self.unknown_fields
    }

    fn mut_unknown_fields(&mut self) -> &mut ::protobuf::UnknownFields {
        &mut self.unknown_fields
    }

    fn as_any(&self) -> &dyn (::std::any::Any) {
        self as &dyn (::std::any::Any)
    }
    fn as_any_mut(&mut self) -> &mut dyn (::std::any::Any) {
        self as &mut dyn (::std::any::Any)
    }
    fn into_any(self: Box<Self>) -> ::std::boxed::Box<dyn (::std::any::Any)> {
        self
    }

    fn descriptor(&self) -> &'static ::protobuf::reflect::MessageDescriptor {
        Self::descriptor_static()
    }

    fn new() -> NodeDef_ExperimentalDebugInfo {
        NodeDef_ExperimentalDebugInfo::new()
    }

    fn descriptor_static() -> &'static ::protobuf::reflect::MessageDescriptor {
        static mut descriptor: ::protobuf::lazy::Lazy<::protobuf::reflect::MessageDescriptor> = ::protobuf::lazy::Lazy {
            lock: ::protobuf::lazy::ONCE_INIT,
            ptr: 0 as *const ::protobuf::reflect::MessageDescriptor,
        };
        unsafe {
            descriptor.get(|| {
                let mut fields = ::std::vec::Vec::new();
                fields.push(::protobuf::reflect::accessor::make_repeated_field_accessor::<_, ::protobuf::types::ProtobufTypeString>(
                    "original_node_names",
                    |m: &NodeDef_ExperimentalDebugInfo| { &m.original_node_names },
                    |m: &mut NodeDef_ExperimentalDebugInfo| { &mut m.original_node_names },
                ));
                fields.push(::protobuf::reflect::accessor::make_repeated_field_accessor::<_, ::protobuf::types::ProtobufTypeString>(
                    "original_func_names",
                    |m: &NodeDef_ExperimentalDebugInfo| { &m.original_func_names },
                    |m: &mut NodeDef_ExperimentalDebugInfo| { &mut m.original_func_names },
                ));
                ::protobuf::reflect::MessageDescriptor::new::<NodeDef_ExperimentalDebugInfo>(
                    "NodeDef_ExperimentalDebugInfo",
                    fields,
                    file_descriptor_proto()
                )
            })
        }
    }

    fn default_instance() -> &'static NodeDef_ExperimentalDebugInfo {
        static mut instance: ::protobuf::lazy::Lazy<NodeDef_ExperimentalDebugInfo> = ::protobuf::lazy::Lazy {
            lock: ::protobuf::lazy::ONCE_INIT,
            ptr: 0 as *const NodeDef_ExperimentalDebugInfo,
        };
        unsafe {
            instance.get(NodeDef_ExperimentalDebugInfo::new)
        }
    }
}

impl ::protobuf::Clear for NodeDef_ExperimentalDebugInfo {
    fn clear(&mut self) {
        self.original_node_names.clear();
        self.original_func_names.clear();
        self.unknown_fields.clear();
    }
}

impl ::std::fmt::Debug for NodeDef_ExperimentalDebugInfo {
    fn fmt(&self, f: &mut ::std::fmt::Formatter<'_>) -> ::std::fmt::Result {
        ::protobuf::text_format::fmt(self, f)
    }
}

impl ::protobuf::reflect::ProtobufValue for NodeDef_ExperimentalDebugInfo {
    fn as_ref(&self) -> ::protobuf::reflect::ProtobufValueRef {
        ::protobuf::reflect::ProtobufValueRef::Message(self)
    }
}

static file_descriptor_proto_data: &'static [u8] = b"\
    \n(tensorflow/core/framework/node_def.proto\x12\ntensorflow\x1a*tensorfl\
    ow/core/framework/attr_value.proto\"\xba\x03\n\x07NodeDef\x12\x12\n\x04n\
    ame\x18\x01\x20\x01(\tR\x04name\x12\x0e\n\x02op\x18\x02\x20\x01(\tR\x02o\
    p\x12\x14\n\x05input\x18\x03\x20\x03(\tR\x05input\x12\x16\n\x06device\
    \x18\x04\x20\x01(\tR\x06device\x121\n\x04attr\x18\x05\x20\x03(\x0b2\x1d.\
    tensorflow.NodeDef.AttrEntryR\x04attr\x12a\n\x17experimental_debug_info\
    \x18\x06\x20\x01(\x0b2).tensorflow.NodeDef.ExperimentalDebugInfoR\x15exp\
    erimentalDebugInfo\x1aN\n\tAttrEntry\x12\x10\n\x03key\x18\x01\x20\x01(\t\
    R\x03key\x12+\n\x05value\x18\x02\x20\x01(\x0b2\x15.tensorflow.AttrValueR\
    \x05value:\x028\x01\x1aw\n\x15ExperimentalDebugInfo\x12.\n\x13original_n\
    ode_names\x18\x01\x20\x03(\tR\x11originalNodeNames\x12.\n\x13original_fu\
    nc_names\x18\x02\x20\x03(\tR\x11originalFuncNamesBi\n\x18org.tensorflow.\
    frameworkB\tNodeProtoP\x01Z=github.com/tensorflow/tensorflow/tensorflow/\
    go/core/framework\xf8\x01\x01J\xe7\x1c\n\x06\x12\x04\0\0U\x02\n\x08\n\
    \x01\x0c\x12\x03\0\0\x12\n\x08\n\x01\x02\x12\x03\x02\0\x13\n\x08\n\x01\
    \x08\x12\x03\x03\0\x1f\n\t\n\x02\x08\x1f\x12\x03\x03\0\x1f\n\x08\n\x01\
    \x08\x12\x03\x04\0*\n\t\n\x02\x08\x08\x12\x03\x04\0*\n\x08\n\x01\x08\x12\
    \x03\x05\0\"\n\t\n\x02\x08\n\x12\x03\x05\0\"\n\x08\n\x01\x08\x12\x03\x06\
    \01\n\t\n\x02\x08\x01\x12\x03\x06\01\n\x08\n\x01\x08\x12\x03\x07\0T\n\t\
    \n\x02\x08\x0b\x12\x03\x07\0T\n\t\n\x02\x03\0\x12\x03\x08\04\n\n\n\x02\
    \x04\0\x12\x04\n\0U\x01\n\n\n\x03\x04\0\x01\x12\x03\n\x08\x0f\n\xbf\x01\
    \n\x04\x04\0\x02\0\x12\x03\x0e\x02\x12\x1a\xb1\x01\x20The\x20name\x20giv\
    en\x20to\x20this\x20operator.\x20Used\x20for\x20naming\x20inputs,\n\x20l\
    ogging,\x20visualization,\x20etc.\x20\x20Unique\x20within\x20a\x20single\
    \x20GraphDef.\n\x20Must\x20match\x20the\x20regexp\x20\"[A-Za-z0-9.][A-Za\
    -z0-9_>./]*\".\n\n\x0c\n\x05\x04\0\x02\0\x05\x12\x03\x0e\x02\x08\n\x0c\n\
    \x05\x04\0\x02\0\x01\x12\x03\x0e\t\r\n\x0c\n\x05\x04\0\x02\0\x03\x12\x03\
    \x0e\x10\x11\n\x92\x01\n\x04\x04\0\x02\x01\x12\x03\x12\x02\x10\x1a\x84\
    \x01\x20The\x20operation\x20name.\x20\x20There\x20may\x20be\x20custom\
    \x20parameters\x20in\x20attrs.\n\x20Op\x20names\x20starting\x20with\x20a\
    n\x20underscore\x20are\x20reserved\x20for\x20internal\x20use.\n\n\x0c\n\
    \x05\x04\0\x02\x01\x05\x12\x03\x12\x02\x08\n\x0c\n\x05\x04\0\x02\x01\x01\
    \x12\x03\x12\t\x0b\n\x0c\n\x05\x04\0\x02\x01\x03\x12\x03\x12\x0e\x0f\n\
    \xa7\x02\n\x04\x04\0\x02\x02\x12\x03\x19\x02\x1c\x1a\x99\x02\x20Each\x20\
    input\x20is\x20\"node:src_output\"\x20with\x20\"node\"\x20being\x20a\x20\
    string\x20name\x20and\n\x20\"src_output\"\x20indicating\x20which\x20outp\
    ut\x20tensor\x20to\x20use\x20from\x20\"node\".\x20If\n\x20\"src_output\"\
    \x20is\x200\x20the\x20\":0\"\x20suffix\x20can\x20be\x20omitted.\x20\x20R\
    egular\x20inputs\n\x20may\x20optionally\x20be\x20followed\x20by\x20contr\
    ol\x20inputs\x20that\x20have\x20the\x20format\n\x20\"^node\".\n\n\x0c\n\
    \x05\x04\0\x02\x02\x04\x12\x03\x19\x02\n\n\x0c\n\x05\x04\0\x02\x02\x05\
    \x12\x03\x19\x0b\x11\n\x0c\n\x05\x04\0\x02\x02\x01\x12\x03\x19\x12\x17\n\
    \x0c\n\x05\x04\0\x02\x02\x03\x12\x03\x19\x1a\x1b\n\xa1\x06\n\x04\x04\0\
    \x02\x03\x12\x03/\x02\x14\x1a\x93\x06\x20A\x20(possibly\x20partial)\x20s\
    pecification\x20for\x20the\x20device\x20on\x20which\x20this\n\x20node\
    \x20should\x20be\x20placed.\n\x20The\x20expected\x20syntax\x20for\x20thi\
    s\x20string\x20is\x20as\x20follows:\n\n\x20DEVICE_SPEC\x20::=\x20PARTIAL\
    _SPEC\n\n\x20PARTIAL_SPEC\x20::=\x20(\"/\"\x20CONSTRAINT)\x20*\n\x20CONS\
    TRAINT\x20::=\x20(\"job:\"\x20JOB_NAME)\n\x20\x20\x20\x20\x20\x20\x20\
    \x20\x20\x20\x20\x20\x20\x20|\x20(\"replica:\"\x20[1-9][0-9]*)\n\x20\x20\
    \x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20|\x20(\"task:\"\x20[1-9]\
    [0-9]*)\n\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20|\x20(\
    \"device:\"\x20[A-Za-z]*\x20\":\"\x20([1-9][0-9]*\x20|\x20\"*\")\x20)\n\
    \n\x20Valid\x20values\x20for\x20this\x20string\x20include:\n\x20*\x20\"/\
    job:worker/replica:0/task:1/device:GPU:3\"\x20\x20(full\x20specification\
    )\n\x20*\x20\"/job:worker/device:GPU:3\"\x20\x20\x20\x20\x20\x20\x20\x20\
    \x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20(partial\x20specification)\n\
    \x20*\x20\"\"\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\
    \x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\
    \x20\x20\x20\x20(no\x20specification)\n\n\x20If\x20the\x20constraints\
    \x20do\x20not\x20resolve\x20to\x20a\x20single\x20device\x20(or\x20if\x20\
    this\n\x20field\x20is\x20empty\x20or\x20not\x20present),\x20the\x20runti\
    me\x20will\x20attempt\x20to\n\x20choose\x20a\x20device\x20automatically.\
    \n\n\x0c\n\x05\x04\0\x02\x03\x05\x12\x03/\x02\x08\n\x0c\n\x05\x04\0\x02\
    \x03\x01\x12\x03/\t\x0f\n\x0c\n\x05\x04\0\x02\x03\x03\x12\x03/\x12\x13\n\
    \x94\x05\n\x04\x04\0\x02\x04\x12\x03=\x02\"\x1a\x86\x05\x20Operation-spe\
    cific\x20graph-construction-time\x20configuration.\n\x20Note\x20that\x20\
    this\x20should\x20include\x20all\x20attrs\x20defined\x20in\x20the\n\x20c\
    orresponding\x20OpDef,\x20including\x20those\x20with\x20a\x20value\x20ma\
    tching\n\x20the\x20default\x20--\x20this\x20allows\x20the\x20default\x20\
    to\x20change\x20and\x20makes\n\x20NodeDefs\x20easier\x20to\x20interpret\
    \x20on\x20their\x20own.\x20\x20However,\x20if\n\x20an\x20attr\x20with\
    \x20a\x20default\x20is\x20not\x20specified\x20in\x20this\x20list,\x20the\
    \n\x20default\x20will\x20be\x20used.\n\x20The\x20\"names\"\x20(keys)\x20\
    must\x20match\x20the\x20regexp\x20\"[a-z][a-z0-9_]+\"\x20(and\n\x20one\
    \x20of\x20the\x20names\x20from\x20the\x20corresponding\x20OpDef's\x20att\
    r\x20field).\n\x20The\x20values\x20must\x20have\x20a\x20type\x20matching\
    \x20the\x20corresponding\x20OpDef\n\x20attr's\x20type\x20field.\n\x20TOD\
    O(josh11b):\x20Add\x20some\x20examples\x20here\x20showing\x20best\x20pra\
    ctices.\n\n\x0c\n\x05\x04\0\x02\x04\x06\x12\x03=\x02\x18\n\x0c\n\x05\x04\
    \0\x02\x04\x01\x12\x03=\x19\x1d\n\x0c\n\x05\x04\0\x02\x04\x03\x12\x03=\
    \x20!\n\x0c\n\x04\x04\0\x03\x01\x12\x04?\x02Q\x03\n\x0c\n\x05\x04\0\x03\
    \x01\x01\x12\x03?\n\x1f\n\xa3\x03\n\x06\x04\0\x03\x01\x02\0\x12\x03G\x04\
    ,\x1a\x93\x03\x20Opaque\x20string\x20inserted\x20into\x20error\x20messag\
    es\x20created\x20by\x20the\x20runtime.\n\n\x20This\x20is\x20intended\x20\
    to\x20store\x20the\x20list\x20of\x20names\x20of\x20the\x20nodes\x20from\
    \x20the\n\x20original\x20graph\x20that\x20this\x20node\x20was\x20derived\
    .\x20For\x20example\x20if\x20this\x20node,\x20say\n\x20C,\x20was\x20resu\
    lt\x20of\x20a\x20fusion\x20of\x202\x20nodes\x20A\x20and\x20B,\x20then\
    \x20'original_node'\x20would\n\x20be\x20{A,\x20B}.\x20This\x20informatio\
    n\x20can\x20be\x20used\x20to\x20map\x20errors\x20originating\x20at\x20th\
    e\n\x20current\x20node\x20to\x20some\x20top\x20level\x20source\x20code.\
    \n\n\x0e\n\x07\x04\0\x03\x01\x02\0\x04\x12\x03G\x04\x0c\n\x0e\n\x07\x04\
    \0\x03\x01\x02\0\x05\x12\x03G\r\x13\n\x0e\n\x07\x04\0\x03\x01\x02\0\x01\
    \x12\x03G\x14'\n\x0e\n\x07\x04\0\x03\x01\x02\0\x03\x12\x03G*+\n\xec\x03\
    \n\x06\x04\0\x03\x01\x02\x01\x12\x03P\x04,\x1a\xdc\x03\x20This\x20is\x20\
    intended\x20to\x20store\x20the\x20list\x20of\x20names\x20of\x20the\x20fu\
    nctions\x20from\x20the\n\x20original\x20graph\x20that\x20this\x20node\
    \x20was\x20derived.\x20For\x20example\x20if\x20this\x20node,\x20say\n\
    \x20C,\x20was\x20result\x20of\x20a\x20fusion\x20of\x20node\x20A\x20in\
    \x20function\x20FA\x20and\x20node\x20B\x20in\x20function\n\x20FB,\x20the\
    n\x20`original_funcs`\x20would\x20be\x20{FA,\x20FB}.\x20If\x20the\x20nod\
    e\x20is\x20in\x20the\x20top\n\x20level\x20graph,\x20the\x20`original_fun\
    c`\x20is\x20empty.\x20This\x20information,\x20with\x20the\n\x20`original\
    _node_names`\x20can\x20be\x20used\x20to\x20map\x20errors\x20originating\
    \x20at\x20the\n\x20current\x20ndoe\x20to\x20some\x20top\x20level\x20sour\
    ce\x20code.\n\n\x0e\n\x07\x04\0\x03\x01\x02\x01\x04\x12\x03P\x04\x0c\n\
    \x0e\n\x07\x04\0\x03\x01\x02\x01\x05\x12\x03P\r\x13\n\x0e\n\x07\x04\0\
    \x03\x01\x02\x01\x01\x12\x03P\x14'\n\x0e\n\x07\x04\0\x03\x01\x02\x01\x03\
    \x12\x03P*+\nF\n\x04\x04\0\x02\x05\x12\x03T\x024\x1a9\x20This\x20stores\
    \x20debug\x20information\x20associated\x20with\x20the\x20node.\n\n\x0c\n\
    \x05\x04\0\x02\x05\x06\x12\x03T\x02\x17\n\x0c\n\x05\x04\0\x02\x05\x01\
    \x12\x03T\x18/\n\x0c\n\x05\x04\0\x02\x05\x03\x12\x03T23b\x06proto3\
";

static mut file_descriptor_proto_lazy: ::protobuf::lazy::Lazy<::protobuf::descriptor::FileDescriptorProto> = ::protobuf::lazy::Lazy {
    lock: ::protobuf::lazy::ONCE_INIT,
    ptr: 0 as *const ::protobuf::descriptor::FileDescriptorProto,
};

fn parse_descriptor_proto() -> ::protobuf::descriptor::FileDescriptorProto {
    ::protobuf::parse_from_bytes(file_descriptor_proto_data).unwrap()
}

pub fn file_descriptor_proto() -> &'static ::protobuf::descriptor::FileDescriptorProto {
    unsafe {
        file_descriptor_proto_lazy.get(|| {
            parse_descriptor_proto()
        })
    }
}
