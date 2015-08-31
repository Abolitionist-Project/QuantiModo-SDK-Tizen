#ifndef SamiConnectorsApi_H_
#define SamiConnectorsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiConnector.h"
using Tizen::Base::String;
#include "SamiConnectorInfo.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiConnectorsApi {
public:
  SamiConnectorsApi();
  virtual ~SamiConnectorsApi();

  
  IList* 
  v1ConnectorsListGetWithCompletion( void (* handler)(IList*, SamiError*));
  
  void 
  v1ConnectorsConnectorConnectGetWithCompletion(String* connector, void(* handler)(SamiError*));
  
  void 
  v1ConnectorsConnectorDisconnectGetWithCompletion(String* connector, void(* handler)(SamiError*));
  
  SamiConnectorInfo* 
  v1ConnectorsConnectorInfoGetWithCompletion(String* connector, void (* handler)(SamiConnectorInfo*, SamiError*));
  
  void 
  v1ConnectorsConnectorUpdateGetWithCompletion(String* connector, void(* handler)(SamiError*));
  
  static String getBasePath() {
    return L"https://localhost/api";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiConnectorsApi_H_ */
