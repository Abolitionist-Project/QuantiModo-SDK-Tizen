#ifndef SamiConnectorsApi_H_
#define SamiConnectorsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::String;
using Tizen::Base::Boolean;
#include "SamiConnectorInstruction.h"
#include "SamiConnectorInfo.h"
#include "SamiConnector.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiConnectorsApi {
public:
  SamiConnectorsApi();
  virtual ~SamiConnectorsApi();

  void 
  v1ConnectJsGetWithCompletion(String* accessToken, void(* handler)(SamiError*));
  void 
  v1ConnectMobileGetWithCompletion(String* accessToken, void(* handler)(SamiError*));
  void 
  v1ConnectorsConnectorConnectGetWithCompletion(String* connector, String* accessToken, void(* handler)(SamiError*));
  void 
  v1ConnectorsConnectorConnectInstructionsGetWithCompletion(String* connector, String* parameters, String* url, Boolean* usePopup, String* accessToken, void(* handler)(SamiError*));
  SamiConnectorInstruction* 
  v1ConnectorsConnectorConnectParameterGetWithCompletion(String* connector, String* displayName, String* key, String* placeholder, String* type, Boolean* usePopup, String* accessToken, String* defaultValue, void (* handler)(SamiConnectorInstruction*, SamiError*));
  void 
  v1ConnectorsConnectorDisconnectGetWithCompletion(String* connector, void(* handler)(SamiError*));
  SamiConnectorInfo* 
  v1ConnectorsConnectorInfoGetWithCompletion(String* connector, String* accessToken, void (* handler)(SamiConnectorInfo*, SamiError*));
  void 
  v1ConnectorsConnectorUpdateGetWithCompletion(String* connector, String* accessToken, void(* handler)(SamiError*));
  IList* 
  v1ConnectorsListGetWithCompletion( void (* handler)(IList*, SamiError*));
  static String getBasePath() {
    return L"https://app.quantimo.do/api";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiConnectorsApi_H_ */
