#ifndef SamiSharingApi_H_
#define SamiSharingApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiPermission.h"
using Tizen::Base::Collection::IList;
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiSharingApi {
public:
  SamiSharingApi();
  virtual ~SamiSharingApi();

  
  void 
  sharingPostWithCompletion(IList* sharingData, void(* handler)(SamiError*));
  
  void 
  sharingDeleteWithCompletion(IList* sharingData, void(* handler)(SamiError*));
  
  void 
  sharingVariableNameGetWithCompletion(String* variableName, void(* handler)(SamiError*));
  
  static String getBasePath() {
    return L"https://localhost/api";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiSharingApi_H_ */
