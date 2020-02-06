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
//! Generated file from `tensorflow/core/protobuf/verifier_config.proto`

use protobuf::Message as Message_imported_for_functions;
use protobuf::ProtobufEnum as ProtobufEnum_imported_for_functions;

/// Generated files are compatible only with the same version
/// of protobuf runtime.
// const _PROTOBUF_VERSION_CHECK: () = ::protobuf::VERSION_2_10_1;

#[derive(PartialEq,Clone,Default)]
pub struct VerifierConfig {
    // message fields
    pub verification_timeout_in_ms: i64,
    pub structure_verifier: VerifierConfig_Toggle,
    // special fields
    pub unknown_fields: ::protobuf::UnknownFields,
    pub cached_size: ::protobuf::CachedSize,
}

impl<'a> ::std::default::Default for &'a VerifierConfig {
    fn default() -> &'a VerifierConfig {
        <VerifierConfig as ::protobuf::Message>::default_instance()
    }
}

impl VerifierConfig {
    pub fn new() -> VerifierConfig {
        ::std::default::Default::default()
    }

    // int64 verification_timeout_in_ms = 1;


    pub fn get_verification_timeout_in_ms(&self) -> i64 {
        self.verification_timeout_in_ms
    }
    pub fn clear_verification_timeout_in_ms(&mut self) {
        self.verification_timeout_in_ms = 0;
    }

    // Param is passed by value, moved
    pub fn set_verification_timeout_in_ms(&mut self, v: i64) {
        self.verification_timeout_in_ms = v;
    }

    // .tensorflow.VerifierConfig.Toggle structure_verifier = 2;


    pub fn get_structure_verifier(&self) -> VerifierConfig_Toggle {
        self.structure_verifier
    }
    pub fn clear_structure_verifier(&mut self) {
        self.structure_verifier = VerifierConfig_Toggle::DEFAULT;
    }

    // Param is passed by value, moved
    pub fn set_structure_verifier(&mut self, v: VerifierConfig_Toggle) {
        self.structure_verifier = v;
    }
}

impl ::protobuf::Message for VerifierConfig {
    fn is_initialized(&self) -> bool {
        true
    }

    fn merge_from(&mut self, is: &mut ::protobuf::CodedInputStream<'_>) -> ::protobuf::ProtobufResult<()> {
        while !is.eof()? {
            let (field_number, wire_type) = is.read_tag_unpack()?;
            match field_number {
                1 => {
                    if wire_type != ::protobuf::wire_format::WireTypeVarint {
                        return ::std::result::Result::Err(::protobuf::rt::unexpected_wire_type(wire_type));
                    }
                    let tmp = is.read_int64()?;
                    self.verification_timeout_in_ms = tmp;
                },
                2 => {
                    ::protobuf::rt::read_proto3_enum_with_unknown_fields_into(wire_type, is, &mut self.structure_verifier, 2, &mut self.unknown_fields)?
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
        if self.verification_timeout_in_ms != 0 {
            my_size += ::protobuf::rt::value_size(1, self.verification_timeout_in_ms, ::protobuf::wire_format::WireTypeVarint);
        }
        if self.structure_verifier != VerifierConfig_Toggle::DEFAULT {
            my_size += ::protobuf::rt::enum_size(2, self.structure_verifier);
        }
        my_size += ::protobuf::rt::unknown_fields_size(self.get_unknown_fields());
        self.cached_size.set(my_size);
        my_size
    }

    fn write_to_with_cached_sizes(&self, os: &mut ::protobuf::CodedOutputStream<'_>) -> ::protobuf::ProtobufResult<()> {
        if self.verification_timeout_in_ms != 0 {
            os.write_int64(1, self.verification_timeout_in_ms)?;
        }
        if self.structure_verifier != VerifierConfig_Toggle::DEFAULT {
            os.write_enum(2, self.structure_verifier.value())?;
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

    fn new() -> VerifierConfig {
        VerifierConfig::new()
    }

    fn descriptor_static() -> &'static ::protobuf::reflect::MessageDescriptor {
        static mut descriptor: ::protobuf::lazy::Lazy<::protobuf::reflect::MessageDescriptor> = ::protobuf::lazy::Lazy {
            lock: ::protobuf::lazy::ONCE_INIT,
            ptr: 0 as *const ::protobuf::reflect::MessageDescriptor,
        };
        unsafe {
            descriptor.get(|| {
                let mut fields = ::std::vec::Vec::new();
                fields.push(::protobuf::reflect::accessor::make_simple_field_accessor::<_, ::protobuf::types::ProtobufTypeInt64>(
                    "verification_timeout_in_ms",
                    |m: &VerifierConfig| { &m.verification_timeout_in_ms },
                    |m: &mut VerifierConfig| { &mut m.verification_timeout_in_ms },
                ));
                fields.push(::protobuf::reflect::accessor::make_simple_field_accessor::<_, ::protobuf::types::ProtobufTypeEnum<VerifierConfig_Toggle>>(
                    "structure_verifier",
                    |m: &VerifierConfig| { &m.structure_verifier },
                    |m: &mut VerifierConfig| { &mut m.structure_verifier },
                ));
                ::protobuf::reflect::MessageDescriptor::new::<VerifierConfig>(
                    "VerifierConfig",
                    fields,
                    file_descriptor_proto()
                )
            })
        }
    }

    fn default_instance() -> &'static VerifierConfig {
        static mut instance: ::protobuf::lazy::Lazy<VerifierConfig> = ::protobuf::lazy::Lazy {
            lock: ::protobuf::lazy::ONCE_INIT,
            ptr: 0 as *const VerifierConfig,
        };
        unsafe {
            instance.get(VerifierConfig::new)
        }
    }
}

impl ::protobuf::Clear for VerifierConfig {
    fn clear(&mut self) {
        self.verification_timeout_in_ms = 0;
        self.structure_verifier = VerifierConfig_Toggle::DEFAULT;
        self.unknown_fields.clear();
    }
}

impl ::std::fmt::Debug for VerifierConfig {
    fn fmt(&self, f: &mut ::std::fmt::Formatter<'_>) -> ::std::fmt::Result {
        ::protobuf::text_format::fmt(self, f)
    }
}

impl ::protobuf::reflect::ProtobufValue for VerifierConfig {
    fn as_ref(&self) -> ::protobuf::reflect::ProtobufValueRef {
        ::protobuf::reflect::ProtobufValueRef::Message(self)
    }
}

#[derive(Clone,PartialEq,Eq,Debug,Hash)]
pub enum VerifierConfig_Toggle {
    DEFAULT = 0,
    ON = 1,
    OFF = 2,
}

impl ::protobuf::ProtobufEnum for VerifierConfig_Toggle {
    fn value(&self) -> i32 {
        *self as i32
    }

    fn from_i32(value: i32) -> ::std::option::Option<VerifierConfig_Toggle> {
        match value {
            0 => ::std::option::Option::Some(VerifierConfig_Toggle::DEFAULT),
            1 => ::std::option::Option::Some(VerifierConfig_Toggle::ON),
            2 => ::std::option::Option::Some(VerifierConfig_Toggle::OFF),
            _ => ::std::option::Option::None
        }
    }

    fn values() -> &'static [Self] {
        static values: &'static [VerifierConfig_Toggle] = &[
            VerifierConfig_Toggle::DEFAULT,
            VerifierConfig_Toggle::ON,
            VerifierConfig_Toggle::OFF,
        ];
        values
    }

    fn enum_descriptor_static() -> &'static ::protobuf::reflect::EnumDescriptor {
        static mut descriptor: ::protobuf::lazy::Lazy<::protobuf::reflect::EnumDescriptor> = ::protobuf::lazy::Lazy {
            lock: ::protobuf::lazy::ONCE_INIT,
            ptr: 0 as *const ::protobuf::reflect::EnumDescriptor,
        };
        unsafe {
            descriptor.get(|| {
                ::protobuf::reflect::EnumDescriptor::new("VerifierConfig_Toggle", file_descriptor_proto())
            })
        }
    }
}

impl ::std::marker::Copy for VerifierConfig_Toggle {
}

impl ::std::default::Default for VerifierConfig_Toggle {
    fn default() -> Self {
        VerifierConfig_Toggle::DEFAULT
    }
}

impl ::protobuf::reflect::ProtobufValue for VerifierConfig_Toggle {
    fn as_ref(&self) -> ::protobuf::reflect::ProtobufValueRef {
        ::protobuf::reflect::ProtobufValueRef::Enum(self.descriptor())
    }
}

static file_descriptor_proto_data: &'static [u8] = b"\
    \n.tensorflow/core/protobuf/verifier_config.proto\x12\ntensorflow\"\xc7\
    \x01\n\x0eVerifierConfig\x12;\n\x1averification_timeout_in_ms\x18\x01\
    \x20\x01(\x03R\x17verificationTimeoutInMs\x12P\n\x12structure_verifier\
    \x18\x02\x20\x01(\x0e2!.tensorflow.VerifierConfig.ToggleR\x11structureVe\
    rifier\"&\n\x06Toggle\x12\x0b\n\x07DEFAULT\x10\0\x12\x06\n\x02ON\x10\x01\
    \x12\x07\n\x03OFF\x10\x02Bs\n\x18org.tensorflow.frameworkB\x14VerifierCo\
    nfigProtosP\x01Z<github.com/tensorflow/tensorflow/tensorflow/go/core/pro\
    tobuf\xf8\x01\x01J\x9b\x05\n\x06\x12\x04\0\0\x19\x01\n\x08\n\x01\x0c\x12\
    \x03\0\0\x12\n\x08\n\x01\x02\x12\x03\x02\0\x13\n\x08\n\x01\x08\x12\x03\
    \x03\0\x1f\n\t\n\x02\x08\x1f\x12\x03\x03\0\x1f\n\x08\n\x01\x08\x12\x03\
    \x04\05\n\t\n\x02\x08\x08\x12\x03\x04\05\n\x08\n\x01\x08\x12\x03\x05\0\"\
    \n\t\n\x02\x08\n\x12\x03\x05\0\"\n\x08\n\x01\x08\x12\x03\x06\01\n\t\n\
    \x02\x08\x01\x12\x03\x06\01\n\x08\n\x01\x08\x12\x03\x07\0S\n\t\n\x02\x08\
    \x0b\x12\x03\x07\0S\n-\n\x02\x04\0\x12\x04\n\0\x19\x01\x1a!\x20The\x20co\
    nfig\x20for\x20graph\x20verifiers.\n\n\n\n\x03\x04\0\x01\x12\x03\n\x08\
    \x16\n\x0c\n\x04\x04\0\x04\0\x12\x04\x0b\x02\x0f\x03\n\x0c\n\x05\x04\0\
    \x04\0\x01\x12\x03\x0b\x07\r\n\r\n\x06\x04\0\x04\0\x02\0\x12\x03\x0c\x04\
    \x10\n\x0e\n\x07\x04\0\x04\0\x02\0\x01\x12\x03\x0c\x04\x0b\n\x0e\n\x07\
    \x04\0\x04\0\x02\0\x02\x12\x03\x0c\x0e\x0f\n\r\n\x06\x04\0\x04\0\x02\x01\
    \x12\x03\r\x04\x0b\n\x0e\n\x07\x04\0\x04\0\x02\x01\x01\x12\x03\r\x04\x06\
    \n\x0e\n\x07\x04\0\x04\0\x02\x01\x02\x12\x03\r\t\n\n\r\n\x06\x04\0\x04\0\
    \x02\x02\x12\x03\x0e\x04\x0c\n\x0e\n\x07\x04\0\x04\0\x02\x02\x01\x12\x03\
    \x0e\x04\x07\n\x0e\n\x07\x04\0\x04\0\x02\x02\x02\x12\x03\x0e\n\x0b\n\x86\
    \x01\n\x04\x04\0\x02\0\x12\x03\x13\x02'\x1ay\x20Deadline\x20for\x20compl\
    etion\x20of\x20all\x20verification\x20i.e.\x20all\x20the\x20Toggle\x20ON\
    \n\x20verifiers\x20must\x20complete\x20execution\x20within\x20this\x20ti\
    me.\n\n\x0c\n\x05\x04\0\x02\0\x05\x12\x03\x13\x02\x07\n\x0c\n\x05\x04\0\
    \x02\0\x01\x12\x03\x13\x08\"\n\x0c\n\x05\x04\0\x02\0\x03\x12\x03\x13%&\n\
    S\n\x04\x04\0\x02\x01\x12\x03\x16\x02\x20\x1aF\x20Perform\x20structural\
    \x20validation\x20on\x20a\x20tensorflow\x20graph.\x20Default\x20is\x20OF\
    F.\n\n\x0c\n\x05\x04\0\x02\x01\x06\x12\x03\x16\x02\x08\n\x0c\n\x05\x04\0\
    \x02\x01\x01\x12\x03\x16\t\x1b\n\x0c\n\x05\x04\0\x02\x01\x03\x12\x03\x16\
    \x1e\x1fb\x06proto3\
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
