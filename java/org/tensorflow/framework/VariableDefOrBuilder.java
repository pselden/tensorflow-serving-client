// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/framework/variable.proto

package org.tensorflow.framework;

public interface VariableDefOrBuilder extends
    // @@protoc_insertion_point(interface_extends:tensorflow.VariableDef)
    com.google.protobuf.MessageOrBuilder {

  /**
   * <pre>
   * Name of the variable tensor.
   * </pre>
   *
   * <code>string variable_name = 1;</code>
   * @return The variableName.
   */
  java.lang.String getVariableName();
  /**
   * <pre>
   * Name of the variable tensor.
   * </pre>
   *
   * <code>string variable_name = 1;</code>
   * @return The bytes for variableName.
   */
  com.google.protobuf.ByteString
      getVariableNameBytes();

  /**
   * <pre>
   * Name of the tensor holding the variable's initial value.
   * </pre>
   *
   * <code>string initial_value_name = 6;</code>
   * @return The initialValueName.
   */
  java.lang.String getInitialValueName();
  /**
   * <pre>
   * Name of the tensor holding the variable's initial value.
   * </pre>
   *
   * <code>string initial_value_name = 6;</code>
   * @return The bytes for initialValueName.
   */
  com.google.protobuf.ByteString
      getInitialValueNameBytes();

  /**
   * <pre>
   * Name of the initializer op.
   * </pre>
   *
   * <code>string initializer_name = 2;</code>
   * @return The initializerName.
   */
  java.lang.String getInitializerName();
  /**
   * <pre>
   * Name of the initializer op.
   * </pre>
   *
   * <code>string initializer_name = 2;</code>
   * @return The bytes for initializerName.
   */
  com.google.protobuf.ByteString
      getInitializerNameBytes();

  /**
   * <pre>
   * Name of the snapshot tensor.
   * </pre>
   *
   * <code>string snapshot_name = 3;</code>
   * @return The snapshotName.
   */
  java.lang.String getSnapshotName();
  /**
   * <pre>
   * Name of the snapshot tensor.
   * </pre>
   *
   * <code>string snapshot_name = 3;</code>
   * @return The bytes for snapshotName.
   */
  com.google.protobuf.ByteString
      getSnapshotNameBytes();

  /**
   * <pre>
   * Support for saving variables as slices of a larger variable.
   * </pre>
   *
   * <code>.tensorflow.SaveSliceInfoDef save_slice_info_def = 4;</code>
   * @return Whether the saveSliceInfoDef field is set.
   */
  boolean hasSaveSliceInfoDef();
  /**
   * <pre>
   * Support for saving variables as slices of a larger variable.
   * </pre>
   *
   * <code>.tensorflow.SaveSliceInfoDef save_slice_info_def = 4;</code>
   * @return The saveSliceInfoDef.
   */
  org.tensorflow.framework.SaveSliceInfoDef getSaveSliceInfoDef();
  /**
   * <pre>
   * Support for saving variables as slices of a larger variable.
   * </pre>
   *
   * <code>.tensorflow.SaveSliceInfoDef save_slice_info_def = 4;</code>
   */
  org.tensorflow.framework.SaveSliceInfoDefOrBuilder getSaveSliceInfoDefOrBuilder();

  /**
   * <pre>
   * Whether to represent this as a ResourceVariable.
   * </pre>
   *
   * <code>bool is_resource = 5;</code>
   * @return The isResource.
   */
  boolean getIsResource();

  /**
   * <pre>
   * Whether this variable should be trained.
   * </pre>
   *
   * <code>bool trainable = 7;</code>
   * @return The trainable.
   */
  boolean getTrainable();

  /**
   * <pre>
   * Indicates when a distributed variable will be synced.
   * </pre>
   *
   * <code>.tensorflow.VariableSynchronization synchronization = 8;</code>
   * @return The enum numeric value on the wire for synchronization.
   */
  int getSynchronizationValue();
  /**
   * <pre>
   * Indicates when a distributed variable will be synced.
   * </pre>
   *
   * <code>.tensorflow.VariableSynchronization synchronization = 8;</code>
   * @return The synchronization.
   */
  org.tensorflow.framework.VariableSynchronization getSynchronization();

  /**
   * <pre>
   * Indicates how a distributed variable will be aggregated.
   * </pre>
   *
   * <code>.tensorflow.VariableAggregation aggregation = 9;</code>
   * @return The enum numeric value on the wire for aggregation.
   */
  int getAggregationValue();
  /**
   * <pre>
   * Indicates how a distributed variable will be aggregated.
   * </pre>
   *
   * <code>.tensorflow.VariableAggregation aggregation = 9;</code>
   * @return The aggregation.
   */
  org.tensorflow.framework.VariableAggregation getAggregation();
}
