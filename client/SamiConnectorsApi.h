#ifndef SamiConnectorsApi_H_
#define SamiConnectorsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiConnector.h"
using Tizen::Base::String;
using Tizen::Base::Boolean;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiConnectorsApi {
public:
  SamiConnectorsApi();
  virtual ~SamiConnectorsApi();

  
  IList* 
  connectorsListGetWithCompletion( void (* handler)(IList*, SamiError*));
  
  void 
  connectorsConnectorConnectGetWithCompletion(String* connector, void(* handler)(SamiError*));
  
  void 
  connectorsConnectorConnectInstructionsGetWithCompletion(String* connector, String* url, IList* parameters, Boolean* usePopup, void(* handler)(SamiError*));
  
  void 
  connectorsConnectorConnectParameterGetWithCompletion(String* connector, String* displayName, String* key, Boolean* usePopup, String* type, String* placeholder, String* defaultValue, void(* handler)(SamiError*));
  
  void 
  connectorsConnectorDisconnectGetWithCompletion(String* connector, void(* handler)(SamiError*));
  
  void 
  connectorsConnectorInfoGetWithCompletion(String* connector, void(* handler)(SamiError*));
  
  void 
  connectorsConnectorUpdateGetWithCompletion(String* connector, void(* handler)(SamiError*));
  
  static String getBasePath() {
    return L"https://localhost/api";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiConnectorsApi_H_ */
