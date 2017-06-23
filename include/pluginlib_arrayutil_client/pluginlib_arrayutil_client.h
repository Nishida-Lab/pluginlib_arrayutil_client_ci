#ifndef PLUGINLIB_ARRAYUTIL_CLIENT_PLUGINLIB_ARRAYUTIL_CLIENT_H_
#define PLUGINLIB_ARRAYUTIL_CLIENT_PLUGINLIB_ARRAYUTIL_CLIENT_H_

#include <boost/shared_ptr.hpp>

#include <pluginlib/class_loader.h>
#include <pluginlib_arrayutil_ci/arrayutil_base.h>

namespace pluginlib_arrayutil_client
{
  const double ARRAY[] = {1.7, 2.3, 3.2, 4.8};
  const int ARRAY_SIZE = 4;
  const std::string PLUGIN_NAME[] = {
    "pluginlib_arrayutil_ci/Sum", "pluginlib_arrayutil_ci/Ave",
    "pluginlib_arrayutil_ci/Min", "pluginlib_arrayutil_ci/Max"
  };
  const int PLUGIN_SIZE = 4;

  class PluginlibArrayutilClient
  {
    typedef boost::shared_ptr<arrayutil_ci_base::ArrayUtil> LoaderPtr;

    public:
    PluginlibArrayutilClient() :
      arrayutil_loader_("pluginlib_arrayutil_ci", "arrayutil_ci_base::ArrayUtil"),
      vec_(ARRAY, ARRAY + ARRAY_SIZE)
    { };

    void run();

    private:

    void loadAllPlugins();
    void operateAllPlugins();

    std::vector<double> vec_;
    pluginlib::ClassLoader<arrayutil_ci_base::ArrayUtil> arrayutil_loader_;
    std::vector<LoaderPtr> pluginInstances_;
  };
}

#endif
