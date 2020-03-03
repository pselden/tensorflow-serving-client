// Code generated by protoc-gen-go. DO NOT EDIT.
// source: tensorflow/core/protobuf/cluster.proto

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

// Defines a single job in a TensorFlow cluster.
type JobDef struct {
	// The name of this job.
	Name string `protobuf:"bytes,1,opt,name=name,proto3" json:"name,omitempty"`
	// Mapping from task ID to "hostname:port" string.
	//
	// If the `name` field contains "worker", and the `tasks` map contains a
	// mapping from 7 to "example.org:2222", then the device prefix
	// "/job:worker/task:7" will be assigned to "example.org:2222".
	Tasks                map[int32]string `protobuf:"bytes,2,rep,name=tasks,proto3" json:"tasks,omitempty" protobuf_key:"varint,1,opt,name=key,proto3" protobuf_val:"bytes,2,opt,name=value,proto3"`
	XXX_NoUnkeyedLiteral struct{}         `json:"-"`
	XXX_unrecognized     []byte           `json:"-"`
	XXX_sizecache        int32            `json:"-"`
}

func (m *JobDef) Reset()         { *m = JobDef{} }
func (m *JobDef) String() string { return proto.CompactTextString(m) }
func (*JobDef) ProtoMessage()    {}
func (*JobDef) Descriptor() ([]byte, []int) {
	return fileDescriptor_8ea47a9615190cff, []int{0}
}

func (m *JobDef) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_JobDef.Unmarshal(m, b)
}
func (m *JobDef) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_JobDef.Marshal(b, m, deterministic)
}
func (m *JobDef) XXX_Merge(src proto.Message) {
	xxx_messageInfo_JobDef.Merge(m, src)
}
func (m *JobDef) XXX_Size() int {
	return xxx_messageInfo_JobDef.Size(m)
}
func (m *JobDef) XXX_DiscardUnknown() {
	xxx_messageInfo_JobDef.DiscardUnknown(m)
}

var xxx_messageInfo_JobDef proto.InternalMessageInfo

func (m *JobDef) GetName() string {
	if m != nil {
		return m.Name
	}
	return ""
}

func (m *JobDef) GetTasks() map[int32]string {
	if m != nil {
		return m.Tasks
	}
	return nil
}

// Defines a TensorFlow cluster as a set of jobs.
type ClusterDef struct {
	// The jobs that comprise the cluster.
	Job                  []*JobDef `protobuf:"bytes,1,rep,name=job,proto3" json:"job,omitempty"`
	XXX_NoUnkeyedLiteral struct{}  `json:"-"`
	XXX_unrecognized     []byte    `json:"-"`
	XXX_sizecache        int32     `json:"-"`
}

func (m *ClusterDef) Reset()         { *m = ClusterDef{} }
func (m *ClusterDef) String() string { return proto.CompactTextString(m) }
func (*ClusterDef) ProtoMessage()    {}
func (*ClusterDef) Descriptor() ([]byte, []int) {
	return fileDescriptor_8ea47a9615190cff, []int{1}
}

func (m *ClusterDef) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_ClusterDef.Unmarshal(m, b)
}
func (m *ClusterDef) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_ClusterDef.Marshal(b, m, deterministic)
}
func (m *ClusterDef) XXX_Merge(src proto.Message) {
	xxx_messageInfo_ClusterDef.Merge(m, src)
}
func (m *ClusterDef) XXX_Size() int {
	return xxx_messageInfo_ClusterDef.Size(m)
}
func (m *ClusterDef) XXX_DiscardUnknown() {
	xxx_messageInfo_ClusterDef.DiscardUnknown(m)
}

var xxx_messageInfo_ClusterDef proto.InternalMessageInfo

func (m *ClusterDef) GetJob() []*JobDef {
	if m != nil {
		return m.Job
	}
	return nil
}

func init() {
	proto.RegisterType((*JobDef)(nil), "tensorflow.JobDef")
	proto.RegisterMapType((map[int32]string)(nil), "tensorflow.JobDef.TasksEntry")
	proto.RegisterType((*ClusterDef)(nil), "tensorflow.ClusterDef")
}

func init() {
	proto.RegisterFile("tensorflow/core/protobuf/cluster.proto", fileDescriptor_8ea47a9615190cff)
}

var fileDescriptor_8ea47a9615190cff = []byte{
	// 250 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0x6c, 0x50, 0xc1, 0x4a, 0xc3, 0x40,
	0x10, 0x65, 0x13, 0x53, 0x70, 0x44, 0x90, 0xc5, 0x43, 0x28, 0x08, 0xa5, 0x88, 0xf4, 0xb4, 0x81,
	0xf6, 0x52, 0xc4, 0x53, 0xd5, 0x8b, 0xa7, 0x12, 0x3c, 0x79, 0xcb, 0xc6, 0x4d, 0x8c, 0x4d, 0x76,
	0x64, 0x77, 0x56, 0xe9, 0x37, 0xf8, 0xc3, 0x1e, 0x65, 0x77, 0x85, 0x54, 0xf4, 0xf6, 0x66, 0xde,
	0xcc, 0xbc, 0x37, 0x0f, 0xae, 0x48, 0x69, 0x8b, 0xa6, 0xe9, 0xf1, 0xa3, 0xa8, 0xd1, 0xa8, 0xe2,
	0xcd, 0x20, 0xa1, 0x74, 0x4d, 0x51, 0xf7, 0xce, 0x92, 0x32, 0x22, 0x34, 0x38, 0x8c, 0x73, 0xf3,
	0x4f, 0x06, 0x93, 0x07, 0x94, 0x77, 0xaa, 0xe1, 0x1c, 0x8e, 0x74, 0x35, 0xa8, 0x9c, 0xcd, 0xd8,
	0xe2, 0xb8, 0x0c, 0x98, 0xaf, 0x20, 0xa3, 0xca, 0xee, 0x6c, 0x9e, 0xcc, 0xd2, 0xc5, 0xc9, 0xf2,
	0x42, 0x8c, 0xab, 0x22, 0xae, 0x89, 0x47, 0xcf, 0xdf, 0x6b, 0x32, 0xfb, 0x32, 0xce, 0x4e, 0xd7,
	0x00, 0x63, 0x93, 0x9f, 0x41, 0xba, 0x53, 0xfb, 0x70, 0x35, 0x2b, 0x3d, 0xe4, 0xe7, 0x90, 0xbd,
	0x57, 0xbd, 0x53, 0x79, 0x12, 0x94, 0x62, 0x71, 0x9d, 0xac, 0xd9, 0x7c, 0x09, 0x70, 0x1b, 0xad,
	0x7a, 0x43, 0x97, 0x90, 0xbe, 0xa2, 0xcc, 0x59, 0x90, 0xe6, 0x7f, 0xa5, 0x4b, 0x4f, 0x6f, 0x34,
	0x4c, 0xd1, 0xb4, 0x87, 0xec, 0x73, 0x67, 0xc9, 0x38, 0x4d, 0xdd, 0xa0, 0x36, 0xa7, 0x3f, 0xf7,
	0xb6, 0xfe, 0x73, 0xbb, 0x65, 0x4f, 0x37, 0x6d, 0x47, 0x2f, 0x4e, 0x8a, 0x1a, 0x87, 0xe2, 0x20,
	0xaf, 0xff, 0x61, 0x8b, 0xbf, 0x83, 0xfc, 0x62, 0x4c, 0x4e, 0x42, 0xb1, 0xfa, 0x0e, 0x00, 0x00,
	0xff, 0xff, 0xb9, 0x8e, 0x3e, 0x8f, 0x6e, 0x01, 0x00, 0x00,
}
