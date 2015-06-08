#ifndef SamiConnectApi_H_
#define SamiConnectApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiConnectApi {
public:
  SamiConnectApi();
  virtual ~SamiConnectApi();

  
  void 
  v1ConnectJsGetWithCompletion(String* t, void(* handler)(SamiError*));
  
  void 
  v1ConnectMobileGetWithCompletion(String* t, void(* handler)(SamiError*));
  
  static String getBasePath() {
    return L"https://localhost/api";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiConnectApi_H_ */
