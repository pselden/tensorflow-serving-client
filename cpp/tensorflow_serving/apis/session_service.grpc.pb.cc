// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: tensorflow_serving/apis/session_service.proto

#include "tensorflow_serving/apis/session_service.pb.h"
#include "tensorflow_serving/apis/session_service.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace tensorflow {
namespace serving {

static const char* SessionService_method_names[] = {
  "/tensorflow.serving.SessionService/SessionRun",
};

std::unique_ptr< SessionService::Stub> SessionService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< SessionService::Stub> stub(new SessionService::Stub(channel));
  return stub;
}

SessionService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_SessionRun_(SessionService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status SessionService::Stub::SessionRun(::grpc::ClientContext* context, const ::tensorflow::serving::SessionRunRequest& request, ::tensorflow::serving::SessionRunResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_SessionRun_, context, request, response);
}

void SessionService::Stub::experimental_async::SessionRun(::grpc::ClientContext* context, const ::tensorflow::serving::SessionRunRequest* request, ::tensorflow::serving::SessionRunResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_SessionRun_, context, request, response, std::move(f));
}

void SessionService::Stub::experimental_async::SessionRun(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::tensorflow::serving::SessionRunResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_SessionRun_, context, request, response, std::move(f));
}

void SessionService::Stub::experimental_async::SessionRun(::grpc::ClientContext* context, const ::tensorflow::serving::SessionRunRequest* request, ::tensorflow::serving::SessionRunResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_SessionRun_, context, request, response, reactor);
}

void SessionService::Stub::experimental_async::SessionRun(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::tensorflow::serving::SessionRunResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_SessionRun_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::tensorflow::serving::SessionRunResponse>* SessionService::Stub::AsyncSessionRunRaw(::grpc::ClientContext* context, const ::tensorflow::serving::SessionRunRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::tensorflow::serving::SessionRunResponse>::Create(channel_.get(), cq, rpcmethod_SessionRun_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::tensorflow::serving::SessionRunResponse>* SessionService::Stub::PrepareAsyncSessionRunRaw(::grpc::ClientContext* context, const ::tensorflow::serving::SessionRunRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::tensorflow::serving::SessionRunResponse>::Create(channel_.get(), cq, rpcmethod_SessionRun_, context, request, false);
}

SessionService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SessionService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< SessionService::Service, ::tensorflow::serving::SessionRunRequest, ::tensorflow::serving::SessionRunResponse>(
          std::mem_fn(&SessionService::Service::SessionRun), this)));
}

SessionService::Service::~Service() {
}

::grpc::Status SessionService::Service::SessionRun(::grpc::ServerContext* context, const ::tensorflow::serving::SessionRunRequest* request, ::tensorflow::serving::SessionRunResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace tensorflow
}  // namespace serving

