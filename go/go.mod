module github.com/figroc/tensorflow-serving-client/go

go 1.12

require (
	github.com/golang/protobuf v1.3.0
	google.golang.org/grpc v1.23.0
)

replace tensorflow_serving => ./tensorflow_serving

replace tensorflow => ./tensorflow