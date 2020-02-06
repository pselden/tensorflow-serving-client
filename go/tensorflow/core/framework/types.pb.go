// Code generated by protoc-gen-go. DO NOT EDIT.
// source: tensorflow/core/framework/types.proto

package tensorflow

import (
	fmt "fmt"
	proto "github.com/golang/protobuf/proto"
	math "math"
)

// Reference imports to suppress errors if they are not otherwise used.
var _ = proto.Marshal
var _ = fmt.Errorf
var _ = math.Inf

// This is a compile-time assertion to ensure that this generated file
// is compatible with the proto package it is being compiled against.
// A compilation error at this line likely means your copy of the
// proto package needs to be updated.
const _ = proto.ProtoPackageIsVersion3 // please upgrade the proto package

// (== suppress_warning documentation-presence ==)
// LINT.IfChange
type DataType int32

const (
	// Not a legal value for DataType.  Used to indicate a DataType field
	// has not been set.
	DataType_DT_INVALID DataType = 0
	// Data types that all computation devices are expected to be
	// capable to support.
	DataType_DT_FLOAT      DataType = 1
	DataType_DT_DOUBLE     DataType = 2
	DataType_DT_INT32      DataType = 3
	DataType_DT_UINT8      DataType = 4
	DataType_DT_INT16      DataType = 5
	DataType_DT_INT8       DataType = 6
	DataType_DT_STRING     DataType = 7
	DataType_DT_COMPLEX64  DataType = 8
	DataType_DT_INT64      DataType = 9
	DataType_DT_BOOL       DataType = 10
	DataType_DT_QINT8      DataType = 11
	DataType_DT_QUINT8     DataType = 12
	DataType_DT_QINT32     DataType = 13
	DataType_DT_BFLOAT16   DataType = 14
	DataType_DT_QINT16     DataType = 15
	DataType_DT_QUINT16    DataType = 16
	DataType_DT_UINT16     DataType = 17
	DataType_DT_COMPLEX128 DataType = 18
	DataType_DT_HALF       DataType = 19
	DataType_DT_RESOURCE   DataType = 20
	DataType_DT_VARIANT    DataType = 21
	DataType_DT_UINT32     DataType = 22
	DataType_DT_UINT64     DataType = 23
	// Do not use!  These are only for parameters.  Every enum above
	// should have a corresponding value below (verified by types_test).
	DataType_DT_FLOAT_REF      DataType = 101
	DataType_DT_DOUBLE_REF     DataType = 102
	DataType_DT_INT32_REF      DataType = 103
	DataType_DT_UINT8_REF      DataType = 104
	DataType_DT_INT16_REF      DataType = 105
	DataType_DT_INT8_REF       DataType = 106
	DataType_DT_STRING_REF     DataType = 107
	DataType_DT_COMPLEX64_REF  DataType = 108
	DataType_DT_INT64_REF      DataType = 109
	DataType_DT_BOOL_REF       DataType = 110
	DataType_DT_QINT8_REF      DataType = 111
	DataType_DT_QUINT8_REF     DataType = 112
	DataType_DT_QINT32_REF     DataType = 113
	DataType_DT_BFLOAT16_REF   DataType = 114
	DataType_DT_QINT16_REF     DataType = 115
	DataType_DT_QUINT16_REF    DataType = 116
	DataType_DT_UINT16_REF     DataType = 117
	DataType_DT_COMPLEX128_REF DataType = 118
	DataType_DT_HALF_REF       DataType = 119
	DataType_DT_RESOURCE_REF   DataType = 120
	DataType_DT_VARIANT_REF    DataType = 121
	DataType_DT_UINT32_REF     DataType = 122
	DataType_DT_UINT64_REF     DataType = 123
)

var DataType_name = map[int32]string{
	0:   "DT_INVALID",
	1:   "DT_FLOAT",
	2:   "DT_DOUBLE",
	3:   "DT_INT32",
	4:   "DT_UINT8",
	5:   "DT_INT16",
	6:   "DT_INT8",
	7:   "DT_STRING",
	8:   "DT_COMPLEX64",
	9:   "DT_INT64",
	10:  "DT_BOOL",
	11:  "DT_QINT8",
	12:  "DT_QUINT8",
	13:  "DT_QINT32",
	14:  "DT_BFLOAT16",
	15:  "DT_QINT16",
	16:  "DT_QUINT16",
	17:  "DT_UINT16",
	18:  "DT_COMPLEX128",
	19:  "DT_HALF",
	20:  "DT_RESOURCE",
	21:  "DT_VARIANT",
	22:  "DT_UINT32",
	23:  "DT_UINT64",
	101: "DT_FLOAT_REF",
	102: "DT_DOUBLE_REF",
	103: "DT_INT32_REF",
	104: "DT_UINT8_REF",
	105: "DT_INT16_REF",
	106: "DT_INT8_REF",
	107: "DT_STRING_REF",
	108: "DT_COMPLEX64_REF",
	109: "DT_INT64_REF",
	110: "DT_BOOL_REF",
	111: "DT_QINT8_REF",
	112: "DT_QUINT8_REF",
	113: "DT_QINT32_REF",
	114: "DT_BFLOAT16_REF",
	115: "DT_QINT16_REF",
	116: "DT_QUINT16_REF",
	117: "DT_UINT16_REF",
	118: "DT_COMPLEX128_REF",
	119: "DT_HALF_REF",
	120: "DT_RESOURCE_REF",
	121: "DT_VARIANT_REF",
	122: "DT_UINT32_REF",
	123: "DT_UINT64_REF",
}

var DataType_value = map[string]int32{
	"DT_INVALID":        0,
	"DT_FLOAT":          1,
	"DT_DOUBLE":         2,
	"DT_INT32":          3,
	"DT_UINT8":          4,
	"DT_INT16":          5,
	"DT_INT8":           6,
	"DT_STRING":         7,
	"DT_COMPLEX64":      8,
	"DT_INT64":          9,
	"DT_BOOL":           10,
	"DT_QINT8":          11,
	"DT_QUINT8":         12,
	"DT_QINT32":         13,
	"DT_BFLOAT16":       14,
	"DT_QINT16":         15,
	"DT_QUINT16":        16,
	"DT_UINT16":         17,
	"DT_COMPLEX128":     18,
	"DT_HALF":           19,
	"DT_RESOURCE":       20,
	"DT_VARIANT":        21,
	"DT_UINT32":         22,
	"DT_UINT64":         23,
	"DT_FLOAT_REF":      101,
	"DT_DOUBLE_REF":     102,
	"DT_INT32_REF":      103,
	"DT_UINT8_REF":      104,
	"DT_INT16_REF":      105,
	"DT_INT8_REF":       106,
	"DT_STRING_REF":     107,
	"DT_COMPLEX64_REF":  108,
	"DT_INT64_REF":      109,
	"DT_BOOL_REF":       110,
	"DT_QINT8_REF":      111,
	"DT_QUINT8_REF":     112,
	"DT_QINT32_REF":     113,
	"DT_BFLOAT16_REF":   114,
	"DT_QINT16_REF":     115,
	"DT_QUINT16_REF":    116,
	"DT_UINT16_REF":     117,
	"DT_COMPLEX128_REF": 118,
	"DT_HALF_REF":       119,
	"DT_RESOURCE_REF":   120,
	"DT_VARIANT_REF":    121,
	"DT_UINT32_REF":     122,
	"DT_UINT64_REF":     123,
}

func (x DataType) String() string {
	return proto.EnumName(DataType_name, int32(x))
}

func (DataType) EnumDescriptor() ([]byte, []int) {
	return fileDescriptor_472a3bf6d9d70fb7, []int{0}
}

func init() {
	proto.RegisterEnum("tensorflow.DataType", DataType_name, DataType_value)
}

func init() {
	proto.RegisterFile("tensorflow/core/framework/types.proto", fileDescriptor_472a3bf6d9d70fb7)
}

var fileDescriptor_472a3bf6d9d70fb7 = []byte{
	// 483 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0x6c, 0x93, 0xcd, 0x6e, 0xda, 0x40,
	0x10, 0xc7, 0x4b, 0x3f, 0x08, 0x59, 0xbe, 0x86, 0x4d, 0xd2, 0xf6, 0x05, 0x7a, 0xe9, 0x01, 0x64,
	0x40, 0x16, 0x97, 0x1e, 0x4c, 0x6c, 0x5a, 0x4b, 0xae, 0x17, 0x9c, 0x25, 0xaa, 0x7a, 0xb1, 0x48,
	0x64, 0x48, 0x4a, 0xc8, 0x52, 0xdb, 0x94, 0xd2, 0xbe, 0x51, 0x9f, 0xb0, 0xc7, 0x8a, 0xf1, 0xc0,
	0x6e, 0xab, 0xde, 0x3c, 0xbf, 0x99, 0xfd, 0xcf, 0xdf, 0x33, 0x1a, 0xf6, 0x26, 0x4f, 0x1e, 0x33,
	0x95, 0xce, 0x1f, 0xd4, 0xb6, 0x73, 0xab, 0xd2, 0xa4, 0x33, 0x4f, 0x67, 0xab, 0x64, 0xab, 0xd2,
	0x65, 0x27, 0xdf, 0xad, 0x93, 0xac, 0xbd, 0x4e, 0x55, 0xae, 0x38, 0xd3, 0x65, 0x6f, 0x7f, 0x95,
	0x59, 0xc5, 0x9d, 0xe5, 0x33, 0xb9, 0x5b, 0x27, 0xbc, 0xc1, 0x98, 0x2b, 0x63, 0x3f, 0xbc, 0x76,
	0x02, 0xdf, 0x85, 0x27, 0xbc, 0xc6, 0x2a, 0xae, 0x8c, 0x47, 0x81, 0x70, 0x24, 0x94, 0x78, 0x9d,
	0x9d, 0xba, 0x32, 0x76, 0xc5, 0x74, 0x18, 0x78, 0xf0, 0x94, 0x92, 0x7e, 0x28, 0x7b, 0x5d, 0x78,
	0x46, 0xd1, 0xd4, 0x0f, 0xe5, 0x00, 0x9e, 0xeb, 0x9c, 0x65, 0xc3, 0x0b, 0x5e, 0x65, 0x27, 0x45,
	0x34, 0x80, 0x32, 0xa9, 0x5c, 0xc9, 0xc8, 0x0f, 0xdf, 0xc3, 0x09, 0x07, 0x56, 0x73, 0x65, 0x7c,
	0x29, 0x3e, 0x8e, 0x03, 0xef, 0x93, 0xdd, 0x87, 0x8a, 0x7e, 0x6b, 0xf7, 0xe1, 0x94, 0xde, 0x0e,
	0x85, 0x08, 0x80, 0x51, 0x6a, 0x82, 0x4a, 0x55, 0x52, 0x9a, 0x14, 0x3d, 0x6b, 0x87, 0xb0, 0x30,
	0x54, 0xe7, 0x4d, 0x56, 0xdd, 0x3f, 0x44, 0xf3, 0x96, 0x0d, 0x0d, 0x23, 0x6f, 0xd9, 0xd0, 0xa4,
	0x7f, 0xc5, 0xd7, 0x96, 0x0d, 0x40, 0x69, 0x0a, 0x5b, 0xbc, 0xc5, 0xea, 0xda, 0x97, 0xd5, 0x1d,
	0x00, 0x27, 0x2b, 0x1f, 0x9c, 0x60, 0x04, 0x67, 0x24, 0x1f, 0x79, 0x57, 0x62, 0x1a, 0x5d, 0x7a,
	0x70, 0x4e, 0x7a, 0xd7, 0x4e, 0xe4, 0x3b, 0xa1, 0x84, 0x0b, 0x43, 0xaf, 0xd7, 0x85, 0x97, 0x46,
	0x68, 0xf7, 0xe1, 0x15, 0xfd, 0x36, 0x9a, 0x8b, 0x23, 0x6f, 0x04, 0x09, 0x35, 0x2c, 0xa6, 0x8b,
	0x68, 0x4e, 0x45, 0xa8, 0x80, 0x64, 0x41, 0x04, 0xff, 0x18, 0xc9, 0x9d, 0xae, 0xb1, 0x6c, 0x24,
	0xf7, 0xe4, 0xec, 0x58, 0xf2, 0x85, 0x94, 0x8b, 0x89, 0x23, 0x5a, 0xf2, 0x73, 0x06, 0xe6, 0xd4,
	0x91, 0x3e, 0x68, 0x2d, 0x22, 0xab, 0xc3, 0x10, 0x85, 0x08, 0x10, 0x3c, 0x52, 0xc9, 0xe4, 0xa8,
	0xae, 0x48, 0x7d, 0xa2, 0x3d, 0xad, 0x0f, 0x48, 0x1b, 0xff, 0xca, 0xcf, 0x58, 0xd3, 0xd8, 0x06,
	0xc2, 0xd4, 0xa8, 0x23, 0x94, 0x71, 0xce, 0x1a, 0x7a, 0x2b, 0xc8, 0x72, 0x2a, 0x33, 0xd0, 0x86,
	0x5f, 0xb0, 0xd6, 0x5f, 0xdb, 0x41, 0xfc, 0x8d, 0xec, 0xee, 0x37, 0x84, 0x60, 0x4b, 0x6d, 0x0f,
	0x5b, 0x42, 0xf8, 0x9d, 0x7a, 0xd0, 0xa6, 0x90, 0xed, 0x8c, 0x1e, 0x64, 0xf9, 0x87, 0x81, 0x68,
	0x1c, 0x3f, 0x87, 0x4b, 0xf6, 0x5a, 0xa5, 0x8b, 0xb6, 0x3e, 0x9f, 0xf6, 0xf1, 0xc0, 0x86, 0xd5,
	0xfd, 0x05, 0x65, 0xe3, 0xfd, 0x81, 0x65, 0xe3, 0xd2, 0xe7, 0x77, 0x8b, 0xfb, 0xfc, 0x6e, 0x73,
	0xd3, 0xbe, 0x55, 0xab, 0x8e, 0x71, 0x95, 0xff, 0xff, 0x5c, 0xa8, 0x7f, 0xce, 0xf5, 0x77, 0xa9,
	0x74, 0x53, 0xc6, 0x63, 0xed, 0xfd, 0x09, 0x00, 0x00, 0xff, 0xff, 0x68, 0xc3, 0x91, 0x21, 0xd5,
	0x03, 0x00, 0x00,
}
