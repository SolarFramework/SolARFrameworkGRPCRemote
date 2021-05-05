// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IMapFilter_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIMapFilter::IMapFilter_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIMapFilter::IMapFilter_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIMapFilter {

IMapFilter_grpcServer::IMapFilter_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IMapFilter_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::solver::map::IMapFilter>(m_grpcService.m_xpcfComponent);
}


void IMapFilter_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IMapFilter_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IMapFilter_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IMapFilter_grpcServer::grpcIMapFilterServiceImpl::filter_grpc0(::grpc::ServerContext* context, const ::grpcIMapFilter::filter_grpc0Request* request, ::grpcIMapFilter::filter_grpc0Response* response)
{
  SolAR::datastructure::Transform3Df pose1 = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->pose1());
  SolAR::datastructure::Transform3Df pose2 = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->pose2());
  std::vector<SRef<SolAR::datastructure::CloudPoint>> input = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(request->input());
  std::vector<SRef<SolAR::datastructure::CloudPoint>> output = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(request->output());
  m_xpcfComponent->filter(pose1, pose2, input, output);
  response->set_output(xpcf::serialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(output));
  return ::grpc::Status::OK;
}


::grpc::Status IMapFilter_grpcServer::grpcIMapFilterServiceImpl::filter_grpc1(::grpc::ServerContext* context, const ::grpcIMapFilter::filter_grpc1Request* request, ::grpcIMapFilter::filter_grpc1Response* response)
{
  SolAR::datastructure::Transform3Df pose1 = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->pose1());
  SolAR::datastructure::Transform3Df pose2 = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->pose2());
  std::vector<SRef<SolAR::datastructure::CloudPoint>> input = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(request->input());
  std::vector<SRef<SolAR::datastructure::CloudPoint>> output = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(request->output());
  std::vector<int> index = xpcf::deserialize<std::vector<int>>(request->index());
  m_xpcfComponent->filter(pose1, pose2, input, output, index);
  response->set_output(xpcf::serialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(output));
  response->set_index(xpcf::serialize<std::vector<int>>(index));
  return ::grpc::Status::OK;
}


}

