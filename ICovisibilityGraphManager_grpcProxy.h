// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef ICOVISIBILITYGRAPHMANAGER_GRPCPROXY_H
#define ICOVISIBILITYGRAPHMANAGER_GRPCPROXY_H
#include "api/storage/ICovisibilityGraphManager.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcICovisibilityGraphManagerService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

namespace org::bcom::xpcf::grpc::proxyICovisibilityGraphManager {

class ICovisibilityGraphManager_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::storage::ICovisibilityGraphManager {
  public:
    ICovisibilityGraphManager_grpcProxy();
    ~ICovisibilityGraphManager_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode increaseEdge(uint32_t const node1_id, uint32_t const node2_id, float const weight)     override;
    SolAR::FrameworkReturnCode decreaseEdge(uint32_t const node1_id, uint32_t const node2_id, float const weight)     override;
    SolAR::FrameworkReturnCode removeEdge(uint32_t const node1_id, uint32_t const node2_id)     override;
    SolAR::FrameworkReturnCode getEdge(uint32_t node1_id, uint32_t node2_id, float& weight)     const     override;
    bool isEdge(uint32_t const node1_id, uint32_t const node2_id)     const     override;
    SolAR::FrameworkReturnCode getAllNodes(std::set<uint32_t>& nodes_id)     const     override;
    SolAR::FrameworkReturnCode suppressNode(uint32_t const node_id)     override;
    SolAR::FrameworkReturnCode getNeighbors(uint32_t const node_id, float const minWeight, std::vector<uint32_t>& neighbors)     const     override;
    SolAR::FrameworkReturnCode minimalSpanningTree(std::vector<std::tuple<uint32_t,uint32_t,float>>& edges_weights, float& minTotalWeights)     override;
    SolAR::FrameworkReturnCode maximalSpanningTree(std::vector<std::tuple<uint32_t,uint32_t,float>>& edges_weights, float& maxTotalWeights)     override;
    SolAR::FrameworkReturnCode getShortestPath(uint32_t node1_id, uint32_t node2_id, std::vector<uint32_t>& path)     override;
    SolAR::FrameworkReturnCode display()     const     override;
    SolAR::FrameworkReturnCode saveToFile(std::string const& file)     const     override;
    SolAR::FrameworkReturnCode loadFromFile(std::string const& file)     override;
    SRef<SolAR::datastructure::CovisibilityGraph> const& getConstCovisibilityGraph()     const     override;
    std::unique_lock<std::mutex> getCovisibilityGraph(SRef<SolAR::datastructure::CovisibilityGraph>& covisibilityGraph)     override;
    void setCovisibilityGraph(SRef<SolAR::datastructure::CovisibilityGraph> const covisibilityGraph)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    std::unique_ptr<::grpcICovisibilityGraphManager::grpcICovisibilityGraphManagerService::Stub> m_grpcStub;
    mutable     SRef<SolAR::datastructure::CovisibilityGraph> m_getConstCovisibilityGraph;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyICovisibilityGraphManager::ICovisibilityGraphManager_grpcProxy>
{
  static constexpr const char * UUID = "e25a8ca5-a9f5-4e38-8648-726ffbd6cbf3";
  static constexpr const char * NAME = "ICovisibilityGraphManager_grpcProxy";
  static constexpr const char * DESCRIPTION = "ICovisibilityGraphManager_grpcProxy grpc client proxy component";
};


#endif