// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IIMAGE2WORLDMAPPER_GRPCPROXY_H
#define IIMAGE2WORLDMAPPER_GRPCPROXY_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/geom/IImage2WorldMapper.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcIImage2WorldMapperService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

namespace org::bcom::xpcf::grpc::proxyIImage2WorldMapper {

class IImage2WorldMapper_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::geom::IImage2WorldMapper {
  public:
    IImage2WorldMapper_grpcProxy();
    ~IImage2WorldMapper_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode map(std::vector<SolAR::datastructure::Point2Df> const& digitalPoints, std::vector<SolAR::datastructure::Point3Df>& worldPoints)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    std::unique_ptr<::grpcIImage2WorldMapper::grpcIImage2WorldMapperService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIImage2WorldMapper::IImage2WorldMapper_grpcProxy>
{
  static constexpr const char * UUID = "ee271e06-f9df-41f2-8a66-42efc0fb729e";
  static constexpr const char * NAME = "IImage2WorldMapper_grpcProxy";
  static constexpr const char * DESCRIPTION = "IImage2WorldMapper_grpcProxy grpc client proxy component";
};


#endif