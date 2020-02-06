// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/framework/allocation_description.proto

package org.tensorflow.framework;

/**
 * Protobuf type {@code tensorflow.AllocationDescription}
 */
public  final class AllocationDescription extends
    com.google.protobuf.GeneratedMessageV3 implements
    // @@protoc_insertion_point(message_implements:tensorflow.AllocationDescription)
    AllocationDescriptionOrBuilder {
private static final long serialVersionUID = 0L;
  // Use AllocationDescription.newBuilder() to construct.
  private AllocationDescription(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
    super(builder);
  }
  private AllocationDescription() {
    allocatorName_ = "";
  }

  @java.lang.Override
  @SuppressWarnings({"unused"})
  protected java.lang.Object newInstance(
      UnusedPrivateParameter unused) {
    return new AllocationDescription();
  }

  @java.lang.Override
  public final com.google.protobuf.UnknownFieldSet
  getUnknownFields() {
    return this.unknownFields;
  }
  private AllocationDescription(
      com.google.protobuf.CodedInputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    this();
    if (extensionRegistry == null) {
      throw new java.lang.NullPointerException();
    }
    com.google.protobuf.UnknownFieldSet.Builder unknownFields =
        com.google.protobuf.UnknownFieldSet.newBuilder();
    try {
      boolean done = false;
      while (!done) {
        int tag = input.readTag();
        switch (tag) {
          case 0:
            done = true;
            break;
          case 8: {

            requestedBytes_ = input.readInt64();
            break;
          }
          case 16: {

            allocatedBytes_ = input.readInt64();
            break;
          }
          case 26: {
            java.lang.String s = input.readStringRequireUtf8();

            allocatorName_ = s;
            break;
          }
          case 32: {

            allocationId_ = input.readInt64();
            break;
          }
          case 40: {

            hasSingleReference_ = input.readBool();
            break;
          }
          case 48: {

            ptr_ = input.readUInt64();
            break;
          }
          default: {
            if (!parseUnknownField(
                input, unknownFields, extensionRegistry, tag)) {
              done = true;
            }
            break;
          }
        }
      }
    } catch (com.google.protobuf.InvalidProtocolBufferException e) {
      throw e.setUnfinishedMessage(this);
    } catch (java.io.IOException e) {
      throw new com.google.protobuf.InvalidProtocolBufferException(
          e).setUnfinishedMessage(this);
    } finally {
      this.unknownFields = unknownFields.build();
      makeExtensionsImmutable();
    }
  }
  public static final com.google.protobuf.Descriptors.Descriptor
      getDescriptor() {
    return org.tensorflow.framework.AllocationDescriptionProtos.internal_static_tensorflow_AllocationDescription_descriptor;
  }

  @java.lang.Override
  protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internalGetFieldAccessorTable() {
    return org.tensorflow.framework.AllocationDescriptionProtos.internal_static_tensorflow_AllocationDescription_fieldAccessorTable
        .ensureFieldAccessorsInitialized(
            org.tensorflow.framework.AllocationDescription.class, org.tensorflow.framework.AllocationDescription.Builder.class);
  }

  public static final int REQUESTED_BYTES_FIELD_NUMBER = 1;
  private long requestedBytes_;
  /**
   * <pre>
   * Total number of bytes requested
   * </pre>
   *
   * <code>int64 requested_bytes = 1;</code>
   * @return The requestedBytes.
   */
  public long getRequestedBytes() {
    return requestedBytes_;
  }

  public static final int ALLOCATED_BYTES_FIELD_NUMBER = 2;
  private long allocatedBytes_;
  /**
   * <pre>
   * Total number of bytes allocated if known
   * </pre>
   *
   * <code>int64 allocated_bytes = 2;</code>
   * @return The allocatedBytes.
   */
  public long getAllocatedBytes() {
    return allocatedBytes_;
  }

  public static final int ALLOCATOR_NAME_FIELD_NUMBER = 3;
  private volatile java.lang.Object allocatorName_;
  /**
   * <pre>
   * Name of the allocator used
   * </pre>
   *
   * <code>string allocator_name = 3;</code>
   * @return The allocatorName.
   */
  public java.lang.String getAllocatorName() {
    java.lang.Object ref = allocatorName_;
    if (ref instanceof java.lang.String) {
      return (java.lang.String) ref;
    } else {
      com.google.protobuf.ByteString bs = 
          (com.google.protobuf.ByteString) ref;
      java.lang.String s = bs.toStringUtf8();
      allocatorName_ = s;
      return s;
    }
  }
  /**
   * <pre>
   * Name of the allocator used
   * </pre>
   *
   * <code>string allocator_name = 3;</code>
   * @return The bytes for allocatorName.
   */
  public com.google.protobuf.ByteString
      getAllocatorNameBytes() {
    java.lang.Object ref = allocatorName_;
    if (ref instanceof java.lang.String) {
      com.google.protobuf.ByteString b = 
          com.google.protobuf.ByteString.copyFromUtf8(
              (java.lang.String) ref);
      allocatorName_ = b;
      return b;
    } else {
      return (com.google.protobuf.ByteString) ref;
    }
  }

  public static final int ALLOCATION_ID_FIELD_NUMBER = 4;
  private long allocationId_;
  /**
   * <pre>
   * Identifier of the allocated buffer if known
   * </pre>
   *
   * <code>int64 allocation_id = 4;</code>
   * @return The allocationId.
   */
  public long getAllocationId() {
    return allocationId_;
  }

  public static final int HAS_SINGLE_REFERENCE_FIELD_NUMBER = 5;
  private boolean hasSingleReference_;
  /**
   * <pre>
   * Set if this tensor only has one remaining reference
   * </pre>
   *
   * <code>bool has_single_reference = 5;</code>
   * @return The hasSingleReference.
   */
  public boolean getHasSingleReference() {
    return hasSingleReference_;
  }

  public static final int PTR_FIELD_NUMBER = 6;
  private long ptr_;
  /**
   * <pre>
   * Address of the allocation.
   * </pre>
   *
   * <code>uint64 ptr = 6;</code>
   * @return The ptr.
   */
  public long getPtr() {
    return ptr_;
  }

  private byte memoizedIsInitialized = -1;
  @java.lang.Override
  public final boolean isInitialized() {
    byte isInitialized = memoizedIsInitialized;
    if (isInitialized == 1) return true;
    if (isInitialized == 0) return false;

    memoizedIsInitialized = 1;
    return true;
  }

  @java.lang.Override
  public void writeTo(com.google.protobuf.CodedOutputStream output)
                      throws java.io.IOException {
    if (requestedBytes_ != 0L) {
      output.writeInt64(1, requestedBytes_);
    }
    if (allocatedBytes_ != 0L) {
      output.writeInt64(2, allocatedBytes_);
    }
    if (!getAllocatorNameBytes().isEmpty()) {
      com.google.protobuf.GeneratedMessageV3.writeString(output, 3, allocatorName_);
    }
    if (allocationId_ != 0L) {
      output.writeInt64(4, allocationId_);
    }
    if (hasSingleReference_ != false) {
      output.writeBool(5, hasSingleReference_);
    }
    if (ptr_ != 0L) {
      output.writeUInt64(6, ptr_);
    }
    unknownFields.writeTo(output);
  }

  @java.lang.Override
  public int getSerializedSize() {
    int size = memoizedSize;
    if (size != -1) return size;

    size = 0;
    if (requestedBytes_ != 0L) {
      size += com.google.protobuf.CodedOutputStream
        .computeInt64Size(1, requestedBytes_);
    }
    if (allocatedBytes_ != 0L) {
      size += com.google.protobuf.CodedOutputStream
        .computeInt64Size(2, allocatedBytes_);
    }
    if (!getAllocatorNameBytes().isEmpty()) {
      size += com.google.protobuf.GeneratedMessageV3.computeStringSize(3, allocatorName_);
    }
    if (allocationId_ != 0L) {
      size += com.google.protobuf.CodedOutputStream
        .computeInt64Size(4, allocationId_);
    }
    if (hasSingleReference_ != false) {
      size += com.google.protobuf.CodedOutputStream
        .computeBoolSize(5, hasSingleReference_);
    }
    if (ptr_ != 0L) {
      size += com.google.protobuf.CodedOutputStream
        .computeUInt64Size(6, ptr_);
    }
    size += unknownFields.getSerializedSize();
    memoizedSize = size;
    return size;
  }

  @java.lang.Override
  public boolean equals(final java.lang.Object obj) {
    if (obj == this) {
     return true;
    }
    if (!(obj instanceof org.tensorflow.framework.AllocationDescription)) {
      return super.equals(obj);
    }
    org.tensorflow.framework.AllocationDescription other = (org.tensorflow.framework.AllocationDescription) obj;

    if (getRequestedBytes()
        != other.getRequestedBytes()) return false;
    if (getAllocatedBytes()
        != other.getAllocatedBytes()) return false;
    if (!getAllocatorName()
        .equals(other.getAllocatorName())) return false;
    if (getAllocationId()
        != other.getAllocationId()) return false;
    if (getHasSingleReference()
        != other.getHasSingleReference()) return false;
    if (getPtr()
        != other.getPtr()) return false;
    if (!unknownFields.equals(other.unknownFields)) return false;
    return true;
  }

  @java.lang.Override
  public int hashCode() {
    if (memoizedHashCode != 0) {
      return memoizedHashCode;
    }
    int hash = 41;
    hash = (19 * hash) + getDescriptor().hashCode();
    hash = (37 * hash) + REQUESTED_BYTES_FIELD_NUMBER;
    hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
        getRequestedBytes());
    hash = (37 * hash) + ALLOCATED_BYTES_FIELD_NUMBER;
    hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
        getAllocatedBytes());
    hash = (37 * hash) + ALLOCATOR_NAME_FIELD_NUMBER;
    hash = (53 * hash) + getAllocatorName().hashCode();
    hash = (37 * hash) + ALLOCATION_ID_FIELD_NUMBER;
    hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
        getAllocationId());
    hash = (37 * hash) + HAS_SINGLE_REFERENCE_FIELD_NUMBER;
    hash = (53 * hash) + com.google.protobuf.Internal.hashBoolean(
        getHasSingleReference());
    hash = (37 * hash) + PTR_FIELD_NUMBER;
    hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
        getPtr());
    hash = (29 * hash) + unknownFields.hashCode();
    memoizedHashCode = hash;
    return hash;
  }

  public static org.tensorflow.framework.AllocationDescription parseFrom(
      java.nio.ByteBuffer data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data);
  }
  public static org.tensorflow.framework.AllocationDescription parseFrom(
      java.nio.ByteBuffer data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data, extensionRegistry);
  }
  public static org.tensorflow.framework.AllocationDescription parseFrom(
      com.google.protobuf.ByteString data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data);
  }
  public static org.tensorflow.framework.AllocationDescription parseFrom(
      com.google.protobuf.ByteString data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data, extensionRegistry);
  }
  public static org.tensorflow.framework.AllocationDescription parseFrom(byte[] data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data);
  }
  public static org.tensorflow.framework.AllocationDescription parseFrom(
      byte[] data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data, extensionRegistry);
  }
  public static org.tensorflow.framework.AllocationDescription parseFrom(java.io.InputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3
        .parseWithIOException(PARSER, input);
  }
  public static org.tensorflow.framework.AllocationDescription parseFrom(
      java.io.InputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3
        .parseWithIOException(PARSER, input, extensionRegistry);
  }
  public static org.tensorflow.framework.AllocationDescription parseDelimitedFrom(java.io.InputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3
        .parseDelimitedWithIOException(PARSER, input);
  }
  public static org.tensorflow.framework.AllocationDescription parseDelimitedFrom(
      java.io.InputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3
        .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
  }
  public static org.tensorflow.framework.AllocationDescription parseFrom(
      com.google.protobuf.CodedInputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3
        .parseWithIOException(PARSER, input);
  }
  public static org.tensorflow.framework.AllocationDescription parseFrom(
      com.google.protobuf.CodedInputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3
        .parseWithIOException(PARSER, input, extensionRegistry);
  }

  @java.lang.Override
  public Builder newBuilderForType() { return newBuilder(); }
  public static Builder newBuilder() {
    return DEFAULT_INSTANCE.toBuilder();
  }
  public static Builder newBuilder(org.tensorflow.framework.AllocationDescription prototype) {
    return DEFAULT_INSTANCE.toBuilder().mergeFrom(prototype);
  }
  @java.lang.Override
  public Builder toBuilder() {
    return this == DEFAULT_INSTANCE
        ? new Builder() : new Builder().mergeFrom(this);
  }

  @java.lang.Override
  protected Builder newBuilderForType(
      com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
    Builder builder = new Builder(parent);
    return builder;
  }
  /**
   * Protobuf type {@code tensorflow.AllocationDescription}
   */
  public static final class Builder extends
      com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
      // @@protoc_insertion_point(builder_implements:tensorflow.AllocationDescription)
      org.tensorflow.framework.AllocationDescriptionOrBuilder {
    public static final com.google.protobuf.Descriptors.Descriptor
        getDescriptor() {
      return org.tensorflow.framework.AllocationDescriptionProtos.internal_static_tensorflow_AllocationDescription_descriptor;
    }

    @java.lang.Override
    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return org.tensorflow.framework.AllocationDescriptionProtos.internal_static_tensorflow_AllocationDescription_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              org.tensorflow.framework.AllocationDescription.class, org.tensorflow.framework.AllocationDescription.Builder.class);
    }

    // Construct using org.tensorflow.framework.AllocationDescription.newBuilder()
    private Builder() {
      maybeForceBuilderInitialization();
    }

    private Builder(
        com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
      super(parent);
      maybeForceBuilderInitialization();
    }
    private void maybeForceBuilderInitialization() {
      if (com.google.protobuf.GeneratedMessageV3
              .alwaysUseFieldBuilders) {
      }
    }
    @java.lang.Override
    public Builder clear() {
      super.clear();
      requestedBytes_ = 0L;

      allocatedBytes_ = 0L;

      allocatorName_ = "";

      allocationId_ = 0L;

      hasSingleReference_ = false;

      ptr_ = 0L;

      return this;
    }

    @java.lang.Override
    public com.google.protobuf.Descriptors.Descriptor
        getDescriptorForType() {
      return org.tensorflow.framework.AllocationDescriptionProtos.internal_static_tensorflow_AllocationDescription_descriptor;
    }

    @java.lang.Override
    public org.tensorflow.framework.AllocationDescription getDefaultInstanceForType() {
      return org.tensorflow.framework.AllocationDescription.getDefaultInstance();
    }

    @java.lang.Override
    public org.tensorflow.framework.AllocationDescription build() {
      org.tensorflow.framework.AllocationDescription result = buildPartial();
      if (!result.isInitialized()) {
        throw newUninitializedMessageException(result);
      }
      return result;
    }

    @java.lang.Override
    public org.tensorflow.framework.AllocationDescription buildPartial() {
      org.tensorflow.framework.AllocationDescription result = new org.tensorflow.framework.AllocationDescription(this);
      result.requestedBytes_ = requestedBytes_;
      result.allocatedBytes_ = allocatedBytes_;
      result.allocatorName_ = allocatorName_;
      result.allocationId_ = allocationId_;
      result.hasSingleReference_ = hasSingleReference_;
      result.ptr_ = ptr_;
      onBuilt();
      return result;
    }

    @java.lang.Override
    public Builder clone() {
      return super.clone();
    }
    @java.lang.Override
    public Builder setField(
        com.google.protobuf.Descriptors.FieldDescriptor field,
        java.lang.Object value) {
      return super.setField(field, value);
    }
    @java.lang.Override
    public Builder clearField(
        com.google.protobuf.Descriptors.FieldDescriptor field) {
      return super.clearField(field);
    }
    @java.lang.Override
    public Builder clearOneof(
        com.google.protobuf.Descriptors.OneofDescriptor oneof) {
      return super.clearOneof(oneof);
    }
    @java.lang.Override
    public Builder setRepeatedField(
        com.google.protobuf.Descriptors.FieldDescriptor field,
        int index, java.lang.Object value) {
      return super.setRepeatedField(field, index, value);
    }
    @java.lang.Override
    public Builder addRepeatedField(
        com.google.protobuf.Descriptors.FieldDescriptor field,
        java.lang.Object value) {
      return super.addRepeatedField(field, value);
    }
    @java.lang.Override
    public Builder mergeFrom(com.google.protobuf.Message other) {
      if (other instanceof org.tensorflow.framework.AllocationDescription) {
        return mergeFrom((org.tensorflow.framework.AllocationDescription)other);
      } else {
        super.mergeFrom(other);
        return this;
      }
    }

    public Builder mergeFrom(org.tensorflow.framework.AllocationDescription other) {
      if (other == org.tensorflow.framework.AllocationDescription.getDefaultInstance()) return this;
      if (other.getRequestedBytes() != 0L) {
        setRequestedBytes(other.getRequestedBytes());
      }
      if (other.getAllocatedBytes() != 0L) {
        setAllocatedBytes(other.getAllocatedBytes());
      }
      if (!other.getAllocatorName().isEmpty()) {
        allocatorName_ = other.allocatorName_;
        onChanged();
      }
      if (other.getAllocationId() != 0L) {
        setAllocationId(other.getAllocationId());
      }
      if (other.getHasSingleReference() != false) {
        setHasSingleReference(other.getHasSingleReference());
      }
      if (other.getPtr() != 0L) {
        setPtr(other.getPtr());
      }
      this.mergeUnknownFields(other.unknownFields);
      onChanged();
      return this;
    }

    @java.lang.Override
    public final boolean isInitialized() {
      return true;
    }

    @java.lang.Override
    public Builder mergeFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      org.tensorflow.framework.AllocationDescription parsedMessage = null;
      try {
        parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
      } catch (com.google.protobuf.InvalidProtocolBufferException e) {
        parsedMessage = (org.tensorflow.framework.AllocationDescription) e.getUnfinishedMessage();
        throw e.unwrapIOException();
      } finally {
        if (parsedMessage != null) {
          mergeFrom(parsedMessage);
        }
      }
      return this;
    }

    private long requestedBytes_ ;
    /**
     * <pre>
     * Total number of bytes requested
     * </pre>
     *
     * <code>int64 requested_bytes = 1;</code>
     * @return The requestedBytes.
     */
    public long getRequestedBytes() {
      return requestedBytes_;
    }
    /**
     * <pre>
     * Total number of bytes requested
     * </pre>
     *
     * <code>int64 requested_bytes = 1;</code>
     * @param value The requestedBytes to set.
     * @return This builder for chaining.
     */
    public Builder setRequestedBytes(long value) {
      
      requestedBytes_ = value;
      onChanged();
      return this;
    }
    /**
     * <pre>
     * Total number of bytes requested
     * </pre>
     *
     * <code>int64 requested_bytes = 1;</code>
     * @return This builder for chaining.
     */
    public Builder clearRequestedBytes() {
      
      requestedBytes_ = 0L;
      onChanged();
      return this;
    }

    private long allocatedBytes_ ;
    /**
     * <pre>
     * Total number of bytes allocated if known
     * </pre>
     *
     * <code>int64 allocated_bytes = 2;</code>
     * @return The allocatedBytes.
     */
    public long getAllocatedBytes() {
      return allocatedBytes_;
    }
    /**
     * <pre>
     * Total number of bytes allocated if known
     * </pre>
     *
     * <code>int64 allocated_bytes = 2;</code>
     * @param value The allocatedBytes to set.
     * @return This builder for chaining.
     */
    public Builder setAllocatedBytes(long value) {
      
      allocatedBytes_ = value;
      onChanged();
      return this;
    }
    /**
     * <pre>
     * Total number of bytes allocated if known
     * </pre>
     *
     * <code>int64 allocated_bytes = 2;</code>
     * @return This builder for chaining.
     */
    public Builder clearAllocatedBytes() {
      
      allocatedBytes_ = 0L;
      onChanged();
      return this;
    }

    private java.lang.Object allocatorName_ = "";
    /**
     * <pre>
     * Name of the allocator used
     * </pre>
     *
     * <code>string allocator_name = 3;</code>
     * @return The allocatorName.
     */
    public java.lang.String getAllocatorName() {
      java.lang.Object ref = allocatorName_;
      if (!(ref instanceof java.lang.String)) {
        com.google.protobuf.ByteString bs =
            (com.google.protobuf.ByteString) ref;
        java.lang.String s = bs.toStringUtf8();
        allocatorName_ = s;
        return s;
      } else {
        return (java.lang.String) ref;
      }
    }
    /**
     * <pre>
     * Name of the allocator used
     * </pre>
     *
     * <code>string allocator_name = 3;</code>
     * @return The bytes for allocatorName.
     */
    public com.google.protobuf.ByteString
        getAllocatorNameBytes() {
      java.lang.Object ref = allocatorName_;
      if (ref instanceof String) {
        com.google.protobuf.ByteString b = 
            com.google.protobuf.ByteString.copyFromUtf8(
                (java.lang.String) ref);
        allocatorName_ = b;
        return b;
      } else {
        return (com.google.protobuf.ByteString) ref;
      }
    }
    /**
     * <pre>
     * Name of the allocator used
     * </pre>
     *
     * <code>string allocator_name = 3;</code>
     * @param value The allocatorName to set.
     * @return This builder for chaining.
     */
    public Builder setAllocatorName(
        java.lang.String value) {
      if (value == null) {
    throw new NullPointerException();
  }
  
      allocatorName_ = value;
      onChanged();
      return this;
    }
    /**
     * <pre>
     * Name of the allocator used
     * </pre>
     *
     * <code>string allocator_name = 3;</code>
     * @return This builder for chaining.
     */
    public Builder clearAllocatorName() {
      
      allocatorName_ = getDefaultInstance().getAllocatorName();
      onChanged();
      return this;
    }
    /**
     * <pre>
     * Name of the allocator used
     * </pre>
     *
     * <code>string allocator_name = 3;</code>
     * @param value The bytes for allocatorName to set.
     * @return This builder for chaining.
     */
    public Builder setAllocatorNameBytes(
        com.google.protobuf.ByteString value) {
      if (value == null) {
    throw new NullPointerException();
  }
  checkByteStringIsUtf8(value);
      
      allocatorName_ = value;
      onChanged();
      return this;
    }

    private long allocationId_ ;
    /**
     * <pre>
     * Identifier of the allocated buffer if known
     * </pre>
     *
     * <code>int64 allocation_id = 4;</code>
     * @return The allocationId.
     */
    public long getAllocationId() {
      return allocationId_;
    }
    /**
     * <pre>
     * Identifier of the allocated buffer if known
     * </pre>
     *
     * <code>int64 allocation_id = 4;</code>
     * @param value The allocationId to set.
     * @return This builder for chaining.
     */
    public Builder setAllocationId(long value) {
      
      allocationId_ = value;
      onChanged();
      return this;
    }
    /**
     * <pre>
     * Identifier of the allocated buffer if known
     * </pre>
     *
     * <code>int64 allocation_id = 4;</code>
     * @return This builder for chaining.
     */
    public Builder clearAllocationId() {
      
      allocationId_ = 0L;
      onChanged();
      return this;
    }

    private boolean hasSingleReference_ ;
    /**
     * <pre>
     * Set if this tensor only has one remaining reference
     * </pre>
     *
     * <code>bool has_single_reference = 5;</code>
     * @return The hasSingleReference.
     */
    public boolean getHasSingleReference() {
      return hasSingleReference_;
    }
    /**
     * <pre>
     * Set if this tensor only has one remaining reference
     * </pre>
     *
     * <code>bool has_single_reference = 5;</code>
     * @param value The hasSingleReference to set.
     * @return This builder for chaining.
     */
    public Builder setHasSingleReference(boolean value) {
      
      hasSingleReference_ = value;
      onChanged();
      return this;
    }
    /**
     * <pre>
     * Set if this tensor only has one remaining reference
     * </pre>
     *
     * <code>bool has_single_reference = 5;</code>
     * @return This builder for chaining.
     */
    public Builder clearHasSingleReference() {
      
      hasSingleReference_ = false;
      onChanged();
      return this;
    }

    private long ptr_ ;
    /**
     * <pre>
     * Address of the allocation.
     * </pre>
     *
     * <code>uint64 ptr = 6;</code>
     * @return The ptr.
     */
    public long getPtr() {
      return ptr_;
    }
    /**
     * <pre>
     * Address of the allocation.
     * </pre>
     *
     * <code>uint64 ptr = 6;</code>
     * @param value The ptr to set.
     * @return This builder for chaining.
     */
    public Builder setPtr(long value) {
      
      ptr_ = value;
      onChanged();
      return this;
    }
    /**
     * <pre>
     * Address of the allocation.
     * </pre>
     *
     * <code>uint64 ptr = 6;</code>
     * @return This builder for chaining.
     */
    public Builder clearPtr() {
      
      ptr_ = 0L;
      onChanged();
      return this;
    }
    @java.lang.Override
    public final Builder setUnknownFields(
        final com.google.protobuf.UnknownFieldSet unknownFields) {
      return super.setUnknownFields(unknownFields);
    }

    @java.lang.Override
    public final Builder mergeUnknownFields(
        final com.google.protobuf.UnknownFieldSet unknownFields) {
      return super.mergeUnknownFields(unknownFields);
    }


    // @@protoc_insertion_point(builder_scope:tensorflow.AllocationDescription)
  }

  // @@protoc_insertion_point(class_scope:tensorflow.AllocationDescription)
  private static final org.tensorflow.framework.AllocationDescription DEFAULT_INSTANCE;
  static {
    DEFAULT_INSTANCE = new org.tensorflow.framework.AllocationDescription();
  }

  public static org.tensorflow.framework.AllocationDescription getDefaultInstance() {
    return DEFAULT_INSTANCE;
  }

  private static final com.google.protobuf.Parser<AllocationDescription>
      PARSER = new com.google.protobuf.AbstractParser<AllocationDescription>() {
    @java.lang.Override
    public AllocationDescription parsePartialFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return new AllocationDescription(input, extensionRegistry);
    }
  };

  public static com.google.protobuf.Parser<AllocationDescription> parser() {
    return PARSER;
  }

  @java.lang.Override
  public com.google.protobuf.Parser<AllocationDescription> getParserForType() {
    return PARSER;
  }

  @java.lang.Override
  public org.tensorflow.framework.AllocationDescription getDefaultInstanceForType() {
    return DEFAULT_INSTANCE;
  }

}

