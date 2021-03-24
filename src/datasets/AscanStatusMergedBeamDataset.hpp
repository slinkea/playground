#pragma once
#include "AscanStatusDataset.hpp"
#include "IAscanDataset.h"


class AscanStatusMergedBeamDataset : public AscanStatusDataset, public IAscanDataset
{
public:
  AscanStatusMergedBeamDataset(hid_t Id_, const std::string& location_)
    : AscanStatusDataset(Id_, location_)
  {
  }

  AscanStatusMergedBeamDataset() = delete;
  AscanStatusMergedBeamDataset(const AscanStatusMergedBeamDataset&) = delete;
  AscanStatusMergedBeamDataset& operator=(const AscanStatusMergedBeamDataset&) = delete;

  virtual ~AscanStatusMergedBeamDataset() = default;

  const std::string& Location() const override {
    return AscanStatusDataset::Location();
  };

  const AscanAttributes& Attributes() const override {
    return AscanStatusDataset::Attributes();
  }

  const AscanDataspace& Dataspace() const override {
    return AscanStatusDataset::Dataspace();
  };

  void Read(void* dataOut_) const override
  {
  }
};