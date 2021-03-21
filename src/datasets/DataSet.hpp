#pragma once
#include <string>
#include <hdf5/H5Cpp.h>


class DataSet
{
protected:
  DataSet(const std::wstring& configName_)
    : m_configName(configName_)
  {
  }

  DataSet() = delete;
  DataSet(const DataSet&) = delete;
  DataSet& operator=(const DataSet&) = delete;

  virtual ~DataSet() = default;

  const std::wstring& ConfigName() const {
    return m_configName;
  };

  hid_t m_id{};
  const std::wstring m_configName;
};