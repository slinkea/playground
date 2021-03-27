#pragma once
#include "Storage/DataSource.hpp"


class AscanDataSource : public DataSource
{
public:
  AscanDataSource(const fs::path& filePath_, const TConfigIdPair& configIds_, bool beamDataMerged_)
    : DataSource(filePath_, configIds_)
    , m_beamDataMerged(beamDataMerged_)
  {
  }

  AscanDataSource(const AscanDataSource&) = default;
  virtual ~AscanDataSource() = default;

  AscanDataSource() = delete;
  AscanDataSource& operator=(const AscanDataSource&) = delete;

  bool IsBeamDataMerged() const {
    return false;
  }

private:
  bool m_beamDataMerged{};
};
